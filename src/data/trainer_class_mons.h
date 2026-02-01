#include "constants/trainers.h"

#define TRAINER_SPECIES_LIST(list) list, ARRAY_COUNT(list)

struct TrainerSpeciesList
{
    const u16 *species;
    u8 count;
};

static const u16 sHikerSpecies[] =
    {
        SPECIES_GEODUDE,
        SPECIES_ONIX,
        SPECIES_MACHOP,
        SPECIES_DIGLETT,
        SPECIES_SANDSHREW,
        SPECIES_SWINUB,
        SPECIES_NUMEL,
        SPECIES_NOSEPASS,
        SPECIES_BALTOY,
        SPECIES_SUDOWOODO,
        SPECIES_ZUBAT,
        SPECIES_BIDOOF,
        SPECIES_BRONZOR,
        SPECIES_PHANPY,
        SPECIES_ROGGENROLA,
        SPECIES_TIMBURR,
        SPECIES_DRILBUR,
        SPECIES_WOOBAT,
        SPECIES_ARON,
        SPECIES_HIPPOPOTAS,
        SPECIES_DWEBBLE,
        SPECIES_GLIGAR,
        SPECIES_LARVITAR,
        SPECIES_RIOLU,
        SPECIES_MAWILE,
        SPECIES_GOLETT,
        SPECIES_CUBONE,
        SPECIES_RHYHORN,
        SPECIES_CARBINK,
        SPECIES_TORKOAL,
        SPECIES_RELICANTH,
        SPECIES_SANDILE,
        SPECIES_BUNNELBY,
        SPECIES_STUNFISK,
        SPECIES_TRAPINCH,
        SPECIES_MUDBRAY,
        SPECIES_MAGBY,
        SPECIES_ROCKRUFF,
        SPECIES_ARCHEN,
        SPECIES_CRANIDOS,
        SPECIES_MAKUHITA,
        SPECIES_AERODACTYL,
        SPECIES_GEODUDE_ALOLAN,
        SPECIES_KABUTO,
        SPECIES_TYRUNT,
        SPECIES_OMANYTE,
        
};

static const struct TrainerSpeciesList sTrainerClassMons[] = {
    [TRAINER_CLASS_HIKER] = {TRAINER_SPECIES_LIST(sHikerSpecies)},
};
