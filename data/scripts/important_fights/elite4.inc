Common_EventScript_StartElite4Fight::
# 3 "data/scripts/important_fights/elite4.pory"
	getImportantFightType VAR_0x8003
# 4 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 5 "data/scripts/important_fights/elite4.pory"
	case TYPE_NORMAL, Common_EventScript_StartElite4Fight_2
# 6 "data/scripts/important_fights/elite4.pory"
	case TYPE_ROCK, Common_EventScript_StartElite4Fight_3
# 7 "data/scripts/important_fights/elite4.pory"
	case TYPE_ELECTRIC, Common_EventScript_StartElite4Fight_4
# 8 "data/scripts/important_fights/elite4.pory"
	case TYPE_FIGHTING, Common_EventScript_StartElite4Fight_5
# 9 "data/scripts/important_fights/elite4.pory"
	case TYPE_PSYCHIC, Common_EventScript_StartElite4Fight_6
# 10 "data/scripts/important_fights/elite4.pory"
	case TYPE_FIRE, Common_EventScript_StartElite4Fight_7
# 11 "data/scripts/important_fights/elite4.pory"
	case TYPE_FLYING, Common_EventScript_StartElite4Fight_8
# 12 "data/scripts/important_fights/elite4.pory"
	case TYPE_WATER, Common_EventScript_StartElite4Fight_9
# 13 "data/scripts/important_fights/elite4.pory"
	case TYPE_DARK, Common_EventScript_StartElite4Fight_10
# 14 "data/scripts/important_fights/elite4.pory"
	case TYPE_GHOST, Common_EventScript_StartElite4Fight_11
# 15 "data/scripts/important_fights/elite4.pory"
	case TYPE_ICE, Common_EventScript_StartElite4Fight_12
# 16 "data/scripts/important_fights/elite4.pory"
	case TYPE_DRAGON, Common_EventScript_StartElite4Fight_13
# 17 "data/scripts/important_fights/elite4.pory"
	case TYPE_POISON, Common_EventScript_StartElite4Fight_14
# 18 "data/scripts/important_fights/elite4.pory"
	case TYPE_GROUND, Common_EventScript_StartElite4Fight_15
# 19 "data/scripts/important_fights/elite4.pory"
	case TYPE_GRASS, Common_EventScript_StartElite4Fight_16
# 20 "data/scripts/important_fights/elite4.pory"
	case TYPE_FAIRY, Common_EventScript_StartElite4Fight_17
# 21 "data/scripts/important_fights/elite4.pory"
	case TYPE_STEEL, Common_EventScript_StartElite4Fight_18
# 22 "data/scripts/important_fights/elite4.pory"
	case TYPE_BUG, Common_EventScript_StartElite4Fight_19
# 23 "data/scripts/important_fights/elite4.pory"
	call normalFightElite4
	return

Common_EventScript_StartElite4Fight_2:
# 5 "data/scripts/important_fights/elite4.pory"
	call normalFightElite4
	return

Common_EventScript_StartElite4Fight_3:
# 6 "data/scripts/important_fights/elite4.pory"
	call rockFightElite4
	return

Common_EventScript_StartElite4Fight_4:
# 7 "data/scripts/important_fights/elite4.pory"
	call electricFightElite4
	return

Common_EventScript_StartElite4Fight_5:
# 8 "data/scripts/important_fights/elite4.pory"
	call fightingFightElite4
	return

Common_EventScript_StartElite4Fight_6:
# 9 "data/scripts/important_fights/elite4.pory"
	call psychicFightElite4
	return

Common_EventScript_StartElite4Fight_7:
# 10 "data/scripts/important_fights/elite4.pory"
	call fireFightElite4
	return

Common_EventScript_StartElite4Fight_8:
# 11 "data/scripts/important_fights/elite4.pory"
	call flyingFightElite4
	return

Common_EventScript_StartElite4Fight_9:
# 12 "data/scripts/important_fights/elite4.pory"
	call waterFightElite4
	return

Common_EventScript_StartElite4Fight_10:
# 13 "data/scripts/important_fights/elite4.pory"
	call darkFightElite4
	return

Common_EventScript_StartElite4Fight_11:
# 14 "data/scripts/important_fights/elite4.pory"
	call ghostFightElite4
	return

Common_EventScript_StartElite4Fight_12:
# 15 "data/scripts/important_fights/elite4.pory"
	call iceFightElite4
	return

Common_EventScript_StartElite4Fight_13:
# 16 "data/scripts/important_fights/elite4.pory"
	call dragonFightElite4
	return

Common_EventScript_StartElite4Fight_14:
# 17 "data/scripts/important_fights/elite4.pory"
	call poisonFightElite4
	return

Common_EventScript_StartElite4Fight_15:
# 18 "data/scripts/important_fights/elite4.pory"
	call groundFightElite4
	return

Common_EventScript_StartElite4Fight_16:
# 19 "data/scripts/important_fights/elite4.pory"
	call grassFightElite4
	return

Common_EventScript_StartElite4Fight_17:
# 20 "data/scripts/important_fights/elite4.pory"
	call fairyFightElite4
	return

Common_EventScript_StartElite4Fight_18:
# 21 "data/scripts/important_fights/elite4.pory"
	call steelFightElite4
	return

Common_EventScript_StartElite4Fight_19:
# 22 "data/scripts/important_fights/elite4.pory"
	call bugFightElite4
	return


normalFightElite4:
# 28 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 29 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 30 "data/scripts/important_fights/elite4.pory"
	case 0, normalFightElite4_2
# 33 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_NORMAN_ELITE_4, NormanElite4Defeat
	return

normalFightElite4_2:
# 31 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_NORMAN_ELITE_4, NormanElite4Defeat
	return


rockFightElite4:
# 38 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 39 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 40 "data/scripts/important_fights/elite4.pory"
	case 0, rockFightElite4_2
# 43 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_ELITE_4, RoxanneElite4Defeat
	return

rockFightElite4_2:
# 41 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_ELITE_4, RoxanneElite4Defeat
	return


electricFightElite4:
# 48 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 49 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 50 "data/scripts/important_fights/elite4.pory"
	case 0, electricFightElite4_2
# 53 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_WATTSON_ELITE_4, WattsonElite4Defeat
	return

electricFightElite4_2:
# 51 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_WATTSON_ELITE_4, WattsonElite4Defeat
	return


fightingFightElite4:
# 58 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 59 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 60 "data/scripts/important_fights/elite4.pory"
	case 0, fightingFightElite4_2
# 63 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_ELITE_4, BrawlyElite4Defeat
	return

fightingFightElite4_2:
# 61 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_ELITE_4, BrawlyElite4Defeat
	return


psychicFightElite4:
# 68 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 69 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 70 "data/scripts/important_fights/elite4.pory"
	case 0, psychicFightElite4_2
# 73 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_TATE_ELITE_4, TateElite4Defeat
	return

psychicFightElite4_2:
# 71 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_TATE_ELITE_4, TateElite4Defeat
	return


fireFightElite4:
# 78 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 79 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 80 "data/scripts/important_fights/elite4.pory"
	case 0, fireFightElite4_2
# 83 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_ELITE_4, FlanneryElite4Defeat
	return

fireFightElite4_2:
# 81 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_ELITE_4, FlanneryElite4Defeat
	return


flyingFightElite4:
# 88 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 89 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 90 "data/scripts/important_fights/elite4.pory"
	case 0, flyingFightElite4_2
# 93 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_WINONA_ELITE_4, WinonaElite4Defeat
	return

flyingFightElite4_2:
# 91 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_WINONA_ELITE_4, WinonaElite4Defeat
	return


waterFightElite4:
# 98 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 99 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 100 "data/scripts/important_fights/elite4.pory"
	case 0, waterFightElite4_2
# 103 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_JUAN_ELITE_4, JuanElite4Defeat
	return

waterFightElite4_2:
# 101 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_JUAN_ELITE_4, JuanElite4Defeat
	return


darkFightElite4:
# 108 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 109 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 110 "data/scripts/important_fights/elite4.pory"
	case 0, darkFightElite4_2
# 113 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_SIDNEY_ELITE_4, SidneyElite4Defeat
	return

darkFightElite4_2:
# 111 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_SIDNEY_ELITE_4, SidneyElite4Defeat
	return


ghostFightElite4:
# 118 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 119 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 120 "data/scripts/important_fights/elite4.pory"
	case 0, ghostFightElite4_2
# 123 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_PHOEBE_ELITE_4, PhoebeElite4Defeat
	return

ghostFightElite4_2:
# 121 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_PHOEBE_ELITE_4, PhoebeElite4Defeat
	return


iceFightElite4:
# 128 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 129 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 130 "data/scripts/important_fights/elite4.pory"
	case 0, iceFightElite4_2
# 133 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_GLACIA_ELITE_4, GlaciaElite4Defeat
	return

iceFightElite4_2:
# 131 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_GLACIA_ELITE_4, GlaciaElite4Defeat
	return


dragonFightElite4:
# 138 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 139 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 140 "data/scripts/important_fights/elite4.pory"
	case 0, dragonFightElite4_2
# 143 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_DRAKE_ELITE_4, DrakeElite4Defeat
	return

dragonFightElite4_2:
# 141 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_DRAKE_ELITE_4, DrakeElite4Defeat
	return


poisonFightElite4:
# 148 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 149 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 150 "data/scripts/important_fights/elite4.pory"
	case 0, poisonFightElite4_2
# 153 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_KOGA_ELITE_4, KogaElite4Defeat
	return

poisonFightElite4_2:
# 151 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_KOGA_ELITE_4, KogaElite4Defeat
	return


groundFightElite4:
# 158 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 159 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 160 "data/scripts/important_fights/elite4.pory"
	case 0, groundFightElite4_2
# 163 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_GIOVANNI_ELITE_4, GiovanniElite4Defeat
	return

groundFightElite4_2:
# 161 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_GIOVANNI_ELITE_4, GiovanniElite4Defeat
	return


grassFightElite4:
# 168 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 169 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 170 "data/scripts/important_fights/elite4.pory"
	case 0, grassFightElite4_2
# 173 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_ERIKA_ELITE_4, ErikaElite4Defeat
	return

grassFightElite4_2:
# 171 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_ERIKA_ELITE_4, ErikaElite4Defeat
	return


fairyFightElite4:
# 178 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 179 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 180 "data/scripts/important_fights/elite4.pory"
	case 0, fairyFightElite4_2
# 183 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_VALERIE_ELITE_4, ValerieElite4Defeat
	return

fairyFightElite4_2:
# 181 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_VALERIE_ELITE_4, ValerieElite4Defeat
	return


steelFightElite4:
# 188 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 189 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 190 "data/scripts/important_fights/elite4.pory"
	case 0, steelFightElite4_2
# 193 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_STEVEN_ELITE_4, StevenElite4Defeat
	return

steelFightElite4_2:
# 191 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_STEVEN_ELITE_4, StevenElite4Defeat
	return


bugFightElite4:
# 198 "data/scripts/important_fights/elite4.pory"
	getImportantFightSet VAR_0x8003
# 199 "data/scripts/important_fights/elite4.pory"
	switch VAR_RESULT
# 200 "data/scripts/important_fights/elite4.pory"
	case 0, bugFightElite4_2
# 203 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_BUGSY_ELITE_4, BugsyElite4Defeat
	return

bugFightElite4_2:
# 201 "data/scripts/important_fights/elite4.pory"
	trainerbattle_no_intro TRAINER_BUGSY_ELITE_4, BugsyElite4Defeat
	return

