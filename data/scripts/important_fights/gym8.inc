Common_EventScript_StartGym8Fight::
# 3 "data/scripts/important_fights/gym8.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym8.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym8Fight_2
# 6 "data/scripts/important_fights/gym8.pory"
	case TYPE_ROCK, Common_EventScript_StartGym8Fight_3
# 7 "data/scripts/important_fights/gym8.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym8Fight_4
# 8 "data/scripts/important_fights/gym8.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym8Fight_5
# 9 "data/scripts/important_fights/gym8.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym8Fight_6
# 10 "data/scripts/important_fights/gym8.pory"
	case TYPE_FIRE, Common_EventScript_StartGym8Fight_7
# 11 "data/scripts/important_fights/gym8.pory"
	case TYPE_FLYING, Common_EventScript_StartGym8Fight_8
# 12 "data/scripts/important_fights/gym8.pory"
	case TYPE_WATER, Common_EventScript_StartGym8Fight_9
# 13 "data/scripts/important_fights/gym8.pory"
	case TYPE_DARK, Common_EventScript_StartGym8Fight_10
# 14 "data/scripts/important_fights/gym8.pory"
	case TYPE_GHOST, Common_EventScript_StartGym8Fight_11
# 15 "data/scripts/important_fights/gym8.pory"
	case TYPE_ICE, Common_EventScript_StartGym8Fight_12
# 16 "data/scripts/important_fights/gym8.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym8Fight_13
# 17 "data/scripts/important_fights/gym8.pory"
	case TYPE_POISON, Common_EventScript_StartGym8Fight_14
# 18 "data/scripts/important_fights/gym8.pory"
	case TYPE_GROUND, Common_EventScript_StartGym8Fight_15
# 19 "data/scripts/important_fights/gym8.pory"
	case TYPE_GRASS, Common_EventScript_StartGym8Fight_16
# 20 "data/scripts/important_fights/gym8.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym8Fight_17
# 21 "data/scripts/important_fights/gym8.pory"
	case TYPE_STEEL, Common_EventScript_StartGym8Fight_18
# 22 "data/scripts/important_fights/gym8.pory"
	case TYPE_BUG, Common_EventScript_StartGym8Fight_19
# 23 "data/scripts/important_fights/gym8.pory"
	call normalFightGym8
	return

Common_EventScript_StartGym8Fight_2:
# 5 "data/scripts/important_fights/gym8.pory"
	call normalFightGym8
	return

Common_EventScript_StartGym8Fight_3:
# 6 "data/scripts/important_fights/gym8.pory"
	call rockFightGym8
	return

Common_EventScript_StartGym8Fight_4:
# 7 "data/scripts/important_fights/gym8.pory"
	call electricFightGym8
	return

Common_EventScript_StartGym8Fight_5:
# 8 "data/scripts/important_fights/gym8.pory"
	call fightingFightGym8
	return

Common_EventScript_StartGym8Fight_6:
# 9 "data/scripts/important_fights/gym8.pory"
	call psychicFightGym8
	return

Common_EventScript_StartGym8Fight_7:
# 10 "data/scripts/important_fights/gym8.pory"
	call fireFightGym8
	return

Common_EventScript_StartGym8Fight_8:
# 11 "data/scripts/important_fights/gym8.pory"
	call flyingFightGym8
	return

Common_EventScript_StartGym8Fight_9:
# 12 "data/scripts/important_fights/gym8.pory"
	call waterFightGym8
	return

Common_EventScript_StartGym8Fight_10:
# 13 "data/scripts/important_fights/gym8.pory"
	call darkFightGym8
	return

Common_EventScript_StartGym8Fight_11:
# 14 "data/scripts/important_fights/gym8.pory"
	call ghostFightGym8
	return

Common_EventScript_StartGym8Fight_12:
# 15 "data/scripts/important_fights/gym8.pory"
	call iceFightGym8
	return

Common_EventScript_StartGym8Fight_13:
# 16 "data/scripts/important_fights/gym8.pory"
	call dragonFightGym8
	return

Common_EventScript_StartGym8Fight_14:
# 17 "data/scripts/important_fights/gym8.pory"
	call poisonFightGym8
	return

Common_EventScript_StartGym8Fight_15:
# 18 "data/scripts/important_fights/gym8.pory"
	call groundFightGym8
	return

Common_EventScript_StartGym8Fight_16:
# 19 "data/scripts/important_fights/gym8.pory"
	call grassFightGym8
	return

Common_EventScript_StartGym8Fight_17:
# 20 "data/scripts/important_fights/gym8.pory"
	call fairyFightGym8
	return

Common_EventScript_StartGym8Fight_18:
# 21 "data/scripts/important_fights/gym8.pory"
	call steelFightGym8
	return

Common_EventScript_StartGym8Fight_19:
# 22 "data/scripts/important_fights/gym8.pory"
	call bugFightGym8
	return


normalFightGym8:
# 28 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym8.pory"
	case 0, normalFightGym8_2
# 33 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_8, NormanIntroGym, NormanGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym8_2:
# 31 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_8, NormanIntroGym, NormanGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym8:
# 38 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym8.pory"
	case 0, rockFightGym8_2
# 43 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_8, RoxanneIntroGym, RoxanneGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym8_2:
# 41 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_8, RoxanneIntroGym, RoxanneGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym8:
# 48 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym8.pory"
	case 0, electricFightGym8_2
# 53 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_8, WattsonIntroGym, WattsonGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym8_2:
# 51 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_8, WattsonIntroGym, WattsonGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym8:
# 58 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym8.pory"
	case 0, fightingFightGym8_2
# 63 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_8, BrawlyIntroGym, BrawlyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym8_2:
# 61 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_8, BrawlyIntroGym, BrawlyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym8:
# 68 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym8.pory"
	case 0, psychicFightGym8_2
# 73 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_TATE_GYM_8, TateIntroGym, TateGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym8_2:
# 71 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_TATE_GYM_8, TateIntroGym, TateGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym8:
# 78 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym8.pory"
	case 0, fireFightGym8_2
# 83 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_8, FlanneryIntroGym, FlanneryGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym8_2:
# 81 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_8, FlanneryIntroGym, FlanneryGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym8:
# 88 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym8.pory"
	case 0, flyingFightGym8_2
# 93 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_WINONA_GYM_8, WinonaIntroGym, WinonaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym8_2:
# 91 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_WINONA_GYM_8, WinonaIntroGym, WinonaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym8:
# 98 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym8.pory"
	case 0, waterFightGym8_2
# 103 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_JUAN_GYM_8, JuanIntroGym, JuanGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym8_2:
# 101 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_JUAN_GYM_8, JuanIntroGym, JuanGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym8:
# 108 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym8.pory"
	case 0, darkFightGym8_2
# 113 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_8, SidneyIntroGym, SidneyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym8_2:
# 111 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_8, SidneyIntroGym, SidneyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym8:
# 118 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym8.pory"
	case 0, ghostFightGym8_2
# 123 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_8, PhoebeIntroGym, PhoebeGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym8_2:
# 121 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_8, PhoebeIntroGym, PhoebeGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym8:
# 128 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym8.pory"
	case 0, iceFightGym8_2
# 133 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_8, GlaciaIntroGym, GlaciaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym8_2:
# 131 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_8, GlaciaIntroGym, GlaciaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym8:
# 138 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym8.pory"
	case 0, dragonFightGym8_2
# 143 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_8, DrakeIntroGym, DrakeGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym8_2:
# 141 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_8, DrakeIntroGym, DrakeGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym8:
# 148 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym8.pory"
	case 0, poisonFightGym8_2
# 153 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_KOGA_GYM_8, KogaIntroGym, KogaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym8_2:
# 151 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_KOGA_GYM_8, KogaIntroGym, KogaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym8:
# 158 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym8.pory"
	case 0, groundFightGym8_2
# 163 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_8, GiovanniIntroGym, GiovanniGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym8_2:
# 161 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_8, GiovanniIntroGym, GiovanniGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym8:
# 168 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym8.pory"
	case 0, grassFightGym8_2
# 173 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_8, ErikaIntroGym, ErikaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym8_2:
# 171 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_8, ErikaIntroGym, ErikaGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym8:
# 178 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym8.pory"
	case 0, fairyFightGym8_2
# 183 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_8, ValerieIntroGym, ValerieGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym8_2:
# 181 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_8, ValerieIntroGym, ValerieGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym8:
# 188 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym8.pory"
	case 0, steelFightGym8_2
# 193 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_8, StevenIntroGym, StevenGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym8_2:
# 191 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_8, StevenIntroGym, StevenGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym8:
# 198 "data/scripts/important_fights/gym8.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym8.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym8.pory"
	case 0, bugFightGym8_2
# 203 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_8, BugsyIntroGym, BugsyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym8_2:
# 201 "data/scripts/important_fights/gym8.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_8, BugsyIntroGym, BugsyGymDefeat, SootopolisCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

