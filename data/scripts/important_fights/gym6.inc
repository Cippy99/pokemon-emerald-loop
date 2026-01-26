Common_EventScript_StartGym6Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym6Fight_2
	case TYPE_ROCK, Common_EventScript_StartGym6Fight_3
	case TYPE_ELECTRIC, Common_EventScript_StartGym6Fight_4
	case TYPE_FIGHTING, Common_EventScript_StartGym6Fight_5
	case TYPE_PSYCHIC, Common_EventScript_StartGym6Fight_6
	case TYPE_FIRE, Common_EventScript_StartGym6Fight_7
	case TYPE_FLYING, Common_EventScript_StartGym6Fight_8
	case TYPE_WATER, Common_EventScript_StartGym6Fight_9
	case TYPE_DARK, Common_EventScript_StartGym6Fight_10
	case TYPE_GHOST, Common_EventScript_StartGym6Fight_11
	case TYPE_ICE, Common_EventScript_StartGym6Fight_12
	case TYPE_DRAGON, Common_EventScript_StartGym6Fight_13
	case TYPE_POISON, Common_EventScript_StartGym6Fight_14
	case TYPE_GROUND, Common_EventScript_StartGym6Fight_15
	case TYPE_GRASS, Common_EventScript_StartGym6Fight_16
	case TYPE_FAIRY, Common_EventScript_StartGym6Fight_17
	case TYPE_STEEL, Common_EventScript_StartGym6Fight_18
	case TYPE_BUG, Common_EventScript_StartGym6Fight_19
	call normalFightGym6
	return

Common_EventScript_StartGym6Fight_2:
	call normalFightGym6
	return

Common_EventScript_StartGym6Fight_3:
	call rockFightGym6
	return

Common_EventScript_StartGym6Fight_4:
	call electricFightGym6
	return

Common_EventScript_StartGym6Fight_5:
	call fightingFightGym6
	return

Common_EventScript_StartGym6Fight_6:
	call psychicFightGym6
	return

Common_EventScript_StartGym6Fight_7:
	call fireFightGym6
	return

Common_EventScript_StartGym6Fight_8:
	call flyingFightGym6
	return

Common_EventScript_StartGym6Fight_9:
	call waterFightGym6
	return

Common_EventScript_StartGym6Fight_10:
	call darkFightGym6
	return

Common_EventScript_StartGym6Fight_11:
	call ghostFightGym6
	return

Common_EventScript_StartGym6Fight_12:
	call iceFightGym6
	return

Common_EventScript_StartGym6Fight_13:
	call dragonFightGym6
	return

Common_EventScript_StartGym6Fight_14:
	call poisonFightGym6
	return

Common_EventScript_StartGym6Fight_15:
	call groundFightGym6
	return

Common_EventScript_StartGym6Fight_16:
	call grassFightGym6
	return

Common_EventScript_StartGym6Fight_17:
	call fairyFightGym6
	return

Common_EventScript_StartGym6Fight_18:
	call steelFightGym6
	return

Common_EventScript_StartGym6Fight_19:
	call bugFightGym6
	return


normalFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym6_2
	trainerbattle_single TRAINER_NORMAN_GYM_6, NormanIntroGym, NormanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym6_2:
	trainerbattle_single TRAINER_NORMAN_GYM_6, NormanIntroGym, NormanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym6_2
	trainerbattle_single TRAINER_ROXANNE_GYM_6, RoxanneIntroGym, RoxanneGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym6_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_6, RoxanneIntroGym, RoxanneGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym6_2
	trainerbattle_single TRAINER_WATTSON_GYM_6, WattsonIntroGym, WattsonGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym6_2:
	trainerbattle_single TRAINER_WATTSON_GYM_6, WattsonIntroGym, WattsonGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym6_2
	trainerbattle_single TRAINER_BRAWLY_GYM_6, BrawlyIntroGym, BrawlyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym6_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_6, BrawlyIntroGym, BrawlyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym6_2
	trainerbattle_single TRAINER_TATE_GYM_6, TateIntroGym, TateGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym6_2:
	trainerbattle_single TRAINER_TATE_GYM_6, TateIntroGym, TateGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym6_2
	trainerbattle_single TRAINER_FLANNERY_GYM_6, FlanneryIntroGym, FlanneryGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym6_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_6, FlanneryIntroGym, FlanneryGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym6_2
	trainerbattle_single TRAINER_WINONA_GYM_6, WinonaIntroGym, WinonaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym6_2:
	trainerbattle_single TRAINER_WINONA_GYM_6, WinonaIntroGym, WinonaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym6_2
	trainerbattle_single TRAINER_JUAN_GYM_6, JuanIntroGym, JuanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym6_2:
	trainerbattle_single TRAINER_JUAN_GYM_6, JuanIntroGym, JuanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym6_2
	trainerbattle_single TRAINER_SIDNEY_GYM_6, SidneyIntroGym, SidneyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym6_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_6, SidneyIntroGym, SidneyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym6_2
	trainerbattle_single TRAINER_PHOEBE_GYM_6, PhoebeIntroGym, PhoebeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym6_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_6, PhoebeIntroGym, PhoebeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym6_2
	trainerbattle_single TRAINER_GLACIA_GYM_6, GlaciaIntroGym, GlaciaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym6_2:
	trainerbattle_single TRAINER_GLACIA_GYM_6, GlaciaIntroGym, GlaciaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym6_2
	trainerbattle_single TRAINER_DRAKE_GYM_6, DrakeIntroGym, DrakeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym6_2:
	trainerbattle_single TRAINER_DRAKE_GYM_6, DrakeIntroGym, DrakeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym6_2
	trainerbattle_single TRAINER_KOGA_GYM_6, KogaIntroGym, KogaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym6_2:
	trainerbattle_single TRAINER_KOGA_GYM_6, KogaIntroGym, KogaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym6_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_6, GiovanniIntroGym, GiovanniGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym6_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_6, GiovanniIntroGym, GiovanniGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym6_2
	trainerbattle_single TRAINER_ERIKA_GYM_6, ErikaIntroGym, ErikaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym6_2:
	trainerbattle_single TRAINER_ERIKA_GYM_6, ErikaIntroGym, ErikaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym6_2
	trainerbattle_single TRAINER_VALERIE_GYM_6, ValerieIntroGym, ValerieGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym6_2:
	trainerbattle_single TRAINER_VALERIE_GYM_6, ValerieIntroGym, ValerieGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym6_2
	trainerbattle_single TRAINER_STEVEN_GYM_6, StevenIntroGym, StevenGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym6_2:
	trainerbattle_single TRAINER_STEVEN_GYM_6, StevenIntroGym, StevenGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym6:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym6_2
	trainerbattle_single TRAINER_BUGSY_GYM_6, BugsyIntroGym, BugsyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym6_2:
	trainerbattle_single TRAINER_BUGSY_GYM_6, BugsyIntroGym, BugsyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

