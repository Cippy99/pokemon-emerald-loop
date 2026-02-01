#include "global.h"
#include "random.h"
#include "pokemon.h"
#include "script.h"
#include "load_save.h"
#include "pokeblock.h"
#include "event_data.h"
#include "text.h"
#include "overworld.h"
#include "save.h"
#include "main.h"
#include "field_specials.h"
#include "constants/vars.h"
#include "constants/pokemon.h"
#include "fights_randomizer.h"
#include "data/trainer_class_mons.h"

void RandomizeImportantFights(void)
{
    u16 trainerId = (gSaveBlock2Ptr->playerTrainerId[1] << 8) | gSaveBlock2Ptr->playerTrainerId[0];
#ifndef NDEBUG
    DebugPrintf("Trainer Id: %d - %x", trainerId, trainerId);
#endif
    SeedRngCustom(trainerId);

    u16 types[] = {TYPE_NORMAL, TYPE_FIGHTING, TYPE_FLYING, TYPE_POISON, TYPE_GROUND, TYPE_ROCK, TYPE_BUG, TYPE_GHOST, TYPE_STEEL,
                   TYPE_FIRE, TYPE_WATER, TYPE_GRASS, TYPE_ELECTRIC, TYPE_PSYCHIC, TYPE_ICE, TYPE_DRAGON, TYPE_DARK, TYPE_FAIRY};
    u16 n_of_types = NUMBER_OF_MON_TYPES - 1; // TYPE_MYSTERY not counted

    // Shuffle types
    ShuffleList(types, n_of_types);

    u16 i;

#ifndef NDEBUG
    for (i = 0; i < n_of_types; i++)
    {
        DebugPrintf("Type %d: %d", i, types[i]);
    }
#endif

    const u16 importantFIghts[] = {VAR_GYM_1_LEADER, VAR_GYM_2_LEADER, VAR_GYM_3_LEADER, VAR_GYM_4_LEADER, VAR_GYM_5_LEADER, VAR_GYM_6_LEADER,
                                   VAR_GYM_7_LEADER, VAR_GYM_8_LEADER, VAR_ELITE_FOUR_1_MEMBER, VAR_ELITE_FOUR_2_MEMBER, VAR_ELITE_FOUR_3_MEMBER, VAR_ELITE_FOUR_4_MEMBER};

    // Assign a type to each fight
    for (i = 0; i < NELEMS(importantFIghts); i++)
    {
        VarSet(importantFIghts[i], types[i] << 2);

        // Set is always 0 for now. A random number between 0 and 3 should be added to each var in order to randomize it.
    }
}

void DebugPrintImportantFightsVarsValue(void)
{

    u16 i;
    const u16 importantFIghts[] = {VAR_GYM_1_LEADER, VAR_GYM_2_LEADER, VAR_GYM_3_LEADER, VAR_GYM_4_LEADER, VAR_GYM_5_LEADER, VAR_GYM_6_LEADER,
                                   VAR_GYM_7_LEADER, VAR_GYM_8_LEADER, VAR_ELITE_FOUR_1_MEMBER, VAR_ELITE_FOUR_2_MEMBER, VAR_ELITE_FOUR_3_MEMBER, VAR_ELITE_FOUR_4_MEMBER};

    for (i = 0; i < NELEMS(importantFIghts); i++)
    {
#ifndef NDEBUG
        DebugPrintf("Important Fight %d var value: %d", i, VarGet(importantFIghts[i]));
#endif
    }
}

u16 randomizeSpeciesAccordingToLevel(u8 trainerClass, u8 level, u16 trainerNum, u32 *randomState)
{
    const struct TrainerSpeciesList speciesList = sTrainerClassMons[trainerClass];
    u32 i = generateRandomNumberForTrainerBattle(randomState, trainerNum);
    u16 species = SPECIES_NONE;
    while (species == SPECIES_NONE)
    {
        species = getCorrectSpeciesEvolutionAtLevel(speciesList.species[i % speciesList.count], level, trainerNum);
    }
    return species;
}

u16 getCorrectSpeciesEvolutionAtLevel(u16 species, u8 level, u16 trainerNum)
{
    DebugPrintf("Species: %d", species);
    const struct Evolution *evolutions = GetSpeciesEvolutions(species);
    u8 i = 0; // Number of evos

    if (evolutions != NULL)
    {
        while (evolutions[i].method != EVOLUTIONS_END && SanitizeSpeciesId(evolutions[i].targetSpecies) != SPECIES_NONE)
        {
            i++;
        }
    }

    DebugPrintf("Has %d evolutions", i);

    // se non ci sono evoluzioni controllo la legalità
    if (i == 0 && isSpeciesLegal(species, level))
        return species;

    // Ho almeno un evoluzione
    if (i > 0)
    {
        // Scelgo un evoluzione a caso
        struct Evolution evoRandom = evolutions[trainerNum % i];
        DebugPrintf("Random evo is %d", evoRandom.targetSpecies);

        if (isEvoLegal(evoRandom, level))
        {
            return getCorrectSpeciesEvolutionAtLevel(evoRandom.targetSpecies, level, trainerNum);
        }
        if (isSpeciesLegal(species, level))
        {
            return species;
        }
    }

    return SPECIES_NONE;
}

bool8 isEvoLegal(struct Evolution evo, u8 level)
{

    if (evo.method == EVO_LEVEL && evo.param > level)
    {
        DebugPrintf("evo not legal %d", evo.param);
        return FALSE;
    }
    return isSpeciesLegal(evo.targetSpecies, level);
}

static const u16 sBadgeFlags[NUM_BADGES] =
    {
        FLAG_BADGE01_GET,
        FLAG_BADGE02_GET,
        FLAG_BADGE03_GET,
        FLAG_BADGE04_GET,
        FLAG_BADGE05_GET,
        FLAG_BADGE06_GET,
        FLAG_BADGE07_GET,
        FLAG_BADGE08_GET,
};

static int GetNumOwnedBadges(void)
{
    u32 i;

    for (i = 0; i < NUM_BADGES; i++)
    {
        if (!FlagGet(sBadgeFlags[i]))
            break;
    }

    return i;
}

bool8 isSpeciesLegal(u16 species, u8 level)
{
    u16 bst = gSpeciesInfo[species].baseHP + gSpeciesInfo[species].baseAttack + gSpeciesInfo[species].baseDefense + gSpeciesInfo[species].baseSpeed + gSpeciesInfo[species].baseSpAttack + gSpeciesInfo[species].baseSpDefense;

    DebugPrintf("Has %d bst", bst);
    u16 nBadges = GetNumOwnedBadges();
    DebugPrintf("Player has %d badges", nBadges);

    if (nBadges < 1 && bst <= 330)
        return TRUE;
    if (nBadges < 2 && bst <= 370)
        return TRUE;
    if (nBadges < 3 && bst <= 450)
        return TRUE;
    if (nBadges < 4 && bst < 500)
        return TRUE;
    if (nBadges >= 4)
        return TRUE;

    DebugPrintf("Species is not legal");

    return FALSE;
}