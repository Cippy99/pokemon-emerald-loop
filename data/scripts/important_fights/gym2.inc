Common_EventScript_StartGym2Fight::
# 3 "data/scripts/important_fights/gym2.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym2.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym2Fight_2
# 6 "data/scripts/important_fights/gym2.pory"
	case TYPE_ROCK, Common_EventScript_StartGym2Fight_3
# 7 "data/scripts/important_fights/gym2.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym2Fight_4
# 8 "data/scripts/important_fights/gym2.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym2Fight_5
# 9 "data/scripts/important_fights/gym2.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym2Fight_6
# 10 "data/scripts/important_fights/gym2.pory"
	case TYPE_FIRE, Common_EventScript_StartGym2Fight_7
# 11 "data/scripts/important_fights/gym2.pory"
	case TYPE_FLYING, Common_EventScript_StartGym2Fight_8
# 12 "data/scripts/important_fights/gym2.pory"
	case TYPE_WATER, Common_EventScript_StartGym2Fight_9
# 13 "data/scripts/important_fights/gym2.pory"
	case TYPE_DARK, Common_EventScript_StartGym2Fight_10
# 14 "data/scripts/important_fights/gym2.pory"
	case TYPE_GHOST, Common_EventScript_StartGym2Fight_11
# 15 "data/scripts/important_fights/gym2.pory"
	case TYPE_ICE, Common_EventScript_StartGym2Fight_12
# 16 "data/scripts/important_fights/gym2.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym2Fight_13
# 17 "data/scripts/important_fights/gym2.pory"
	case TYPE_POISON, Common_EventScript_StartGym2Fight_14
# 18 "data/scripts/important_fights/gym2.pory"
	case TYPE_GROUND, Common_EventScript_StartGym2Fight_15
# 19 "data/scripts/important_fights/gym2.pory"
	case TYPE_GRASS, Common_EventScript_StartGym2Fight_16
# 20 "data/scripts/important_fights/gym2.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym2Fight_17
# 21 "data/scripts/important_fights/gym2.pory"
	case TYPE_STEEL, Common_EventScript_StartGym2Fight_18
# 22 "data/scripts/important_fights/gym2.pory"
	case TYPE_BUG, Common_EventScript_StartGym2Fight_19
# 23 "data/scripts/important_fights/gym2.pory"
	call normalFightGym2
	return

Common_EventScript_StartGym2Fight_2:
# 5 "data/scripts/important_fights/gym2.pory"
	call normalFightGym2
	return

Common_EventScript_StartGym2Fight_3:
# 6 "data/scripts/important_fights/gym2.pory"
	call rockFightGym2
	return

Common_EventScript_StartGym2Fight_4:
# 7 "data/scripts/important_fights/gym2.pory"
	call electricFightGym2
	return

Common_EventScript_StartGym2Fight_5:
# 8 "data/scripts/important_fights/gym2.pory"
	call fightingFightGym2
	return

Common_EventScript_StartGym2Fight_6:
# 9 "data/scripts/important_fights/gym2.pory"
	call psychicFightGym2
	return

Common_EventScript_StartGym2Fight_7:
# 10 "data/scripts/important_fights/gym2.pory"
	call fireFightGym2
	return

Common_EventScript_StartGym2Fight_8:
# 11 "data/scripts/important_fights/gym2.pory"
	call flyingFightGym2
	return

Common_EventScript_StartGym2Fight_9:
# 12 "data/scripts/important_fights/gym2.pory"
	call waterFightGym2
	return

Common_EventScript_StartGym2Fight_10:
# 13 "data/scripts/important_fights/gym2.pory"
	call darkFightGym2
	return

Common_EventScript_StartGym2Fight_11:
# 14 "data/scripts/important_fights/gym2.pory"
	call ghostFightGym2
	return

Common_EventScript_StartGym2Fight_12:
# 15 "data/scripts/important_fights/gym2.pory"
	call iceFightGym2
	return

Common_EventScript_StartGym2Fight_13:
# 16 "data/scripts/important_fights/gym2.pory"
	call dragonFightGym2
	return

Common_EventScript_StartGym2Fight_14:
# 17 "data/scripts/important_fights/gym2.pory"
	call poisonFightGym2
	return

Common_EventScript_StartGym2Fight_15:
# 18 "data/scripts/important_fights/gym2.pory"
	call groundFightGym2
	return

Common_EventScript_StartGym2Fight_16:
# 19 "data/scripts/important_fights/gym2.pory"
	call grassFightGym2
	return

Common_EventScript_StartGym2Fight_17:
# 20 "data/scripts/important_fights/gym2.pory"
	call fairyFightGym2
	return

Common_EventScript_StartGym2Fight_18:
# 21 "data/scripts/important_fights/gym2.pory"
	call steelFightGym2
	return

Common_EventScript_StartGym2Fight_19:
# 22 "data/scripts/important_fights/gym2.pory"
	call bugFightGym2
	return


normalFightGym2:
# 28 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym2.pory"
	case 0, normalFightGym2_2
# 33 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_2, NormanIntroGym, NormanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym2_2:
# 31 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_2, NormanIntroGym, NormanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym2:
# 38 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym2.pory"
	case 0, rockFightGym2_2
# 43 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_2, RoxanneIntroGym, RoxanneGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym2_2:
# 41 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_2, RoxanneIntroGym, RoxanneGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym2:
# 48 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym2.pory"
	case 0, electricFightGym2_2
# 53 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_2, WattsonIntroGym, WattsonGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym2_2:
# 51 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_2, WattsonIntroGym, WattsonGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym2:
# 58 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym2.pory"
	case 0, fightingFightGym2_2
# 63 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_2, BrawlyIntroGym, BrawlyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym2_2:
# 61 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_2, BrawlyIntroGym, BrawlyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym2:
# 68 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym2.pory"
	case 0, psychicFightGym2_2
# 73 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_TATE_GYM_2, TateIntroGym, TateGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym2_2:
# 71 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_TATE_GYM_2, TateIntroGym, TateGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym2:
# 78 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym2.pory"
	case 0, fireFightGym2_2
# 83 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_2, FlanneryIntroGym, FlanneryGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym2_2:
# 81 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_2, FlanneryIntroGym, FlanneryGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym2:
# 88 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym2.pory"
	case 0, flyingFightGym2_2
# 93 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_WINONA_GYM_2, WinonaIntroGym, WinonaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym2_2:
# 91 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_WINONA_GYM_2, WinonaIntroGym, WinonaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym2:
# 98 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym2.pory"
	case 0, waterFightGym2_2
# 103 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_JUAN_GYM_2, JuanIntroGym, JuanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym2_2:
# 101 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_JUAN_GYM_2, JuanIntroGym, JuanGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym2:
# 108 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym2.pory"
	case 0, darkFightGym2_2
# 113 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_2, SidneyIntroGym, SidneyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym2_2:
# 111 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_2, SidneyIntroGym, SidneyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym2:
# 118 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym2.pory"
	case 0, ghostFightGym2_2
# 123 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_2, PhoebeIntroGym, PhoebeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym2_2:
# 121 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_2, PhoebeIntroGym, PhoebeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym2:
# 128 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym2.pory"
	case 0, iceFightGym2_2
# 133 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_2, GlaciaIntroGym, GlaciaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym2_2:
# 131 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_2, GlaciaIntroGym, GlaciaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym2:
# 138 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym2.pory"
	case 0, dragonFightGym2_2
# 143 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_2, DrakeIntroGym, DrakeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym2_2:
# 141 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_2, DrakeIntroGym, DrakeGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym2:
# 148 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym2.pory"
	case 0, poisonFightGym2_2
# 153 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_KOGA_GYM_2, KogaIntroGym, KogaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym2_2:
# 151 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_KOGA_GYM_2, KogaIntroGym, KogaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym2:
# 158 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym2.pory"
	case 0, groundFightGym2_2
# 163 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_2, GiovanniIntroGym, GiovanniGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym2_2:
# 161 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_2, GiovanniIntroGym, GiovanniGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym2:
# 168 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym2.pory"
	case 0, grassFightGym2_2
# 173 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_2, ErikaIntroGym, ErikaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym2_2:
# 171 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_2, ErikaIntroGym, ErikaGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym2:
# 178 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym2.pory"
	case 0, fairyFightGym2_2
# 183 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_2, ValerieIntroGym, ValerieGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym2_2:
# 181 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_2, ValerieIntroGym, ValerieGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym2:
# 188 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym2.pory"
	case 0, steelFightGym2_2
# 193 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_2, StevenIntroGym, StevenGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym2_2:
# 191 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_2, StevenIntroGym, StevenGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym2:
# 198 "data/scripts/important_fights/gym2.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym2.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym2.pory"
	case 0, bugFightGym2_2
# 203 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_2, BugsyIntroGym, BugsyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym2_2:
# 201 "data/scripts/important_fights/gym2.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_2, BugsyIntroGym, BugsyGymDefeat, DewfordTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

