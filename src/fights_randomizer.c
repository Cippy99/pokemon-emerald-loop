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
        for (i = 0; i < n_of_types; i++){
            DebugPrintf("Type %d: %d", i, types[i]);
        }
    #endif
    
    const u16 importantFIghts[] = {VAR_GYM_1_LEADER, VAR_GYM_2_LEADER, VAR_GYM_3_LEADER, VAR_GYM_4_LEADER, VAR_GYM_5_LEADER, VAR_GYM_6_LEADER,
                            VAR_GYM_7_LEADER, VAR_GYM_8_LEADER, VAR_ELITE_FOUR_1_MEMBER, VAR_ELITE_FOUR_2_MEMBER, VAR_ELITE_FOUR_3_MEMBER, VAR_ELITE_FOUR_4_MEMBER};

    //Assign a type to each fight
    for (i = 0; i < NELEMS(importantFIghts); i++){
        VarSet(importantFIghts[i], types[i] << 2);
    }
}

void DebugPrintImportantFightsVarsValue(void){

    u16 i;
    const u16 importantFIghts[] = {VAR_GYM_1_LEADER, VAR_GYM_2_LEADER, VAR_GYM_3_LEADER, VAR_GYM_4_LEADER, VAR_GYM_5_LEADER, VAR_GYM_6_LEADER,
                            VAR_GYM_7_LEADER, VAR_GYM_8_LEADER, VAR_ELITE_FOUR_1_MEMBER, VAR_ELITE_FOUR_2_MEMBER, VAR_ELITE_FOUR_3_MEMBER, VAR_ELITE_FOUR_4_MEMBER};

    for (i = 0; i < NELEMS(importantFIghts); i++){
        #ifndef NDEBUG
            DebugPrintf("Important Fight %d var value: %d", i, VarGet(importantFIghts[i]));
        #endif
    }

}