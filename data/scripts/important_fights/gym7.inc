Common_EventScript_StartGym7Fight::
# 3 "data/scripts/important_fights/gym7.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym7.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym7Fight_2
# 6 "data/scripts/important_fights/gym7.pory"
	case TYPE_ROCK, Common_EventScript_StartGym7Fight_3
# 7 "data/scripts/important_fights/gym7.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym7Fight_4
# 8 "data/scripts/important_fights/gym7.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym7Fight_5
# 9 "data/scripts/important_fights/gym7.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym7Fight_6
# 10 "data/scripts/important_fights/gym7.pory"
	case TYPE_FIRE, Common_EventScript_StartGym7Fight_7
# 11 "data/scripts/important_fights/gym7.pory"
	case TYPE_FLYING, Common_EventScript_StartGym7Fight_8
# 12 "data/scripts/important_fights/gym7.pory"
	case TYPE_WATER, Common_EventScript_StartGym7Fight_9
# 13 "data/scripts/important_fights/gym7.pory"
	case TYPE_DARK, Common_EventScript_StartGym7Fight_10
# 14 "data/scripts/important_fights/gym7.pory"
	case TYPE_GHOST, Common_EventScript_StartGym7Fight_11
# 15 "data/scripts/important_fights/gym7.pory"
	case TYPE_ICE, Common_EventScript_StartGym7Fight_12
# 16 "data/scripts/important_fights/gym7.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym7Fight_13
# 17 "data/scripts/important_fights/gym7.pory"
	case TYPE_POISON, Common_EventScript_StartGym7Fight_14
# 18 "data/scripts/important_fights/gym7.pory"
	case TYPE_GROUND, Common_EventScript_StartGym7Fight_15
# 19 "data/scripts/important_fights/gym7.pory"
	case TYPE_GRASS, Common_EventScript_StartGym7Fight_16
# 20 "data/scripts/important_fights/gym7.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym7Fight_17
# 21 "data/scripts/important_fights/gym7.pory"
	case TYPE_STEEL, Common_EventScript_StartGym7Fight_18
# 22 "data/scripts/important_fights/gym7.pory"
	case TYPE_BUG, Common_EventScript_StartGym7Fight_19
# 23 "data/scripts/important_fights/gym7.pory"
	call normalFightGym7
	return

Common_EventScript_StartGym7Fight_2:
# 5 "data/scripts/important_fights/gym7.pory"
	call normalFightGym7
	return

Common_EventScript_StartGym7Fight_3:
# 6 "data/scripts/important_fights/gym7.pory"
	call rockFightGym7
	return

Common_EventScript_StartGym7Fight_4:
# 7 "data/scripts/important_fights/gym7.pory"
	call electricFightGym7
	return

Common_EventScript_StartGym7Fight_5:
# 8 "data/scripts/important_fights/gym7.pory"
	call fightingFightGym7
	return

Common_EventScript_StartGym7Fight_6:
# 9 "data/scripts/important_fights/gym7.pory"
	call psychicFightGym7
	return

Common_EventScript_StartGym7Fight_7:
# 10 "data/scripts/important_fights/gym7.pory"
	call fireFightGym7
	return

Common_EventScript_StartGym7Fight_8:
# 11 "data/scripts/important_fights/gym7.pory"
	call flyingFightGym7
	return

Common_EventScript_StartGym7Fight_9:
# 12 "data/scripts/important_fights/gym7.pory"
	call waterFightGym7
	return

Common_EventScript_StartGym7Fight_10:
# 13 "data/scripts/important_fights/gym7.pory"
	call darkFightGym7
	return

Common_EventScript_StartGym7Fight_11:
# 14 "data/scripts/important_fights/gym7.pory"
	call ghostFightGym7
	return

Common_EventScript_StartGym7Fight_12:
# 15 "data/scripts/important_fights/gym7.pory"
	call iceFightGym7
	return

Common_EventScript_StartGym7Fight_13:
# 16 "data/scripts/important_fights/gym7.pory"
	call dragonFightGym7
	return

Common_EventScript_StartGym7Fight_14:
# 17 "data/scripts/important_fights/gym7.pory"
	call poisonFightGym7
	return

Common_EventScript_StartGym7Fight_15:
# 18 "data/scripts/important_fights/gym7.pory"
	call groundFightGym7
	return

Common_EventScript_StartGym7Fight_16:
# 19 "data/scripts/important_fights/gym7.pory"
	call grassFightGym7
	return

Common_EventScript_StartGym7Fight_17:
# 20 "data/scripts/important_fights/gym7.pory"
	call fairyFightGym7
	return

Common_EventScript_StartGym7Fight_18:
# 21 "data/scripts/important_fights/gym7.pory"
	call steelFightGym7
	return

Common_EventScript_StartGym7Fight_19:
# 22 "data/scripts/important_fights/gym7.pory"
	call bugFightGym7
	return


normalFightGym7:
# 28 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym7.pory"
	case 0, normalFightGym7_2
# 33 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_7, NormanIntroGym, NormanGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym7_2:
# 31 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_7, NormanIntroGym, NormanGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym7:
# 38 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym7.pory"
	case 0, rockFightGym7_2
# 43 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_7, RoxanneIntroGym, RoxanneGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym7_2:
# 41 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_7, RoxanneIntroGym, RoxanneGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym7:
# 48 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym7.pory"
	case 0, electricFightGym7_2
# 53 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_7, WattsonIntroGym, WattsonGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym7_2:
# 51 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_7, WattsonIntroGym, WattsonGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym7:
# 58 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym7.pory"
	case 0, fightingFightGym7_2
# 63 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_7, BrawlyIntroGym, BrawlyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym7_2:
# 61 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_7, BrawlyIntroGym, BrawlyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym7:
# 68 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym7.pory"
	case 0, psychicFightGym7_2
# 73 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_TATE_GYM_7, TateIntroGym, TateGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym7_2:
# 71 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_TATE_GYM_7, TateIntroGym, TateGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym7:
# 78 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym7.pory"
	case 0, fireFightGym7_2
# 83 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_7, FlanneryIntroGym, FlanneryGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym7_2:
# 81 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_7, FlanneryIntroGym, FlanneryGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym7:
# 88 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym7.pory"
	case 0, flyingFightGym7_2
# 93 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_WINONA_GYM_7, WinonaIntroGym, WinonaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym7_2:
# 91 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_WINONA_GYM_7, WinonaIntroGym, WinonaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym7:
# 98 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym7.pory"
	case 0, waterFightGym7_2
# 103 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_JUAN_GYM_7, JuanIntroGym, JuanGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym7_2:
# 101 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_JUAN_GYM_7, JuanIntroGym, JuanGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym7:
# 108 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym7.pory"
	case 0, darkFightGym7_2
# 113 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_7, SidneyIntroGym, SidneyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym7_2:
# 111 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_7, SidneyIntroGym, SidneyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym7:
# 118 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym7.pory"
	case 0, ghostFightGym7_2
# 123 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_7, PhoebeIntroGym, PhoebeGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym7_2:
# 121 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_7, PhoebeIntroGym, PhoebeGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym7:
# 128 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym7.pory"
	case 0, iceFightGym7_2
# 133 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_7, GlaciaIntroGym, GlaciaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym7_2:
# 131 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_7, GlaciaIntroGym, GlaciaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym7:
# 138 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym7.pory"
	case 0, dragonFightGym7_2
# 143 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_7, DrakeIntroGym, DrakeGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym7_2:
# 141 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_7, DrakeIntroGym, DrakeGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym7:
# 148 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym7.pory"
	case 0, poisonFightGym7_2
# 153 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_KOGA_GYM_7, KogaIntroGym, KogaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym7_2:
# 151 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_KOGA_GYM_7, KogaIntroGym, KogaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym7:
# 158 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym7.pory"
	case 0, groundFightGym7_2
# 163 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_7, GiovanniIntroGym, GiovanniGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym7_2:
# 161 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_7, GiovanniIntroGym, GiovanniGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym7:
# 168 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym7.pory"
	case 0, grassFightGym7_2
# 173 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_7, ErikaIntroGym, ErikaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym7_2:
# 171 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_7, ErikaIntroGym, ErikaGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym7:
# 178 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym7.pory"
	case 0, fairyFightGym7_2
# 183 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_7, ValerieIntroGym, ValerieGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym7_2:
# 181 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_7, ValerieIntroGym, ValerieGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym7:
# 188 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym7.pory"
	case 0, steelFightGym7_2
# 193 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_7, StevenIntroGym, StevenGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym7_2:
# 191 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_7, StevenIntroGym, StevenGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym7:
# 198 "data/scripts/important_fights/gym7.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym7.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym7.pory"
	case 0, bugFightGym7_2
# 203 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_7, BugsyIntroGym, BugsyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym7_2:
# 201 "data/scripts/important_fights/gym7.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_7, BugsyIntroGym, BugsyGymDefeat, MossdeepCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

