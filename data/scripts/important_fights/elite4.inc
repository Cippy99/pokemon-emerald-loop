Common_EventScript_StartElite4Fight::
	getImportantFightType VAR_0x8003
	switch VAR_RESULT
	case TYPE_NORMAL, Common_EventScript_StartElite4Fight_2
	case TYPE_ROCK, Common_EventScript_StartElite4Fight_3
	case TYPE_ELECTRIC, Common_EventScript_StartElite4Fight_4
	case TYPE_FIGHTING, Common_EventScript_StartElite4Fight_5
	case TYPE_PSYCHIC, Common_EventScript_StartElite4Fight_6
	case TYPE_FIRE, Common_EventScript_StartElite4Fight_7
	case TYPE_FLYING, Common_EventScript_StartElite4Fight_8
	case TYPE_WATER, Common_EventScript_StartElite4Fight_9
	case TYPE_DARK, Common_EventScript_StartElite4Fight_10
	case TYPE_GHOST, Common_EventScript_StartElite4Fight_11
	case TYPE_ICE, Common_EventScript_StartElite4Fight_12
	case TYPE_DRAGON, Common_EventScript_StartElite4Fight_13
	case TYPE_POISON, Common_EventScript_StartElite4Fight_14
	case TYPE_GROUND, Common_EventScript_StartElite4Fight_15
	case TYPE_GRASS, Common_EventScript_StartElite4Fight_16
	case TYPE_FAIRY, Common_EventScript_StartElite4Fight_17
	case TYPE_STEEL, Common_EventScript_StartElite4Fight_18
	case TYPE_BUG, Common_EventScript_StartElite4Fight_19
	call normalFightElite4
	return

Common_EventScript_StartElite4Fight_2:
	call normalFightElite4
	return

Common_EventScript_StartElite4Fight_3:
	call rockFightElite4
	return

Common_EventScript_StartElite4Fight_4:
	call electricFightElite4
	return

Common_EventScript_StartElite4Fight_5:
	call fightingFightElite4
	return

Common_EventScript_StartElite4Fight_6:
	call psychicFightElite4
	return

Common_EventScript_StartElite4Fight_7:
	call fireFightElite4
	return

Common_EventScript_StartElite4Fight_8:
	call flyingFightElite4
	return

Common_EventScript_StartElite4Fight_9:
	call waterFightElite4
	return

Common_EventScript_StartElite4Fight_10:
	call darkFightElite4
	return

Common_EventScript_StartElite4Fight_11:
	call ghostFightElite4
	return

Common_EventScript_StartElite4Fight_12:
	call iceFightElite4
	return

Common_EventScript_StartElite4Fight_13:
	call dragonFightElite4
	return

Common_EventScript_StartElite4Fight_14:
	call poisonFightElite4
	return

Common_EventScript_StartElite4Fight_15:
	call groundFightElite4
	return

Common_EventScript_StartElite4Fight_16:
	call grassFightElite4
	return

Common_EventScript_StartElite4Fight_17:
	call fairyFightElite4
	return

Common_EventScript_StartElite4Fight_18:
	call steelFightElite4
	return

Common_EventScript_StartElite4Fight_19:
	call bugFightElite4
	return


normalFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, normalFightElite4_2
	trainerbattle_no_intro TRAINER_NORMAN_ELITE_4, NormanElite4Defeat
	return

normalFightElite4_2:
	trainerbattle_no_intro TRAINER_NORMAN_ELITE_4, NormanElite4Defeat
	return


rockFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, rockFightElite4_2
	trainerbattle_no_intro TRAINER_ROXANNE_ELITE_4, RoxanneElite4Defeat
	return

rockFightElite4_2:
	trainerbattle_no_intro TRAINER_ROXANNE_ELITE_4, RoxanneElite4Defeat
	return


electricFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, electricFightElite4_2
	trainerbattle_no_intro TRAINER_WATTSON_ELITE_4, WattsonElite4Defeat
	return

electricFightElite4_2:
	trainerbattle_no_intro TRAINER_WATTSON_ELITE_4, WattsonElite4Defeat
	return


fightingFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fightingFightElite4_2
	trainerbattle_no_intro TRAINER_BRAWLY_ELITE_4, BrawlyElite4Defeat
	return

fightingFightElite4_2:
	trainerbattle_no_intro TRAINER_BRAWLY_ELITE_4, BrawlyElite4Defeat
	return


psychicFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, psychicFightElite4_2
	trainerbattle_no_intro TRAINER_TATE_ELITE_4, TateElite4Defeat
	return

psychicFightElite4_2:
	trainerbattle_no_intro TRAINER_TATE_ELITE_4, TateElite4Defeat
	return


fireFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fireFightElite4_2
	trainerbattle_no_intro TRAINER_FLANNERY_ELITE_4, FlanneryElite4Defeat
	return

fireFightElite4_2:
	trainerbattle_no_intro TRAINER_FLANNERY_ELITE_4, FlanneryElite4Defeat
	return


flyingFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, flyingFightElite4_2
	trainerbattle_no_intro TRAINER_WINONA_ELITE_4, WinonaElite4Defeat
	return

flyingFightElite4_2:
	trainerbattle_no_intro TRAINER_WINONA_ELITE_4, WinonaElite4Defeat
	return


waterFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, waterFightElite4_2
	trainerbattle_no_intro TRAINER_JUAN_ELITE_4, JuanElite4Defeat
	return

waterFightElite4_2:
	trainerbattle_no_intro TRAINER_JUAN_ELITE_4, JuanElite4Defeat
	return


darkFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, darkFightElite4_2
	trainerbattle_no_intro TRAINER_SIDNEY_ELITE_4, SidneyElite4Defeat
	return

darkFightElite4_2:
	trainerbattle_no_intro TRAINER_SIDNEY_ELITE_4, SidneyElite4Defeat
	return


ghostFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, ghostFightElite4_2
	trainerbattle_no_intro TRAINER_PHOEBE_ELITE_4, PhoebeElite4Defeat
	return

ghostFightElite4_2:
	trainerbattle_no_intro TRAINER_PHOEBE_ELITE_4, PhoebeElite4Defeat
	return


iceFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, iceFightElite4_2
	trainerbattle_no_intro TRAINER_GLACIA_ELITE_4, GlaciaElite4Defeat
	return

iceFightElite4_2:
	trainerbattle_no_intro TRAINER_GLACIA_ELITE_4, GlaciaElite4Defeat
	return


dragonFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, dragonFightElite4_2
	trainerbattle_no_intro TRAINER_DRAKE_ELITE_4, DrakeElite4Defeat
	return

dragonFightElite4_2:
	trainerbattle_no_intro TRAINER_DRAKE_ELITE_4, DrakeElite4Defeat
	return


poisonFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, poisonFightElite4_2
	trainerbattle_no_intro TRAINER_KOGA_ELITE_4, KogaElite4Defeat
	return

poisonFightElite4_2:
	trainerbattle_no_intro TRAINER_KOGA_ELITE_4, KogaElite4Defeat
	return


groundFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, groundFightElite4_2
	trainerbattle_no_intro TRAINER_GIOVANNI_ELITE_4, GiovanniElite4Defeat
	return

groundFightElite4_2:
	trainerbattle_no_intro TRAINER_GIOVANNI_ELITE_4, GiovanniElite4Defeat
	return


grassFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, grassFightElite4_2
	trainerbattle_no_intro TRAINER_ERIKA_ELITE_4, ErikaElite4Defeat
	return

grassFightElite4_2:
	trainerbattle_no_intro TRAINER_ERIKA_ELITE_4, ErikaElite4Defeat
	return


fairyFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, fairyFightElite4_2
	trainerbattle_no_intro TRAINER_VALERIE_ELITE_4, ValerieElite4Defeat
	return

fairyFightElite4_2:
	trainerbattle_no_intro TRAINER_VALERIE_ELITE_4, ValerieElite4Defeat
	return


steelFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, steelFightElite4_2
	trainerbattle_no_intro TRAINER_STEVEN_ELITE_4, StevenElite4Defeat
	return

steelFightElite4_2:
	trainerbattle_no_intro TRAINER_STEVEN_ELITE_4, StevenElite4Defeat
	return


bugFightElite4:
	getImportantFightSet VAR_0x8003
	switch VAR_RESULT
	case 0, bugFightElite4_2
	trainerbattle_no_intro TRAINER_BUGSY_ELITE_4, BugsyElite4Defeat
	return

bugFightElite4_2:
	trainerbattle_no_intro TRAINER_BUGSY_ELITE_4, BugsyElite4Defeat
	return

