Common_EventScript_StartGym5Fight::
# 3 "data/scripts/important_fights/gym5.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/gym5.pory"
	case TYPE_NORMAL, Common_EventScript_StartGym5Fight_2
# 6 "data/scripts/important_fights/gym5.pory"
	case TYPE_ROCK, Common_EventScript_StartGym5Fight_3
# 7 "data/scripts/important_fights/gym5.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartGym5Fight_4
# 8 "data/scripts/important_fights/gym5.pory"
	case TYPE_FIGHTING, Common_EventScript_StartGym5Fight_5
# 9 "data/scripts/important_fights/gym5.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartGym5Fight_6
# 10 "data/scripts/important_fights/gym5.pory"
	case TYPE_FIRE, Common_EventScript_StartGym5Fight_7
# 11 "data/scripts/important_fights/gym5.pory"
	case TYPE_FLYING, Common_EventScript_StartGym5Fight_8
# 12 "data/scripts/important_fights/gym5.pory"
	case TYPE_WATER, Common_EventScript_StartGym5Fight_9
# 13 "data/scripts/important_fights/gym5.pory"
	case TYPE_DARK, Common_EventScript_StartGym5Fight_10
# 14 "data/scripts/important_fights/gym5.pory"
	case TYPE_GHOST, Common_EventScript_StartGym5Fight_11
# 15 "data/scripts/important_fights/gym5.pory"
	case TYPE_ICE, Common_EventScript_StartGym5Fight_12
# 16 "data/scripts/important_fights/gym5.pory"
	case TYPE_DRAGON, Common_EventScript_StartGym5Fight_13
# 17 "data/scripts/important_fights/gym5.pory"
	case TYPE_POISON, Common_EventScript_StartGym5Fight_14
# 18 "data/scripts/important_fights/gym5.pory"
	case TYPE_GROUND, Common_EventScript_StartGym5Fight_15
# 19 "data/scripts/important_fights/gym5.pory"
	case TYPE_GRASS, Common_EventScript_StartGym5Fight_16
# 20 "data/scripts/important_fights/gym5.pory"
	case TYPE_FAIRY, Common_EventScript_StartGym5Fight_17
# 21 "data/scripts/important_fights/gym5.pory"
	case TYPE_STEEL, Common_EventScript_StartGym5Fight_18
# 22 "data/scripts/important_fights/gym5.pory"
	case TYPE_BUG, Common_EventScript_StartGym5Fight_19
# 23 "data/scripts/important_fights/gym5.pory"
	call normalFightGym5
	return

Common_EventScript_StartGym5Fight_2:
# 5 "data/scripts/important_fights/gym5.pory"
	call normalFightGym5
	return

Common_EventScript_StartGym5Fight_3:
# 6 "data/scripts/important_fights/gym5.pory"
	call rockFightGym5
	return

Common_EventScript_StartGym5Fight_4:
# 7 "data/scripts/important_fights/gym5.pory"
	call electricFightGym5
	return

Common_EventScript_StartGym5Fight_5:
# 8 "data/scripts/important_fights/gym5.pory"
	call fightingFightGym5
	return

Common_EventScript_StartGym5Fight_6:
# 9 "data/scripts/important_fights/gym5.pory"
	call psychicFightGym5
	return

Common_EventScript_StartGym5Fight_7:
# 10 "data/scripts/important_fights/gym5.pory"
	call fireFightGym5
	return

Common_EventScript_StartGym5Fight_8:
# 11 "data/scripts/important_fights/gym5.pory"
	call flyingFightGym5
	return

Common_EventScript_StartGym5Fight_9:
# 12 "data/scripts/important_fights/gym5.pory"
	call waterFightGym5
	return

Common_EventScript_StartGym5Fight_10:
# 13 "data/scripts/important_fights/gym5.pory"
	call darkFightGym5
	return

Common_EventScript_StartGym5Fight_11:
# 14 "data/scripts/important_fights/gym5.pory"
	call ghostFightGym5
	return

Common_EventScript_StartGym5Fight_12:
# 15 "data/scripts/important_fights/gym5.pory"
	call iceFightGym5
	return

Common_EventScript_StartGym5Fight_13:
# 16 "data/scripts/important_fights/gym5.pory"
	call dragonFightGym5
	return

Common_EventScript_StartGym5Fight_14:
# 17 "data/scripts/important_fights/gym5.pory"
	call poisonFightGym5
	return

Common_EventScript_StartGym5Fight_15:
# 18 "data/scripts/important_fights/gym5.pory"
	call groundFightGym5
	return

Common_EventScript_StartGym5Fight_16:
# 19 "data/scripts/important_fights/gym5.pory"
	call grassFightGym5
	return

Common_EventScript_StartGym5Fight_17:
# 20 "data/scripts/important_fights/gym5.pory"
	call fairyFightGym5
	return

Common_EventScript_StartGym5Fight_18:
# 21 "data/scripts/important_fights/gym5.pory"
	call steelFightGym5
	return

Common_EventScript_StartGym5Fight_19:
# 22 "data/scripts/important_fights/gym5.pory"
	call bugFightGym5
	return


normalFightGym5:
# 28 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/gym5.pory"
	case 0, normalFightGym5_2
# 33 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_5, NormanIntroGym, NormanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

normalFightGym5_2:
# 31 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_NORMAN_GYM_5, NormanIntroGym, NormanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


rockFightGym5:
# 38 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/gym5.pory"
	case 0, rockFightGym5_2
# 43 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_5, RoxanneIntroGym, RoxanneGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

rockFightGym5_2:
# 41 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_ROXANNE_GYM_5, RoxanneIntroGym, RoxanneGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


electricFightGym5:
# 48 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/gym5.pory"
	case 0, electricFightGym5_2
# 53 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_5, WattsonIntroGym, WattsonGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

electricFightGym5_2:
# 51 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_WATTSON_GYM_5, WattsonIntroGym, WattsonGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fightingFightGym5:
# 58 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/gym5.pory"
	case 0, fightingFightGym5_2
# 63 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_5, BrawlyIntroGym, BrawlyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fightingFightGym5_2:
# 61 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_5, BrawlyIntroGym, BrawlyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


psychicFightGym5:
# 68 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/gym5.pory"
	case 0, psychicFightGym5_2
# 73 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_TATE_GYM_5, TateIntroGym, TateGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

psychicFightGym5_2:
# 71 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_TATE_GYM_5, TateIntroGym, TateGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fireFightGym5:
# 78 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/gym5.pory"
	case 0, fireFightGym5_2
# 83 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_5, FlanneryIntroGym, FlanneryGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fireFightGym5_2:
# 81 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_FLANNERY_GYM_5, FlanneryIntroGym, FlanneryGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


flyingFightGym5:
# 88 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/gym5.pory"
	case 0, flyingFightGym5_2
# 93 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_WINONA_GYM_5, WinonaIntroGym, WinonaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

flyingFightGym5_2:
# 91 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_WINONA_GYM_5, WinonaIntroGym, WinonaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


waterFightGym5:
# 98 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/gym5.pory"
	case 0, waterFightGym5_2
# 103 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_JUAN_GYM_5, JuanIntroGym, JuanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

waterFightGym5_2:
# 101 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_JUAN_GYM_5, JuanIntroGym, JuanGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


darkFightGym5:
# 108 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/gym5.pory"
	case 0, darkFightGym5_2
# 113 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_5, SidneyIntroGym, SidneyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

darkFightGym5_2:
# 111 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_SIDNEY_GYM_5, SidneyIntroGym, SidneyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


ghostFightGym5:
# 118 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/gym5.pory"
	case 0, ghostFightGym5_2
# 123 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_5, PhoebeIntroGym, PhoebeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

ghostFightGym5_2:
# 121 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_PHOEBE_GYM_5, PhoebeIntroGym, PhoebeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


iceFightGym5:
# 128 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/gym5.pory"
	case 0, iceFightGym5_2
# 133 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_5, GlaciaIntroGym, GlaciaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

iceFightGym5_2:
# 131 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_GLACIA_GYM_5, GlaciaIntroGym, GlaciaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


dragonFightGym5:
# 138 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/gym5.pory"
	case 0, dragonFightGym5_2
# 143 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_5, DrakeIntroGym, DrakeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

dragonFightGym5_2:
# 141 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_DRAKE_GYM_5, DrakeIntroGym, DrakeGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


poisonFightGym5:
# 148 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/gym5.pory"
	case 0, poisonFightGym5_2
# 153 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_KOGA_GYM_5, KogaIntroGym, KogaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

poisonFightGym5_2:
# 151 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_KOGA_GYM_5, KogaIntroGym, KogaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


groundFightGym5:
# 158 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/gym5.pory"
	case 0, groundFightGym5_2
# 163 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_5, GiovanniIntroGym, GiovanniGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

groundFightGym5_2:
# 161 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_GIOVANNI_GYM_5, GiovanniIntroGym, GiovanniGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


grassFightGym5:
# 168 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/gym5.pory"
	case 0, grassFightGym5_2
# 173 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_5, ErikaIntroGym, ErikaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

grassFightGym5_2:
# 171 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_ERIKA_GYM_5, ErikaIntroGym, ErikaGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


fairyFightGym5:
# 178 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/gym5.pory"
	case 0, fairyFightGym5_2
# 183 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_5, ValerieIntroGym, ValerieGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

fairyFightGym5_2:
# 181 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_VALERIE_GYM_5, ValerieIntroGym, ValerieGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


steelFightGym5:
# 188 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/gym5.pory"
	case 0, steelFightGym5_2
# 193 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_5, StevenIntroGym, StevenGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

steelFightGym5_2:
# 191 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_STEVEN_GYM_5, StevenIntroGym, StevenGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return


bugFightGym5:
# 198 "data/scripts/important_fights/gym5.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/gym5.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/gym5.pory"
	case 0, bugFightGym5_2
# 203 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_5, BugsyIntroGym, BugsyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

bugFightGym5_2:
# 201 "data/scripts/important_fights/gym5.pory"
	trainerbattle_single TRAINER_BUGSY_GYM_5, BugsyIntroGym, BugsyGymDefeat, PetalburgCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	return

