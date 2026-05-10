Common_EventScript_StartGym1Fight::
# 3 "data/scripts/important_fights/gym1.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym1.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym1Fight_2
# 6 "data/scripts/important_fights/gym1.pory"
	case TYPE_ROCK, Common_EventScript_StartGym1Fight_3
# 7 "data/scripts/important_fights/gym1.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym1Fight_4
# 8 "data/scripts/important_fights/gym1.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym1Fight_5
# 9 "data/scripts/important_fights/gym1.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym1Fight_6
# 10 "data/scripts/important_fights/gym1.pory"
	case TYPE_FIRE, Common_EventScript_StartGym1Fight_7
# 11 "data/scripts/important_fights/gym1.pory"
	case TYPE_FLYING, Common_EventScript_StartGym1Fight_8
# 12 "data/scripts/important_fights/gym1.pory"
	case TYPE_WATER, Common_EventScript_StartGym1Fight_9
# 13 "data/scripts/important_fights/gym1.pory"
	case TYPE_DARK, Common_EventScript_StartGym1Fight_10
# 14 "data/scripts/important_fights/gym1.pory"
	case TYPE_GHOST, Common_EventScript_StartGym1Fight_11
# 15 "data/scripts/important_fights/gym1.pory"
	case TYPE_ICE, Common_EventScript_StartGym1Fight_12
# 16 "data/scripts/important_fights/gym1.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym1Fight_13
# 17 "data/scripts/important_fights/gym1.pory"
	case TYPE_POISON, Common_EventScript_StartGym1Fight_14
# 18 "data/scripts/important_fights/gym1.pory"
	case TYPE_GROUND, Common_EventScript_StartGym1Fight_15
# 19 "data/scripts/important_fights/gym1.pory"
	case TYPE_GRASS, Common_EventScript_StartGym1Fight_16
# 20 "data/scripts/important_fights/gym1.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym1Fight_17
# 21 "data/scripts/important_fights/gym1.pory"
	case TYPE_STEEL, Common_EventScript_StartGym1Fight_18
# 22 "data/scripts/important_fights/gym1.pory"
	case TYPE_BUG, Common_EventScript_StartGym1Fight_19
# 23 "data/scripts/important_fights/gym1.pory"
	call normalFightGym1
	return

Common_EventScript_StartGym1Fight_2:
# 5 "data/scripts/important_fights/gym1.pory"
	call normalFightGym1
	return

Common_EventScript_StartGym1Fight_3:
# 6 "data/scripts/important_fights/gym1.pory"
	call rockFightGym1
	return

Common_EventScript_StartGym1Fight_4:
# 7 "data/scripts/important_fights/gym1.pory"
	call electricFightGym1
	return

Common_EventScript_StartGym1Fight_5:
# 8 "data/scripts/important_fights/gym1.pory"
	call fightingFightGym1
	return

Common_EventScript_StartGym1Fight_6:
# 9 "data/scripts/important_fights/gym1.pory"
	call psychicFightGym1
	return

Common_EventScript_StartGym1Fight_7:
# 10 "data/scripts/important_fights/gym1.pory"
	call fireFightGym1
	return

Common_EventScript_StartGym1Fight_8:
# 11 "data/scripts/important_fights/gym1.pory"
	call flyingFightGym1
	return

Common_EventScript_StartGym1Fight_9:
# 12 "data/scripts/important_fights/gym1.pory"
	call waterFightGym1
	return

Common_EventScript_StartGym1Fight_10:
# 13 "data/scripts/important_fights/gym1.pory"
	call darkFightGym1
	return

Common_EventScript_StartGym1Fight_11:
# 14 "data/scripts/important_fights/gym1.pory"
	call ghostFightGym1
	return

Common_EventScript_StartGym1Fight_12:
# 15 "data/scripts/important_fights/gym1.pory"
	call iceFightGym1
	return

Common_EventScript_StartGym1Fight_13:
# 16 "data/scripts/important_fights/gym1.pory"
	call dragonFightGym1
	return

Common_EventScript_StartGym1Fight_14:
# 17 "data/scripts/important_fights/gym1.pory"
	call poisonFightGym1
	return

Common_EventScript_StartGym1Fight_15:
# 18 "data/scripts/important_fights/gym1.pory"
	call groundFightGym1
	return

Common_EventScript_StartGym1Fight_16:
# 19 "data/scripts/important_fights/gym1.pory"
	call grassFightGym1
	return

Common_EventScript_StartGym1Fight_17:
# 20 "data/scripts/important_fights/gym1.pory"
	call fairyFightGym1
	return

Common_EventScript_StartGym1Fight_18:
# 21 "data/scripts/important_fights/gym1.pory"
	call steelFightGym1
	return

Common_EventScript_StartGym1Fight_19:
# 22 "data/scripts/important_fights/gym1.pory"
	call bugFightGym1
	return


normalFightGym1:
# 28 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym1.pory"
	case 0, normalFightGym1_2
# 33 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_1, NormanIntroGym, NormanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym1_2:
# 31 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_1, NormanIntroGym, NormanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym1:
# 38 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym1.pory"
	case 0, rockFightGym1_2
# 43 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_1, RoxanneIntroGym, RoxanneGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym1_2:
# 41 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_1, RoxanneIntroGym, RoxanneGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym1:
# 48 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym1.pory"
	case 0, electricFightGym1_2
# 53 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_1, WattsonIntroGym, WattsonGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym1_2:
# 51 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_1, WattsonIntroGym, WattsonGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym1:
# 58 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym1.pory"
	case 0, fightingFightGym1_2
# 63 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_1, BrawlyIntroGym, BrawlyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym1_2:
# 61 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_1, BrawlyIntroGym, BrawlyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym1:
# 68 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym1.pory"
	case 0, psychicFightGym1_2
# 73 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_TATE_GYM_1, TateIntroGym, TateGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym1_2:
# 71 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_TATE_GYM_1, TateIntroGym, TateGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym1:
# 78 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym1.pory"
	case 0, fireFightGym1_2
# 83 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_1, FlanneryIntroGym, FlanneryGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym1_2:
# 81 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_1, FlanneryIntroGym, FlanneryGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym1:
# 88 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym1.pory"
	case 0, flyingFightGym1_2
# 93 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_WINONA_GYM_1, WinonaIntroGym, WinonaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym1_2:
# 91 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_WINONA_GYM_1, WinonaIntroGym, WinonaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym1:
# 98 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym1.pory"
	case 0, waterFightGym1_2
# 103 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_JUAN_GYM_1, JuanIntroGym, JuanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym1_2:
# 101 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_JUAN_GYM_1, JuanIntroGym, JuanGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym1:
# 108 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym1.pory"
	case 0, darkFightGym1_2
# 113 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_1, SidneyIntroGym, SidneyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym1_2:
# 111 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_1, SidneyIntroGym, SidneyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym1:
# 118 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym1.pory"
	case 0, ghostFightGym1_2
# 123 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_1, PhoebeIntroGym, PhoebeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym1_2:
# 121 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_1, PhoebeIntroGym, PhoebeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym1:
# 128 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym1.pory"
	case 0, iceFightGym1_2
# 133 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_1, GlaciaIntroGym, GlaciaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym1_2:
# 131 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_1, GlaciaIntroGym, GlaciaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym1:
# 138 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym1.pory"
	case 0, dragonFightGym1_2
# 143 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_1, DrakeIntroGym, DrakeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym1_2:
# 141 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_1, DrakeIntroGym, DrakeGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym1:
# 148 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym1.pory"
	case 0, poisonFightGym1_2
# 153 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_KOGA_GYM_1, KogaIntroGym, KogaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym1_2:
# 151 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_KOGA_GYM_1, KogaIntroGym, KogaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym1:
# 158 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym1.pory"
	case 0, groundFightGym1_2
# 163 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_1, GiovanniIntroGym, GiovanniGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym1_2:
# 161 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_1, GiovanniIntroGym, GiovanniGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym1:
# 168 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym1.pory"
	case 0, grassFightGym1_2
# 173 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_1, ErikaIntroGym, ErikaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym1_2:
# 171 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_1, ErikaIntroGym, ErikaGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym1:
# 178 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym1.pory"
	case 0, fairyFightGym1_2
# 183 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_1, ValerieIntroGym, ValerieGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym1_2:
# 181 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_1, ValerieIntroGym, ValerieGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym1:
# 188 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym1.pory"
	case 0, steelFightGym1_2
# 193 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_1, StevenIntroGym, StevenGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym1_2:
# 191 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_1, StevenIntroGym, StevenGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym1:
# 198 "data/scripts/important_fights/gym1.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym1.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym1.pory"
	case 0, bugFightGym1_2
# 203 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_1, BugsyIntroGym, BugsyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym1_2:
# 201 "data/scripts/important_fights/gym1.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_1, BugsyIntroGym, BugsyGymDefeat, RustboroCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

