Common_EventScript_StartGym3Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym3Fight_2
	case TYPE_ROCK, Common_EventScript_StartGym3Fight_3
	case TYPE_ELECTRIC, Common_EventScript_StartGym3Fight_4
	case TYPE_FIGHTING, Common_EventScript_StartGym3Fight_5
	case TYPE_PSYCHIC, Common_EventScript_StartGym3Fight_6
	case TYPE_FIRE, Common_EventScript_StartGym3Fight_7
	case TYPE_FLYING, Common_EventScript_StartGym3Fight_8
	case TYPE_WATER, Common_EventScript_StartGym3Fight_9
	case TYPE_DARK, Common_EventScript_StartGym3Fight_10
	case TYPE_GHOST, Common_EventScript_StartGym3Fight_11
	case TYPE_ICE, Common_EventScript_StartGym3Fight_12
	case TYPE_DRAGON, Common_EventScript_StartGym3Fight_13
	case TYPE_POISON, Common_EventScript_StartGym3Fight_14
	case TYPE_GROUND, Common_EventScript_StartGym3Fight_15
	case TYPE_GRASS, Common_EventScript_StartGym3Fight_16
	case TYPE_FAIRY, Common_EventScript_StartGym3Fight_17
	case TYPE_STEEL, Common_EventScript_StartGym3Fight_18
	case TYPE_BUG, Common_EventScript_StartGym3Fight_19
	call normalFightGym3
	return

Common_EventScript_StartGym3Fight_2:
	call normalFightGym3
	return

Common_EventScript_StartGym3Fight_3:
	call rockFightGym3
	return

Common_EventScript_StartGym3Fight_4:
	call electricFightGym3
	return

Common_EventScript_StartGym3Fight_5:
	call fightingFightGym3
	return

Common_EventScript_StartGym3Fight_6:
	call psychicFightGym3
	return

Common_EventScript_StartGym3Fight_7:
	call fireFightGym3
	return

Common_EventScript_StartGym3Fight_8:
	call flyingFightGym3
	return

Common_EventScript_StartGym3Fight_9:
	call waterFightGym3
	return

Common_EventScript_StartGym3Fight_10:
	call darkFightGym3
	return

Common_EventScript_StartGym3Fight_11:
	call ghostFightGym3
	return

Common_EventScript_StartGym3Fight_12:
	call iceFightGym3
	return

Common_EventScript_StartGym3Fight_13:
	call dragonFightGym3
	return

Common_EventScript_StartGym3Fight_14:
	call poisonFightGym3
	return

Common_EventScript_StartGym3Fight_15:
	call groundFightGym3
	return

Common_EventScript_StartGym3Fight_16:
	call grassFightGym3
	return

Common_EventScript_StartGym3Fight_17:
	call fairyFightGym3
	return

Common_EventScript_StartGym3Fight_18:
	call steelFightGym3
	return

Common_EventScript_StartGym3Fight_19:
	call bugFightGym3
	return


normalFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym3_2
	trainerbattle_single TRAINER_NORMAN_GYM_3, NormanIntroGym, NormanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym3_2:
	trainerbattle_single TRAINER_NORMAN_GYM_3, NormanIntroGym, NormanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym3_2
	trainerbattle_single TRAINER_ROXANNE_GYM_3, RoxanneIntroGym, RoxanneGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym3_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_3, RoxanneIntroGym, RoxanneGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym3_2
	trainerbattle_single TRAINER_WATTSON_GYM_3, WattsonIntroGym, WattsonGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym3_2:
	trainerbattle_single TRAINER_WATTSON_GYM_3, WattsonIntroGym, WattsonGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym3_2
	trainerbattle_single TRAINER_BRAWLY_GYM_3, BrawlyIntroGym, BrawlyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym3_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_3, BrawlyIntroGym, BrawlyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym3_2
	trainerbattle_single TRAINER_TATE_GYM_3, TateIntroGym, TateGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym3_2:
	trainerbattle_single TRAINER_TATE_GYM_3, TateIntroGym, TateGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym3_2
	trainerbattle_single TRAINER_FLANNERY_GYM_3, FlanneryIntroGym, FlanneryGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym3_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_3, FlanneryIntroGym, FlanneryGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym3_2
	trainerbattle_single TRAINER_WINONA_GYM_3, WinonaIntroGym, WinonaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym3_2:
	trainerbattle_single TRAINER_WINONA_GYM_3, WinonaIntroGym, WinonaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym3_2
	trainerbattle_single TRAINER_JUAN_GYM_3, JuanIntroGym, JuanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym3_2:
	trainerbattle_single TRAINER_JUAN_GYM_3, JuanIntroGym, JuanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym3_2
	trainerbattle_single TRAINER_SIDNEY_GYM_3, SidneyIntroGym, SidneyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym3_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_3, SidneyIntroGym, SidneyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym3_2
	trainerbattle_single TRAINER_PHOEBE_GYM_3, PhoebeIntroGym, PhoebeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym3_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_3, PhoebeIntroGym, PhoebeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym3_2
	trainerbattle_single TRAINER_GLACIA_GYM_3, GlaciaIntroGym, GlaciaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym3_2:
	trainerbattle_single TRAINER_GLACIA_GYM_3, GlaciaIntroGym, GlaciaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym3_2
	trainerbattle_single TRAINER_DRAKE_GYM_3, DrakeIntroGym, DrakeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym3_2:
	trainerbattle_single TRAINER_DRAKE_GYM_3, DrakeIntroGym, DrakeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym3_2
	trainerbattle_single TRAINER_KOGA_GYM_3, KogaIntroGym, KogaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym3_2:
	trainerbattle_single TRAINER_KOGA_GYM_3, KogaIntroGym, KogaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym3_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_3, GiovanniIntroGym, GiovanniGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym3_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_3, GiovanniIntroGym, GiovanniGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym3_2
	trainerbattle_single TRAINER_ERIKA_GYM_3, ErikaIntroGym, ErikaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym3_2:
	trainerbattle_single TRAINER_ERIKA_GYM_3, ErikaIntroGym, ErikaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym3_2
	trainerbattle_single TRAINER_VALERIE_GYM_3, ValerieIntroGym, ValerieGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym3_2:
	trainerbattle_single TRAINER_VALERIE_GYM_3, ValerieIntroGym, ValerieGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym3_2
	trainerbattle_single TRAINER_STEVEN_GYM_3, StevenIntroGym, StevenGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym3_2:
	trainerbattle_single TRAINER_STEVEN_GYM_3, StevenIntroGym, StevenGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym3:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym3_2
	trainerbattle_single TRAINER_BUGSY_GYM_3, BugsyIntroGym, BugsyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym3_2:
	trainerbattle_single TRAINER_BUGSY_GYM_3, BugsyIntroGym, BugsyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

