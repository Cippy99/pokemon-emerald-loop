Common_EventScript_StartGym2Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartGym2Fight_2
	case TYPE_FIRE, Common_EventScript_StartGym2Fight_3
	case TYPE_WATER, Common_EventScript_StartGym2Fight_4
	case TYPE_GHOST, Common_EventScript_StartGym2Fight_5
	case TYPE_DARK, Common_EventScript_StartGym2Fight_6
	case TYPE_ICE, Common_EventScript_StartGym2Fight_7
	case TYPE_DRAGON, Common_EventScript_StartGym2Fight_8
	case TYPE_ELECTRIC, Common_EventScript_StartGym2Fight_9
	case TYPE_ROCK, Common_EventScript_StartGym2Fight_10
	case TYPE_FLYING, Common_EventScript_StartGym2Fight_11
	case TYPE_PSYCHIC, Common_EventScript_StartGym2Fight_12
	case TYPE_FIGHTING, Common_EventScript_StartGym2Fight_13
	case TYPE_GROUND, Common_EventScript_StartGym2Fight_14
	case TYPE_GRASS, Common_EventScript_StartGym2Fight_15
	case TYPE_STEEL, Common_EventScript_StartGym2Fight_16
	case TYPE_BUG, Common_EventScript_StartGym2Fight_17
	case TYPE_POISON, Common_EventScript_StartGym2Fight_18
	case TYPE_FAIRY, Common_EventScript_StartGym2Fight_19
	call normalFightGym2
	return

Common_EventScript_StartGym2Fight_2:
	call normalFightGym2
	return

Common_EventScript_StartGym2Fight_3:
	call fireFightGym2
	return

Common_EventScript_StartGym2Fight_4:
	call waterFightGym2
	return

Common_EventScript_StartGym2Fight_5:
	call ghostFightGym2
	return

Common_EventScript_StartGym2Fight_6:
	call darkFightGym2
	return

Common_EventScript_StartGym2Fight_7:
	call iceFightGym2
	return

Common_EventScript_StartGym2Fight_8:
	call dragonFightGym2
	return

Common_EventScript_StartGym2Fight_9:
	call electricFightGym2
	return

Common_EventScript_StartGym2Fight_10:
	call rockFightGym2
	return

Common_EventScript_StartGym2Fight_11:
	call flyingFightGym2
	return

Common_EventScript_StartGym2Fight_12:
	call psychicFightGym2
	return

Common_EventScript_StartGym2Fight_13:
	call fightingFightGym2
	return

Common_EventScript_StartGym2Fight_14:
	call groundFightGym2
	return

Common_EventScript_StartGym2Fight_15:
	call grassFightGym2
	return

Common_EventScript_StartGym2Fight_16:
	call steelFightGym2
	return

Common_EventScript_StartGym2Fight_17:
	call bugFightGym2
	return

Common_EventScript_StartGym2Fight_18:
	call poisonFightGym2
	return

Common_EventScript_StartGym2Fight_19:
	call fairyFightGym2
	return


normalFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightGym2_2
	trainerbattle_single TRAINER_NORMAN_GYM_2, NormanIntroGym, NormanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym2_2:
	trainerbattle_single TRAINER_NORMAN_GYM_2, NormanIntroGym, NormanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightGym2_2
	trainerbattle_single TRAINER_ROXANNE_GYM_2, RoxanneIntroGym, RoxanneGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym2_2:
	trainerbattle_single TRAINER_ROXANNE_GYM_2, RoxanneIntroGym, RoxanneGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightGym2_2
	trainerbattle_single TRAINER_WATTSON_GYM_2, WattsonIntroGym, WattsonGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym2_2:
	trainerbattle_single TRAINER_WATTSON_GYM_2, WattsonIntroGym, WattsonGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightGym2_2
	trainerbattle_single TRAINER_BRAWLY_GYM_2, BrawlyIntroGym, BrawlyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym2_2:
	trainerbattle_single TRAINER_BRAWLY_GYM_2, BrawlyIntroGym, BrawlyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightGym2_2
	trainerbattle_single TRAINER_TATE_GYM_2, TateIntroGym, TateGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym2_2:
	trainerbattle_single TRAINER_TATE_GYM_2, TateIntroGym, TateGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightGym2_2
	trainerbattle_single TRAINER_FLANNERY_GYM_2, FlanneryIntroGym, FlanneryGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym2_2:
	trainerbattle_single TRAINER_FLANNERY_GYM_2, FlanneryIntroGym, FlanneryGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightGym2_2
	trainerbattle_single TRAINER_WINONA_GYM_2, WinonaIntroGym, WinonaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym2_2:
	trainerbattle_single TRAINER_WINONA_GYM_2, WinonaIntroGym, WinonaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightGym2_2
	trainerbattle_single TRAINER_JUAN_GYM_2, JuanIntroGym, JuanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym2_2:
	trainerbattle_single TRAINER_JUAN_GYM_2, JuanIntroGym, JuanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightGym2_2
	trainerbattle_single TRAINER_SIDNEY_GYM_2, SidneyIntroGym, SidneyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym2_2:
	trainerbattle_single TRAINER_SIDNEY_GYM_2, SidneyIntroGym, SidneyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightGym2_2
	trainerbattle_single TRAINER_PHOEBE_GYM_2, PhoebeIntroGym, PhoebeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym2_2:
	trainerbattle_single TRAINER_PHOEBE_GYM_2, PhoebeIntroGym, PhoebeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightGym2_2
	trainerbattle_single TRAINER_GLACIA_GYM_2, GlaciaIntroGym, GlaciaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym2_2:
	trainerbattle_single TRAINER_GLACIA_GYM_2, GlaciaIntroGym, GlaciaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightGym2_2
	trainerbattle_single TRAINER_DRAKE_GYM_2, DrakeIntroGym, DrakeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym2_2:
	trainerbattle_single TRAINER_DRAKE_GYM_2, DrakeIntroGym, DrakeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightGym2_2
	trainerbattle_single TRAINER_KOGA_GYM_2, KogaIntroGym, KogaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym2_2:
	trainerbattle_single TRAINER_KOGA_GYM_2, KogaIntroGym, KogaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightGym2_2
	trainerbattle_single TRAINER_GIOVANNI_GYM_2, GiovanniIntroGym, GiovanniGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym2_2:
	trainerbattle_single TRAINER_GIOVANNI_GYM_2, GiovanniIntroGym, GiovanniGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightGym2_2
	trainerbattle_single TRAINER_ERIKA_GYM_2, ErikaIntroGym, ErikaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym2_2:
	trainerbattle_single TRAINER_ERIKA_GYM_2, ErikaIntroGym, ErikaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightGym2_2
	trainerbattle_single TRAINER_VALERIE_GYM_2, ValerieIntroGym, ValerieGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym2_2:
	trainerbattle_single TRAINER_VALERIE_GYM_2, ValerieIntroGym, ValerieGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightGym2_2
	trainerbattle_single TRAINER_STEVEN_GYM_2, StevenIntroGym, StevenGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym2_2:
	trainerbattle_single TRAINER_STEVEN_GYM_2, StevenIntroGym, StevenGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym2:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightGym2_2
	trainerbattle_single TRAINER_BUGSY_GYM_2, BugsyIntroGym, BugsyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym2_2:
	trainerbattle_single TRAINER_BUGSY_GYM_2, BugsyIntroGym, BugsyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

