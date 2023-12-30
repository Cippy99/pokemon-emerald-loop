Common_EventScript_StartGym4Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym4Fight_2
	case TYPE_ROCK, Common_EventScript_StartGym4Fight_3
	case TYPE_ELECTRIC, Common_EventScript_StartGym4Fight_4
	case TYPE_FIGHTING, Common_EventScript_StartGym4Fight_5
	case TYPE_PSYCHIC, Common_EventScript_StartGym4Fight_6
	case TYPE_FIRE, Common_EventScript_StartGym4Fight_7
	case TYPE_FLYING, Common_EventScript_StartGym4Fight_8
	case TYPE_WATER, Common_EventScript_StartGym4Fight_9
	case TYPE_DARK, Common_EventScript_StartGym4Fight_10
	case TYPE_GHOST, Common_EventScript_StartGym4Fight_11
	case TYPE_ICE, Common_EventScript_StartGym4Fight_12
	case TYPE_DRAGON, Common_EventScript_StartGym4Fight_13
	case TYPE_POISON, Common_EventScript_StartGym4Fight_14
	case TYPE_GROUND, Common_EventScript_StartGym4Fight_15
	case TYPE_GRASS, Common_EventScript_StartGym4Fight_16
	case TYPE_FAIRY, Common_EventScript_StartGym4Fight_17
	case TYPE_STEEL, Common_EventScript_StartGym4Fight_18
	case TYPE_BUG, Common_EventScript_StartGym4Fight_19
	call normalFightGym4
	return

Common_EventScript_StartGym4Fight_2:
	call normalFightGym4
	return

Common_EventScript_StartGym4Fight_3:
	call rockFightGym4
	return

Common_EventScript_StartGym4Fight_4:
	call electricFightGym4
	return

Common_EventScript_StartGym4Fight_5:
	call fightingFightGym4
	return

Common_EventScript_StartGym4Fight_6:
	call psychicFightGym4
	return

Common_EventScript_StartGym4Fight_7:
	call fireFightGym4
	return

Common_EventScript_StartGym4Fight_8:
	call flyingFightGym4
	return

Common_EventScript_StartGym4Fight_9:
	call waterFightGym4
	return

Common_EventScript_StartGym4Fight_10:
	call darkFightGym4
	return

Common_EventScript_StartGym4Fight_11:
	call ghostFightGym4
	return

Common_EventScript_StartGym4Fight_12:
	call iceFightGym4
	return

Common_EventScript_StartGym4Fight_13:
	call dragonFightGym4
	return

Common_EventScript_StartGym4Fight_14:
	call poisonFightGym4
	return

Common_EventScript_StartGym4Fight_15:
	call groundFightGym4
	return

Common_EventScript_StartGym4Fight_16:
	call grassFightGym4
	return

Common_EventScript_StartGym4Fight_17:
	call fairyFightGym4
	return

Common_EventScript_StartGym4Fight_18:
	call steelFightGym4
	return

Common_EventScript_StartGym4Fight_19:
	call bugFightGym4
	return


normalFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym4_2
	trainerbattle_single TRAINER_NORMAN_GYM_4, NormanIntroGym, NormanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym4_2:
	trainerbattle_single TRAINER_NORMAN_GYM_4, NormanIntroGym, NormanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym4_2
	trainerbattle_single TRAINER_ROXANNE_GYM_4, RoxanneIntroGym, RoxanneGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym4_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_4, RoxanneIntroGym, RoxanneGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym4_2
	trainerbattle_single TRAINER_WATTSON_GYM_4, WattsonIntroGym, WattsonGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym4_2:
	trainerbattle_single TRAINER_WATTSON_GYM_4, WattsonIntroGym, WattsonGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym4_2
	trainerbattle_single TRAINER_BRAWLY_GYM_4, BrawlyIntroGym, BrawlyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym4_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_4, BrawlyIntroGym, BrawlyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym4_2
	trainerbattle_single TRAINER_TATE_GYM_4, TateIntroGym, TateGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym4_2:
	trainerbattle_single TRAINER_TATE_GYM_4, TateIntroGym, TateGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym4_2
	trainerbattle_single TRAINER_FLANNERY_GYM_4, FlanneryIntroGym, FlanneryGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym4_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_4, FlanneryIntroGym, FlanneryGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym4_2
	trainerbattle_single TRAINER_WINONA_GYM_4, WinonaIntroGym, WinonaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym4_2:
	trainerbattle_single TRAINER_WINONA_GYM_4, WinonaIntroGym, WinonaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym4_2
	trainerbattle_single TRAINER_JUAN_GYM_4, JuanIntroGym, JuanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym4_2:
	trainerbattle_single TRAINER_JUAN_GYM_4, JuanIntroGym, JuanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym4_2
	trainerbattle_single TRAINER_SIDNEY_GYM_4, SidneyIntroGym, SidneyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym4_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_4, SidneyIntroGym, SidneyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym4_2
	trainerbattle_single TRAINER_PHOEBE_GYM_4, PhoebeIntroGym, PhoebeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym4_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_4, PhoebeIntroGym, PhoebeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym4_2
	trainerbattle_single TRAINER_GLACIA_GYM_4, GlaciaIntroGym, GlaciaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym4_2:
	trainerbattle_single TRAINER_GLACIA_GYM_4, GlaciaIntroGym, GlaciaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym4_2
	trainerbattle_single TRAINER_DRAKE_GYM_4, DrakeIntroGym, DrakeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym4_2:
	trainerbattle_single TRAINER_DRAKE_GYM_4, DrakeIntroGym, DrakeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym4_2
	trainerbattle_single TRAINER_KOGA_GYM_4, KogaIntroGym, KogaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym4_2:
	trainerbattle_single TRAINER_KOGA_GYM_4, KogaIntroGym, KogaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym4_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_4, GiovanniIntroGym, GiovanniGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym4_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_4, GiovanniIntroGym, GiovanniGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym4_2
	trainerbattle_single TRAINER_ERIKA_GYM_4, ErikaIntroGym, ErikaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym4_2:
	trainerbattle_single TRAINER_ERIKA_GYM_4, ErikaIntroGym, ErikaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym4_2
	trainerbattle_single TRAINER_VALERIE_GYM_4, ValerieIntroGym, ValerieGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym4_2:
	trainerbattle_single TRAINER_VALERIE_GYM_4, ValerieIntroGym, ValerieGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym4_2
	trainerbattle_single TRAINER_STEVEN_GYM_4, StevenIntroGym, StevenGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym4_2:
	trainerbattle_single TRAINER_STEVEN_GYM_4, StevenIntroGym, StevenGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym4_2
	trainerbattle_single TRAINER_BUGSY_GYM_4, BugsyIntroGym, BugsyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym4_2:
	trainerbattle_single TRAINER_BUGSY_GYM_4, BugsyIntroGym, BugsyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

