Common_EventScript_StartGym3Fight::
# 3 "data/scripts/important_fights/gym3.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym3.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym3Fight_2
# 6 "data/scripts/important_fights/gym3.pory"
	case TYPE_ROCK, Common_EventScript_StartGym3Fight_3
# 7 "data/scripts/important_fights/gym3.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym3Fight_4
# 8 "data/scripts/important_fights/gym3.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym3Fight_5
# 9 "data/scripts/important_fights/gym3.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym3Fight_6
# 10 "data/scripts/important_fights/gym3.pory"
	case TYPE_FIRE, Common_EventScript_StartGym3Fight_7
# 11 "data/scripts/important_fights/gym3.pory"
	case TYPE_FLYING, Common_EventScript_StartGym3Fight_8
# 12 "data/scripts/important_fights/gym3.pory"
	case TYPE_WATER, Common_EventScript_StartGym3Fight_9
# 13 "data/scripts/important_fights/gym3.pory"
	case TYPE_DARK, Common_EventScript_StartGym3Fight_10
# 14 "data/scripts/important_fights/gym3.pory"
	case TYPE_GHOST, Common_EventScript_StartGym3Fight_11
# 15 "data/scripts/important_fights/gym3.pory"
	case TYPE_ICE, Common_EventScript_StartGym3Fight_12
# 16 "data/scripts/important_fights/gym3.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym3Fight_13
# 17 "data/scripts/important_fights/gym3.pory"
	case TYPE_POISON, Common_EventScript_StartGym3Fight_14
# 18 "data/scripts/important_fights/gym3.pory"
	case TYPE_GROUND, Common_EventScript_StartGym3Fight_15
# 19 "data/scripts/important_fights/gym3.pory"
	case TYPE_GRASS, Common_EventScript_StartGym3Fight_16
# 20 "data/scripts/important_fights/gym3.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym3Fight_17
# 21 "data/scripts/important_fights/gym3.pory"
	case TYPE_STEEL, Common_EventScript_StartGym3Fight_18
# 22 "data/scripts/important_fights/gym3.pory"
	case TYPE_BUG, Common_EventScript_StartGym3Fight_19
# 23 "data/scripts/important_fights/gym3.pory"
	call normalFightGym3
	return

Common_EventScript_StartGym3Fight_2:
# 5 "data/scripts/important_fights/gym3.pory"
	call normalFightGym3
	return

Common_EventScript_StartGym3Fight_3:
# 6 "data/scripts/important_fights/gym3.pory"
	call rockFightGym3
	return

Common_EventScript_StartGym3Fight_4:
# 7 "data/scripts/important_fights/gym3.pory"
	call electricFightGym3
	return

Common_EventScript_StartGym3Fight_5:
# 8 "data/scripts/important_fights/gym3.pory"
	call fightingFightGym3
	return

Common_EventScript_StartGym3Fight_6:
# 9 "data/scripts/important_fights/gym3.pory"
	call psychicFightGym3
	return

Common_EventScript_StartGym3Fight_7:
# 10 "data/scripts/important_fights/gym3.pory"
	call fireFightGym3
	return

Common_EventScript_StartGym3Fight_8:
# 11 "data/scripts/important_fights/gym3.pory"
	call flyingFightGym3
	return

Common_EventScript_StartGym3Fight_9:
# 12 "data/scripts/important_fights/gym3.pory"
	call waterFightGym3
	return

Common_EventScript_StartGym3Fight_10:
# 13 "data/scripts/important_fights/gym3.pory"
	call darkFightGym3
	return

Common_EventScript_StartGym3Fight_11:
# 14 "data/scripts/important_fights/gym3.pory"
	call ghostFightGym3
	return

Common_EventScript_StartGym3Fight_12:
# 15 "data/scripts/important_fights/gym3.pory"
	call iceFightGym3
	return

Common_EventScript_StartGym3Fight_13:
# 16 "data/scripts/important_fights/gym3.pory"
	call dragonFightGym3
	return

Common_EventScript_StartGym3Fight_14:
# 17 "data/scripts/important_fights/gym3.pory"
	call poisonFightGym3
	return

Common_EventScript_StartGym3Fight_15:
# 18 "data/scripts/important_fights/gym3.pory"
	call groundFightGym3
	return

Common_EventScript_StartGym3Fight_16:
# 19 "data/scripts/important_fights/gym3.pory"
	call grassFightGym3
	return

Common_EventScript_StartGym3Fight_17:
# 20 "data/scripts/important_fights/gym3.pory"
	call fairyFightGym3
	return

Common_EventScript_StartGym3Fight_18:
# 21 "data/scripts/important_fights/gym3.pory"
	call steelFightGym3
	return

Common_EventScript_StartGym3Fight_19:
# 22 "data/scripts/important_fights/gym3.pory"
	call bugFightGym3
	return


normalFightGym3:
# 28 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym3.pory"
	case 0, normalFightGym3_2
# 33 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_3, NormanIntroGym, NormanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym3_2:
# 31 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_3, NormanIntroGym, NormanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym3:
# 38 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym3.pory"
	case 0, rockFightGym3_2
# 43 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_3, RoxanneIntroGym, RoxanneGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym3_2:
# 41 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_3, RoxanneIntroGym, RoxanneGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym3:
# 48 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym3.pory"
	case 0, electricFightGym3_2
# 53 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_3, WattsonIntroGym, WattsonGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym3_2:
# 51 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_3, WattsonIntroGym, WattsonGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym3:
# 58 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym3.pory"
	case 0, fightingFightGym3_2
# 63 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_3, BrawlyIntroGym, BrawlyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym3_2:
# 61 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_3, BrawlyIntroGym, BrawlyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym3:
# 68 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym3.pory"
	case 0, psychicFightGym3_2
# 73 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_TATE_GYM_3, TateIntroGym, TateGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym3_2:
# 71 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_TATE_GYM_3, TateIntroGym, TateGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym3:
# 78 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym3.pory"
	case 0, fireFightGym3_2
# 83 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_3, FlanneryIntroGym, FlanneryGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym3_2:
# 81 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_3, FlanneryIntroGym, FlanneryGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym3:
# 88 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym3.pory"
	case 0, flyingFightGym3_2
# 93 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_WINONA_GYM_3, WinonaIntroGym, WinonaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym3_2:
# 91 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_WINONA_GYM_3, WinonaIntroGym, WinonaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym3:
# 98 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym3.pory"
	case 0, waterFightGym3_2
# 103 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_JUAN_GYM_3, JuanIntroGym, JuanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym3_2:
# 101 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_JUAN_GYM_3, JuanIntroGym, JuanGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym3:
# 108 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym3.pory"
	case 0, darkFightGym3_2
# 113 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_3, SidneyIntroGym, SidneyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym3_2:
# 111 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_3, SidneyIntroGym, SidneyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym3:
# 118 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym3.pory"
	case 0, ghostFightGym3_2
# 123 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_3, PhoebeIntroGym, PhoebeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym3_2:
# 121 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_3, PhoebeIntroGym, PhoebeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym3:
# 128 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym3.pory"
	case 0, iceFightGym3_2
# 133 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_3, GlaciaIntroGym, GlaciaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym3_2:
# 131 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_3, GlaciaIntroGym, GlaciaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym3:
# 138 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym3.pory"
	case 0, dragonFightGym3_2
# 143 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_3, DrakeIntroGym, DrakeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym3_2:
# 141 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_3, DrakeIntroGym, DrakeGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym3:
# 148 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym3.pory"
	case 0, poisonFightGym3_2
# 153 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_KOGA_GYM_3, KogaIntroGym, KogaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym3_2:
# 151 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_KOGA_GYM_3, KogaIntroGym, KogaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym3:
# 158 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym3.pory"
	case 0, groundFightGym3_2
# 163 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_3, GiovanniIntroGym, GiovanniGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym3_2:
# 161 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_3, GiovanniIntroGym, GiovanniGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym3:
# 168 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym3.pory"
	case 0, grassFightGym3_2
# 173 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_3, ErikaIntroGym, ErikaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym3_2:
# 171 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_3, ErikaIntroGym, ErikaGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym3:
# 178 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym3.pory"
	case 0, fairyFightGym3_2
# 183 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_3, ValerieIntroGym, ValerieGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym3_2:
# 181 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_3, ValerieIntroGym, ValerieGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym3:
# 188 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym3.pory"
	case 0, steelFightGym3_2
# 193 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_3, StevenIntroGym, StevenGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym3_2:
# 191 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_3, StevenIntroGym, StevenGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym3:
# 198 "data/scripts/important_fights/gym3.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym3.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym3.pory"
	case 0, bugFightGym3_2
# 203 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_3, BugsyIntroGym, BugsyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym3_2:
# 201 "data/scripts/important_fights/gym3.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_3, BugsyIntroGym, BugsyGymDefeat, MauvilleCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

