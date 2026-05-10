Common_EventScript_StartGym4Fight::
# 3 "data/scripts/important_fights/gym4.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym4.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym4Fight_2
# 6 "data/scripts/important_fights/gym4.pory"
	case TYPE_ROCK, Common_EventScript_StartGym4Fight_3
# 7 "data/scripts/important_fights/gym4.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym4Fight_4
# 8 "data/scripts/important_fights/gym4.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym4Fight_5
# 9 "data/scripts/important_fights/gym4.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym4Fight_6
# 10 "data/scripts/important_fights/gym4.pory"
	case TYPE_FIRE, Common_EventScript_StartGym4Fight_7
# 11 "data/scripts/important_fights/gym4.pory"
	case TYPE_FLYING, Common_EventScript_StartGym4Fight_8
# 12 "data/scripts/important_fights/gym4.pory"
	case TYPE_WATER, Common_EventScript_StartGym4Fight_9
# 13 "data/scripts/important_fights/gym4.pory"
	case TYPE_DARK, Common_EventScript_StartGym4Fight_10
# 14 "data/scripts/important_fights/gym4.pory"
	case TYPE_GHOST, Common_EventScript_StartGym4Fight_11
# 15 "data/scripts/important_fights/gym4.pory"
	case TYPE_ICE, Common_EventScript_StartGym4Fight_12
# 16 "data/scripts/important_fights/gym4.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym4Fight_13
# 17 "data/scripts/important_fights/gym4.pory"
	case TYPE_POISON, Common_EventScript_StartGym4Fight_14
# 18 "data/scripts/important_fights/gym4.pory"
	case TYPE_GROUND, Common_EventScript_StartGym4Fight_15
# 19 "data/scripts/important_fights/gym4.pory"
	case TYPE_GRASS, Common_EventScript_StartGym4Fight_16
# 20 "data/scripts/important_fights/gym4.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym4Fight_17
# 21 "data/scripts/important_fights/gym4.pory"
	case TYPE_STEEL, Common_EventScript_StartGym4Fight_18
# 22 "data/scripts/important_fights/gym4.pory"
	case TYPE_BUG, Common_EventScript_StartGym4Fight_19
# 23 "data/scripts/important_fights/gym4.pory"
	call normalFightGym4
	return

Common_EventScript_StartGym4Fight_2:
# 5 "data/scripts/important_fights/gym4.pory"
	call normalFightGym4
	return

Common_EventScript_StartGym4Fight_3:
# 6 "data/scripts/important_fights/gym4.pory"
	call rockFightGym4
	return

Common_EventScript_StartGym4Fight_4:
# 7 "data/scripts/important_fights/gym4.pory"
	call electricFightGym4
	return

Common_EventScript_StartGym4Fight_5:
# 8 "data/scripts/important_fights/gym4.pory"
	call fightingFightGym4
	return

Common_EventScript_StartGym4Fight_6:
# 9 "data/scripts/important_fights/gym4.pory"
	call psychicFightGym4
	return

Common_EventScript_StartGym4Fight_7:
# 10 "data/scripts/important_fights/gym4.pory"
	call fireFightGym4
	return

Common_EventScript_StartGym4Fight_8:
# 11 "data/scripts/important_fights/gym4.pory"
	call flyingFightGym4
	return

Common_EventScript_StartGym4Fight_9:
# 12 "data/scripts/important_fights/gym4.pory"
	call waterFightGym4
	return

Common_EventScript_StartGym4Fight_10:
# 13 "data/scripts/important_fights/gym4.pory"
	call darkFightGym4
	return

Common_EventScript_StartGym4Fight_11:
# 14 "data/scripts/important_fights/gym4.pory"
	call ghostFightGym4
	return

Common_EventScript_StartGym4Fight_12:
# 15 "data/scripts/important_fights/gym4.pory"
	call iceFightGym4
	return

Common_EventScript_StartGym4Fight_13:
# 16 "data/scripts/important_fights/gym4.pory"
	call dragonFightGym4
	return

Common_EventScript_StartGym4Fight_14:
# 17 "data/scripts/important_fights/gym4.pory"
	call poisonFightGym4
	return

Common_EventScript_StartGym4Fight_15:
# 18 "data/scripts/important_fights/gym4.pory"
	call groundFightGym4
	return

Common_EventScript_StartGym4Fight_16:
# 19 "data/scripts/important_fights/gym4.pory"
	call grassFightGym4
	return

Common_EventScript_StartGym4Fight_17:
# 20 "data/scripts/important_fights/gym4.pory"
	call fairyFightGym4
	return

Common_EventScript_StartGym4Fight_18:
# 21 "data/scripts/important_fights/gym4.pory"
	call steelFightGym4
	return

Common_EventScript_StartGym4Fight_19:
# 22 "data/scripts/important_fights/gym4.pory"
	call bugFightGym4
	return


normalFightGym4:
# 28 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym4.pory"
	case 0, normalFightGym4_2
# 33 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_4, NormanIntroGym, NormanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym4_2:
# 31 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_4, NormanIntroGym, NormanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym4:
# 38 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym4.pory"
	case 0, rockFightGym4_2
# 43 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_4, RoxanneIntroGym, RoxanneGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym4_2:
# 41 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_4, RoxanneIntroGym, RoxanneGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym4:
# 48 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym4.pory"
	case 0, electricFightGym4_2
# 53 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_4, WattsonIntroGym, WattsonGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym4_2:
# 51 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_4, WattsonIntroGym, WattsonGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym4:
# 58 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym4.pory"
	case 0, fightingFightGym4_2
# 63 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_4, BrawlyIntroGym, BrawlyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym4_2:
# 61 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_4, BrawlyIntroGym, BrawlyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym4:
# 68 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym4.pory"
	case 0, psychicFightGym4_2
# 73 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_TATE_GYM_4, TateIntroGym, TateGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym4_2:
# 71 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_TATE_GYM_4, TateIntroGym, TateGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym4:
# 78 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym4.pory"
	case 0, fireFightGym4_2
# 83 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_4, FlanneryIntroGym, FlanneryGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym4_2:
# 81 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_4, FlanneryIntroGym, FlanneryGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym4:
# 88 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym4.pory"
	case 0, flyingFightGym4_2
# 93 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_WINONA_GYM_4, WinonaIntroGym, WinonaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym4_2:
# 91 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_WINONA_GYM_4, WinonaIntroGym, WinonaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym4:
# 98 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym4.pory"
	case 0, waterFightGym4_2
# 103 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_JUAN_GYM_4, JuanIntroGym, JuanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym4_2:
# 101 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_JUAN_GYM_4, JuanIntroGym, JuanGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym4:
# 108 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym4.pory"
	case 0, darkFightGym4_2
# 113 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_4, SidneyIntroGym, SidneyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym4_2:
# 111 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_4, SidneyIntroGym, SidneyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym4:
# 118 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym4.pory"
	case 0, ghostFightGym4_2
# 123 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_4, PhoebeIntroGym, PhoebeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym4_2:
# 121 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_4, PhoebeIntroGym, PhoebeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym4:
# 128 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym4.pory"
	case 0, iceFightGym4_2
# 133 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_4, GlaciaIntroGym, GlaciaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym4_2:
# 131 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_4, GlaciaIntroGym, GlaciaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym4:
# 138 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym4.pory"
	case 0, dragonFightGym4_2
# 143 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_4, DrakeIntroGym, DrakeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym4_2:
# 141 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_4, DrakeIntroGym, DrakeGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym4:
# 148 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym4.pory"
	case 0, poisonFightGym4_2
# 153 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_KOGA_GYM_4, KogaIntroGym, KogaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym4_2:
# 151 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_KOGA_GYM_4, KogaIntroGym, KogaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym4:
# 158 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym4.pory"
	case 0, groundFightGym4_2
# 163 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_4, GiovanniIntroGym, GiovanniGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym4_2:
# 161 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_4, GiovanniIntroGym, GiovanniGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym4:
# 168 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym4.pory"
	case 0, grassFightGym4_2
# 173 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_4, ErikaIntroGym, ErikaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym4_2:
# 171 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_4, ErikaIntroGym, ErikaGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym4:
# 178 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym4.pory"
	case 0, fairyFightGym4_2
# 183 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_4, ValerieIntroGym, ValerieGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym4_2:
# 181 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_4, ValerieIntroGym, ValerieGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym4:
# 188 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym4.pory"
	case 0, steelFightGym4_2
# 193 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_4, StevenIntroGym, StevenGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym4_2:
# 191 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_4, StevenIntroGym, StevenGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym4:
# 198 "data/scripts/important_fights/gym4.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym4.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym4.pory"
	case 0, bugFightGym4_2
# 203 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_4, BugsyIntroGym, BugsyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym4_2:
# 201 "data/scripts/important_fights/gym4.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_4, BugsyIntroGym, BugsyGymDefeat, LavaridgeTown_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

