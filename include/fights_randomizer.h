#ifndef GUARD_RAND_IMP_FIGHTS
#define GUARD_RAND_IMP_FIGHTS

#include "gba/types.h"

void RandomizeImportantFights(void);
void DebugPrintImportantFightsVarsValue(void);
u16 randomizeSpeciesAccordingToLevel(u8 trainerClass, u8 level, u16 trainerNum, u32 *randomState);
u16 getCorrectSpeciesEvolutionAtLevel(u16 species, u8 level, u16 trainerNum);
bool8 isEvoLegal(struct Evolution evo, u8 level);
bool8 isSpeciesLegal(u16 species, u8 level);

#endif //GUARD_RAND_IMP_FIGHTS