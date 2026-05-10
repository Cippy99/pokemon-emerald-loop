Common_EventScript_StartGym6Fight::
# 3 "data/scripts/important_fights/gym6.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym6.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym6Fight_2
# 6 "data/scripts/important_fights/gym6.pory"
	case TYPE_ROCK, Common_EventScript_StartGym6Fight_3
# 7 "data/scripts/important_fights/gym6.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym6Fight_4
# 8 "data/scripts/important_fights/gym6.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym6Fight_5
# 9 "data/scripts/important_fights/gym6.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym6Fight_6
# 10 "data/scripts/important_fights/gym6.pory"
	case TYPE_FIRE, Common_EventScript_StartGym6Fight_7
# 11 "data/scripts/important_fights/gym6.pory"
	case TYPE_FLYING, Common_EventScript_StartGym6Fight_8
# 12 "data/scripts/important_fights/gym6.pory"
	case TYPE_WATER, Common_EventScript_StartGym6Fight_9
# 13 "data/scripts/important_fights/gym6.pory"
	case TYPE_DARK, Common_EventScript_StartGym6Fight_10
# 14 "data/scripts/important_fights/gym6.pory"
	case TYPE_GHOST, Common_EventScript_StartGym6Fight_11
# 15 "data/scripts/important_fights/gym6.pory"
	case TYPE_ICE, Common_EventScript_StartGym6Fight_12
# 16 "data/scripts/important_fights/gym6.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym6Fight_13
# 17 "data/scripts/important_fights/gym6.pory"
	case TYPE_POISON, Common_EventScript_StartGym6Fight_14
# 18 "data/scripts/important_fights/gym6.pory"
	case TYPE_GROUND, Common_EventScript_StartGym6Fight_15
# 19 "data/scripts/important_fights/gym6.pory"
	case TYPE_GRASS, Common_EventScript_StartGym6Fight_16
# 20 "data/scripts/important_fights/gym6.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym6Fight_17
# 21 "data/scripts/important_fights/gym6.pory"
	case TYPE_STEEL, Common_EventScript_StartGym6Fight_18
# 22 "data/scripts/important_fights/gym6.pory"
	case TYPE_BUG, Common_EventScript_StartGym6Fight_19
# 23 "data/scripts/important_fights/gym6.pory"
	call normalFightGym6
	return

Common_EventScript_StartGym6Fight_2:
# 5 "data/scripts/important_fights/gym6.pory"
	call normalFightGym6
	return

Common_EventScript_StartGym6Fight_3:
# 6 "data/scripts/important_fights/gym6.pory"
	call rockFightGym6
	return

Common_EventScript_StartGym6Fight_4:
# 7 "data/scripts/important_fights/gym6.pory"
	call electricFightGym6
	return

Common_EventScript_StartGym6Fight_5:
# 8 "data/scripts/important_fights/gym6.pory"
	call fightingFightGym6
	return

Common_EventScript_StartGym6Fight_6:
# 9 "data/scripts/important_fights/gym6.pory"
	call psychicFightGym6
	return

Common_EventScript_StartGym6Fight_7:
# 10 "data/scripts/important_fights/gym6.pory"
	call fireFightGym6
	return

Common_EventScript_StartGym6Fight_8:
# 11 "data/scripts/important_fights/gym6.pory"
	call flyingFightGym6
	return

Common_EventScript_StartGym6Fight_9:
# 12 "data/scripts/important_fights/gym6.pory"
	call waterFightGym6
	return

Common_EventScript_StartGym6Fight_10:
# 13 "data/scripts/important_fights/gym6.pory"
	call darkFightGym6
	return

Common_EventScript_StartGym6Fight_11:
# 14 "data/scripts/important_fights/gym6.pory"
	call ghostFightGym6
	return

Common_EventScript_StartGym6Fight_12:
# 15 "data/scripts/important_fights/gym6.pory"
	call iceFightGym6
	return

Common_EventScript_StartGym6Fight_13:
# 16 "data/scripts/important_fights/gym6.pory"
	call dragonFightGym6
	return

Common_EventScript_StartGym6Fight_14:
# 17 "data/scripts/important_fights/gym6.pory"
	call poisonFightGym6
	return

Common_EventScript_StartGym6Fight_15:
# 18 "data/scripts/important_fights/gym6.pory"
	call groundFightGym6
	return

Common_EventScript_StartGym6Fight_16:
# 19 "data/scripts/important_fights/gym6.pory"
	call grassFightGym6
	return

Common_EventScript_StartGym6Fight_17:
# 20 "data/scripts/important_fights/gym6.pory"
	call fairyFightGym6
	return

Common_EventScript_StartGym6Fight_18:
# 21 "data/scripts/important_fights/gym6.pory"
	call steelFightGym6
	return

Common_EventScript_StartGym6Fight_19:
# 22 "data/scripts/important_fights/gym6.pory"
	call bugFightGym6
	return


normalFightGym6:
# 28 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym6.pory"
	case 0, normalFightGym6_2
# 33 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_6, NormanIntroGym, NormanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym6_2:
# 31 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_6, NormanIntroGym, NormanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym6:
# 38 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym6.pory"
	case 0, rockFightGym6_2
# 43 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_6, RoxanneIntroGym, RoxanneGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym6_2:
# 41 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_6, RoxanneIntroGym, RoxanneGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym6:
# 48 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym6.pory"
	case 0, electricFightGym6_2
# 53 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_6, WattsonIntroGym, WattsonGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym6_2:
# 51 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_6, WattsonIntroGym, WattsonGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym6:
# 58 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym6.pory"
	case 0, fightingFightGym6_2
# 63 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_6, BrawlyIntroGym, BrawlyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym6_2:
# 61 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_6, BrawlyIntroGym, BrawlyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym6:
# 68 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym6.pory"
	case 0, psychicFightGym6_2
# 73 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_TATE_GYM_6, TateIntroGym, TateGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym6_2:
# 71 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_TATE_GYM_6, TateIntroGym, TateGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym6:
# 78 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym6.pory"
	case 0, fireFightGym6_2
# 83 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_6, FlanneryIntroGym, FlanneryGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym6_2:
# 81 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_6, FlanneryIntroGym, FlanneryGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym6:
# 88 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym6.pory"
	case 0, flyingFightGym6_2
# 93 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_WINONA_GYM_6, WinonaIntroGym, WinonaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym6_2:
# 91 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_WINONA_GYM_6, WinonaIntroGym, WinonaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym6:
# 98 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym6.pory"
	case 0, waterFightGym6_2
# 103 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_JUAN_GYM_6, JuanIntroGym, JuanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym6_2:
# 101 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_JUAN_GYM_6, JuanIntroGym, JuanGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym6:
# 108 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym6.pory"
	case 0, darkFightGym6_2
# 113 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_6, SidneyIntroGym, SidneyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym6_2:
# 111 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_6, SidneyIntroGym, SidneyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym6:
# 118 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym6.pory"
	case 0, ghostFightGym6_2
# 123 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_6, PhoebeIntroGym, PhoebeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym6_2:
# 121 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_6, PhoebeIntroGym, PhoebeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym6:
# 128 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym6.pory"
	case 0, iceFightGym6_2
# 133 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_6, GlaciaIntroGym, GlaciaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym6_2:
# 131 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_6, GlaciaIntroGym, GlaciaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym6:
# 138 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym6.pory"
	case 0, dragonFightGym6_2
# 143 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_6, DrakeIntroGym, DrakeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym6_2:
# 141 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_6, DrakeIntroGym, DrakeGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym6:
# 148 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym6.pory"
	case 0, poisonFightGym6_2
# 153 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_KOGA_GYM_6, KogaIntroGym, KogaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym6_2:
# 151 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_KOGA_GYM_6, KogaIntroGym, KogaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym6:
# 158 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym6.pory"
	case 0, groundFightGym6_2
# 163 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_6, GiovanniIntroGym, GiovanniGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym6_2:
# 161 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_6, GiovanniIntroGym, GiovanniGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym6:
# 168 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym6.pory"
	case 0, grassFightGym6_2
# 173 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_6, ErikaIntroGym, ErikaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym6_2:
# 171 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_6, ErikaIntroGym, ErikaGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym6:
# 178 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym6.pory"
	case 0, fairyFightGym6_2
# 183 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_6, ValerieIntroGym, ValerieGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym6_2:
# 181 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_6, ValerieIntroGym, ValerieGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym6:
# 188 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym6.pory"
	case 0, steelFightGym6_2
# 193 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_6, StevenIntroGym, StevenGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym6_2:
# 191 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_6, StevenIntroGym, StevenGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym6:
# 198 "data/scripts/important_fights/gym6.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym6.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym6.pory"
	case 0, bugFightGym6_2
# 203 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_6, BugsyIntroGym, BugsyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym6_2:
# 201 "data/scripts/important_fights/gym6.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_6, BugsyIntroGym, BugsyGymDefeat, FortreeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

