Common_EventScript_StartGym5Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym5Fight_2
	case TYPE_ROCK, Common_EventScript_StartGym5Fight_3
	case TYPE_ELECTRIC, Common_EventScript_StartGym5Fight_4
	case TYPE_FIGHTING, Common_EventScript_StartGym5Fight_5
	case TYPE_PSYCHIC, Common_EventScript_StartGym5Fight_6
	case TYPE_FIRE, Common_EventScript_StartGym5Fight_7
	case TYPE_FLYING, Common_EventScript_StartGym5Fight_8
	case TYPE_WATER, Common_EventScript_StartGym5Fight_9
	case TYPE_DARK, Common_EventScript_StartGym5Fight_10
	case TYPE_GHOST, Common_EventScript_StartGym5Fight_11
	case TYPE_ICE, Common_EventScript_StartGym5Fight_12
	case TYPE_DRAGON, Common_EventScript_StartGym5Fight_13
	case TYPE_POISON, Common_EventScript_StartGym5Fight_14
	case TYPE_GROUND, Common_EventScript_StartGym5Fight_15
	case TYPE_GRASS, Common_EventScript_StartGym5Fight_16
	case TYPE_FAIRY, Common_EventScript_StartGym5Fight_17
	case TYPE_STEEL, Common_EventScript_StartGym5Fight_18
	case TYPE_BUG, Common_EventScript_StartGym5Fight_19
	call normalFightGym5
	return

Common_EventScript_StartGym5Fight_2:
	call normalFightGym5
	return

Common_EventScript_StartGym5Fight_3:
	call rockFightGym5
	return

Common_EventScript_StartGym5Fight_4:
	call electricFightGym5
	return

Common_EventScript_StartGym5Fight_5:
	call fightingFightGym5
	return

Common_EventScript_StartGym5Fight_6:
	call psychicFightGym5
	return

Common_EventScript_StartGym5Fight_7:
	call fireFightGym5
	return

Common_EventScript_StartGym5Fight_8:
	call flyingFightGym5
	return

Common_EventScript_StartGym5Fight_9:
	call waterFightGym5
	return

Common_EventScript_StartGym5Fight_10:
	call darkFightGym5
	return

Common_EventScript_StartGym5Fight_11:
	call ghostFightGym5
	return

Common_EventScript_StartGym5Fight_12:
	call iceFightGym5
	return

Common_EventScript_StartGym5Fight_13:
	call dragonFightGym5
	return

Common_EventScript_StartGym5Fight_14:
	call poisonFightGym5
	return

Common_EventScript_StartGym5Fight_15:
	call groundFightGym5
	return

Common_EventScript_StartGym5Fight_16:
	call grassFightGym5
	return

Common_EventScript_StartGym5Fight_17:
	call fairyFightGym5
	return

Common_EventScript_StartGym5Fight_18:
	call steelFightGym5
	return

Common_EventScript_StartGym5Fight_19:
	call bugFightGym5
	return


normalFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym5_2
	trainerbattle_single TRAINER_NORMAN_GYM_5, NormanIntroGym, NormanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym5_2:
	trainerbattle_single TRAINER_NORMAN_GYM_5, NormanIntroGym, NormanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym5_2
	trainerbattle_single TRAINER_ROXANNE_GYM_5, RoxanneIntroGym, RoxanneGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym5_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_5, RoxanneIntroGym, RoxanneGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym5_2
	trainerbattle_single TRAINER_WATTSON_GYM_5, WattsonIntroGym, WattsonGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym5_2:
	trainerbattle_single TRAINER_WATTSON_GYM_5, WattsonIntroGym, WattsonGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym5_2
	trainerbattle_single TRAINER_BRAWLY_GYM_5, BrawlyIntroGym, BrawlyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym5_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_5, BrawlyIntroGym, BrawlyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym5_2
	trainerbattle_single TRAINER_TATE_GYM_5, TateIntroGym, TateGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym5_2:
	trainerbattle_single TRAINER_TATE_GYM_5, TateIntroGym, TateGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym5_2
	trainerbattle_single TRAINER_FLANNERY_GYM_5, FlanneryIntroGym, FlanneryGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym5_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_5, FlanneryIntroGym, FlanneryGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym5_2
	trainerbattle_single TRAINER_WINONA_GYM_5, WinonaIntroGym, WinonaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym5_2:
	trainerbattle_single TRAINER_WINONA_GYM_5, WinonaIntroGym, WinonaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym5_2
	trainerbattle_single TRAINER_JUAN_GYM_5, JuanIntroGym, JuanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym5_2:
	trainerbattle_single TRAINER_JUAN_GYM_5, JuanIntroGym, JuanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym5_2
	trainerbattle_single TRAINER_SIDNEY_GYM_5, SidneyIntroGym, SidneyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym5_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_5, SidneyIntroGym, SidneyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym5_2
	trainerbattle_single TRAINER_PHOEBE_GYM_5, PhoebeIntroGym, PhoebeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym5_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_5, PhoebeIntroGym, PhoebeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym5_2
	trainerbattle_single TRAINER_GLACIA_GYM_5, GlaciaIntroGym, GlaciaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym5_2:
	trainerbattle_single TRAINER_GLACIA_GYM_5, GlaciaIntroGym, GlaciaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym5_2
	trainerbattle_single TRAINER_DRAKE_GYM_5, DrakeIntroGym, DrakeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym5_2:
	trainerbattle_single TRAINER_DRAKE_GYM_5, DrakeIntroGym, DrakeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym5_2
	trainerbattle_single TRAINER_KOGA_GYM_5, KogaIntroGym, KogaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym5_2:
	trainerbattle_single TRAINER_KOGA_GYM_5, KogaIntroGym, KogaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym5_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_5, GiovanniIntroGym, GiovanniGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym5_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_5, GiovanniIntroGym, GiovanniGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym5_2
	trainerbattle_single TRAINER_ERIKA_GYM_5, ErikaIntroGym, ErikaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym5_2:
	trainerbattle_single TRAINER_ERIKA_GYM_5, ErikaIntroGym, ErikaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym5_2
	trainerbattle_single TRAINER_VALERIE_GYM_5, ValerieIntroGym, ValerieGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym5_2:
	trainerbattle_single TRAINER_VALERIE_GYM_5, ValerieIntroGym, ValerieGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym5_2
	trainerbattle_single TRAINER_STEVEN_GYM_5, StevenIntroGym, StevenGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym5_2:
	trainerbattle_single TRAINER_STEVEN_GYM_5, StevenIntroGym, StevenGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym5:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym5_2
	trainerbattle_single TRAINER_BUGSY_GYM_5, BugsyIntroGym, BugsyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym5_2:
	trainerbattle_single TRAINER_BUGSY_GYM_5, BugsyIntroGym, BugsyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

