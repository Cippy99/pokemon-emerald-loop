Common_EventScript_StartGym1Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym1Fight_2
	case TYPE_FIRE, Common_EventScript_StartGym1Fight_3
	case TYPE_WATER, Common_EventScript_StartGym1Fight_4
	case TYPE_GHOST, Common_EventScript_StartGym1Fight_5
	case TYPE_DARK, Common_EventScript_StartGym1Fight_6
	case TYPE_ICE, Common_EventScript_StartGym1Fight_7
	case TYPE_DRAGON, Common_EventScript_StartGym1Fight_8
	case TYPE_ELECTRIC, Common_EventScript_StartGym1Fight_9
	case TYPE_ROCK, Common_EventScript_StartGym1Fight_10
	case TYPE_FLYING, Common_EventScript_StartGym1Fight_11
	case TYPE_PSYCHIC, Common_EventScript_StartGym1Fight_12
	case TYPE_FIGHTING, Common_EventScript_StartGym1Fight_13
	case TYPE_GROUND, Common_EventScript_StartGym1Fight_14
	case TYPE_GRASS, Common_EventScript_StartGym1Fight_15
	case TYPE_STEEL, Common_EventScript_StartGym1Fight_16
	case TYPE_BUG, Common_EventScript_StartGym1Fight_17
	case TYPE_POISON, Common_EventScript_StartGym1Fight_18
	case TYPE_FAIRY, Common_EventScript_StartGym1Fight_19
	call normalFightGym1
	return

Common_EventScript_StartGym1Fight_2:
	call normalFightGym1
	return

Common_EventScript_StartGym1Fight_3:
	call fireFightGym1
	return

Common_EventScript_StartGym1Fight_4:
	call waterFightGym1
	return

Common_EventScript_StartGym1Fight_5:
	call ghostFightGym1
	return

Common_EventScript_StartGym1Fight_6:
	call darkFightGym1
	return

Common_EventScript_StartGym1Fight_7:
	call iceFightGym1
	return

Common_EventScript_StartGym1Fight_8:
	call dragonFightGym1
	return

Common_EventScript_StartGym1Fight_9:
	call electricFightGym1
	return

Common_EventScript_StartGym1Fight_10:
	call rockFightGym1
	return

Common_EventScript_StartGym1Fight_11:
	call flyingFightGym1
	return

Common_EventScript_StartGym1Fight_12:
	call psychicFightGym1
	return

Common_EventScript_StartGym1Fight_13:
	call fightingFightGym1
	return

Common_EventScript_StartGym1Fight_14:
	call groundFightGym1
	return

Common_EventScript_StartGym1Fight_15:
	call grassFightGym1
	return

Common_EventScript_StartGym1Fight_16:
	call steelFightGym1
	return

Common_EventScript_StartGym1Fight_17:
	call bugFightGym1
	return

Common_EventScript_StartGym1Fight_18:
	call poisonFightGym1
	return

Common_EventScript_StartGym1Fight_19:
	call fairyFightGym1
	return


normalFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym1_2
	trainerbattle_single TRAINER_NORMAN_GYM_1, NormanIntroGym, NormanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym1_2:
	trainerbattle_single TRAINER_NORMAN_GYM_1, NormanIntroGym, NormanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym1_2
	trainerbattle_single TRAINER_ROXANNE_GYM_1, RoxanneIntroGym, RoxanneGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym1_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_1, RoxanneIntroGym, RoxanneGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym1_2
	trainerbattle_single TRAINER_WATTSON_GYM_1, WattsonIntroGym, WattsonGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym1_2:
	trainerbattle_single TRAINER_WATTSON_GYM_1, WattsonIntroGym, WattsonGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym1_2
	trainerbattle_single TRAINER_BRAWLY_GYM_1, BrawlyIntroGym, BrawlyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym1_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_1, BrawlyIntroGym, BrawlyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym1_2
	trainerbattle_single TRAINER_TATE_GYM_1, TateIntroGym, TateGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym1_2:
	trainerbattle_single TRAINER_TATE_GYM_1, TateIntroGym, TateGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym1_2
	trainerbattle_single TRAINER_FLANNERY_GYM_1, FlanneryIntroGym, FlanneryGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym1_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_1, FlanneryIntroGym, FlanneryGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym1_2
	trainerbattle_single TRAINER_WINONA_GYM_1, WinonaIntroGym, WinonaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym1_2:
	trainerbattle_single TRAINER_WINONA_GYM_1, WinonaIntroGym, WinonaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym1_2
	trainerbattle_single TRAINER_JUAN_GYM_1, JuanIntroGym, JuanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym1_2:
	trainerbattle_single TRAINER_JUAN_GYM_1, JuanIntroGym, JuanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym1_2
	trainerbattle_single TRAINER_SIDNEY_GYM_1, SidneyIntroGym, SidneyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym1_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_1, SidneyIntroGym, SidneyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym1_2
	trainerbattle_single TRAINER_PHOEBE_GYM_1, PhoebeIntroGym, PhoebeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym1_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_1, PhoebeIntroGym, PhoebeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym1_2
	trainerbattle_single TRAINER_GLACIA_GYM_1, GlaciaIntroGym, GlaciaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym1_2:
	trainerbattle_single TRAINER_GLACIA_GYM_1, GlaciaIntroGym, GlaciaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym1_2
	trainerbattle_single TRAINER_DRAKE_GYM_1, DrakeIntroGym, DrakeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym1_2:
	trainerbattle_single TRAINER_DRAKE_GYM_1, DrakeIntroGym, DrakeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym1_2
	trainerbattle_single TRAINER_KOGA_GYM_1, KogaIntroGym, KogaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym1_2:
	trainerbattle_single TRAINER_KOGA_GYM_1, KogaIntroGym, KogaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym1_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_1, GiovanniIntroGym, GiovanniGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym1_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_1, GiovanniIntroGym, GiovanniGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym1_2
	trainerbattle_single TRAINER_ERIKA_GYM_1, ErikaIntroGym, ErikaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym1_2:
	trainerbattle_single TRAINER_ERIKA_GYM_1, ErikaIntroGym, ErikaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym1_2
	trainerbattle_single TRAINER_VALERIE_GYM_1, ValerieIntroGym, ValerieGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym1_2:
	trainerbattle_single TRAINER_VALERIE_GYM_1, ValerieIntroGym, ValerieGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym1_2
	trainerbattle_single TRAINER_STEVEN_GYM_1, StevenIntroGym, StevenGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym1_2:
	trainerbattle_single TRAINER_STEVEN_GYM_1, StevenIntroGym, StevenGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym1:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym1_2
	trainerbattle_single TRAINER_BUGSY_GYM_1, BugsyIntroGym, BugsyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym1_2:
	trainerbattle_single TRAINER_BUGSY_GYM_1, BugsyIntroGym, BugsyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

