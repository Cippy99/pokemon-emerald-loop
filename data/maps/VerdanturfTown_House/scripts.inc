# 1 "data/maps/VerdanturfTown_House/scripts.pory"

# 2 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_MapScripts::
# 3 "data/maps/VerdanturfTown_House/scripts.pory"
	.byte 0

VerdanturfTown_House_EventScript_TutorPresentation::
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_TutorPresentation_Text_0
# 12 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_CheckPlayerHasShards
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorPresentation_2
# 18 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorChooseShard
VerdanturfTown_House_EventScript_TutorPresentation_1:
	end

VerdanturfTown_House_EventScript_TutorPresentation_2:
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorNoShard
	goto VerdanturfTown_House_EventScript_TutorPresentation_1


VerdanturfTown_House_EventScript_CheckPlayerHasShards::
# 24 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_TEMP_1, 0
# 25 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_RED_SHARD
# 26 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_2
VerdanturfTown_House_EventScript_CheckPlayerHasShards_1:
# 29 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 30 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_5
VerdanturfTown_House_EventScript_CheckPlayerHasShards_4:
# 33 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 34 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_8
VerdanturfTown_House_EventScript_CheckPlayerHasShards_7:
# 37 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 38 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_11
VerdanturfTown_House_EventScript_CheckPlayerHasShards_10:
	return

VerdanturfTown_House_EventScript_CheckPlayerHasShards_2:
# 27 "data/maps/VerdanturfTown_House/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_1

VerdanturfTown_House_EventScript_CheckPlayerHasShards_5:
# 31 "data/maps/VerdanturfTown_House/scripts.pory"
	addvar VAR_TEMP_1, 2
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_4

VerdanturfTown_House_EventScript_CheckPlayerHasShards_8:
# 35 "data/maps/VerdanturfTown_House/scripts.pory"
	addvar VAR_TEMP_1, 4
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_7

VerdanturfTown_House_EventScript_CheckPlayerHasShards_11:
# 39 "data/maps/VerdanturfTown_House/scripts.pory"
	addvar VAR_TEMP_1, 8
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_10


VerdanturfTown_House_EventScript_TutorNoShard::
# 46 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_TutorNoShard_Text_0
# 47 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_House_EventScript_TutorNoShardOfColor::
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_TutorNoShardOfColor_Text_0
# 53 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_House_EventScript_TutorChooseShard::
# 58 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_TutorChooseShard_Text_0
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorChooseShard_Text_1, VerdanturfTown_House_EventScript_TutorChooseShard_Text_2, VerdanturfTown_House_EventScript_TutorChooseShard_Text_3, VerdanturfTown_House_EventScript_TutorChooseShard_Text_4
# 62 "data/maps/VerdanturfTown_House/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/VerdanturfTown_House/scripts.pory"
	case 0, VerdanturfTown_House_EventScript_TutorChooseShard_2
# 65 "data/maps/VerdanturfTown_House/scripts.pory"
	case 1, VerdanturfTown_House_EventScript_TutorChooseShard_3
# 66 "data/maps/VerdanturfTown_House/scripts.pory"
	case 2, VerdanturfTown_House_EventScript_TutorChooseShard_4
# 67 "data/maps/VerdanturfTown_House/scripts.pory"
	case 3, VerdanturfTown_House_EventScript_TutorChooseShard_5
# 68 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return

VerdanturfTown_House_EventScript_TutorChooseShard_2:
# 64 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorRedShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_3:
# 65 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorYellowShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_4:
# 66 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorBlueShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_5:
# 67 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorGreenShard
	return


VerdanturfTown_House_EventScript_TutorRedShard::
# 74 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_RED_SHARD
# 75 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_House_EventScript_TutorRedShard_2
# 80 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_PleaseSelectMove
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorRedShard_Text_0, VerdanturfTown_House_EventScript_TutorRedShard_Text_1, VerdanturfTown_House_EventScript_TutorRedShard_Text_2, VerdanturfTown_House_EventScript_TutorRedShard_Text_3, VerdanturfTown_House_EventScript_TutorRedShard_Text_4, VerdanturfTown_House_EventScript_TutorRedShard_Text_5, VerdanturfTown_House_EventScript_TutorRedShard_Text_6, VerdanturfTown_House_EventScript_TutorRedShard_Text_7, VerdanturfTown_House_EventScript_TutorRedShard_Text_8, VerdanturfTown_House_EventScript_TutorRedShard_Text_9, VerdanturfTown_House_EventScript_TutorRedShard_Text_10, VerdanturfTown_House_EventScript_TutorRedShard_Text_11, VerdanturfTown_House_EventScript_TutorRedShard_Text_12, VerdanturfTown_House_EventScript_TutorRedShard_Text_13, VerdanturfTown_House_EventScript_TutorRedShard_Text_14, VerdanturfTown_House_EventScript_TutorRedShard_Text_15
# 86 "data/maps/VerdanturfTown_House/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/VerdanturfTown_House/scripts.pory"
	case 0, VerdanturfTown_House_EventScript_TutorRedShard_6
# 88 "data/maps/VerdanturfTown_House/scripts.pory"
	case 1, VerdanturfTown_House_EventScript_TutorRedShard_7
# 89 "data/maps/VerdanturfTown_House/scripts.pory"
	case 2, VerdanturfTown_House_EventScript_TutorRedShard_8
# 90 "data/maps/VerdanturfTown_House/scripts.pory"
	case 3, VerdanturfTown_House_EventScript_TutorRedShard_9
# 91 "data/maps/VerdanturfTown_House/scripts.pory"
	case 4, VerdanturfTown_House_EventScript_TutorRedShard_10
# 92 "data/maps/VerdanturfTown_House/scripts.pory"
	case 5, VerdanturfTown_House_EventScript_TutorRedShard_11
# 93 "data/maps/VerdanturfTown_House/scripts.pory"
	case 6, VerdanturfTown_House_EventScript_TutorRedShard_12
# 94 "data/maps/VerdanturfTown_House/scripts.pory"
	case 7, VerdanturfTown_House_EventScript_TutorRedShard_13
# 95 "data/maps/VerdanturfTown_House/scripts.pory"
	case 8, VerdanturfTown_House_EventScript_TutorRedShard_14
# 96 "data/maps/VerdanturfTown_House/scripts.pory"
	case 9, VerdanturfTown_House_EventScript_TutorRedShard_15
# 97 "data/maps/VerdanturfTown_House/scripts.pory"
	case 10, VerdanturfTown_House_EventScript_TutorRedShard_16
# 98 "data/maps/VerdanturfTown_House/scripts.pory"
	case 11, VerdanturfTown_House_EventScript_TutorRedShard_17
# 99 "data/maps/VerdanturfTown_House/scripts.pory"
	case 12, VerdanturfTown_House_EventScript_TutorRedShard_18
# 100 "data/maps/VerdanturfTown_House/scripts.pory"
	case 13, VerdanturfTown_House_EventScript_TutorRedShard_19
# 101 "data/maps/VerdanturfTown_House/scripts.pory"
	case 14, VerdanturfTown_House_EventScript_TutorRedShard_20
# 102 "data/maps/VerdanturfTown_House/scripts.pory"
	case 15, VerdanturfTown_House_EventScript_TutorRedShard_21
# 103 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
VerdanturfTown_House_EventScript_TutorRedShard_4:
# 106 "data/maps/VerdanturfTown_House/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 108 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorRedShard_23
# 112 "data/maps/VerdanturfTown_House/scripts.pory"
	removeitem ITEM_RED_SHARD
# 113 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorTaugthMove
	return

VerdanturfTown_House_EventScript_TutorRedShard_2:
# 76 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorNoShardOfColor
	end

VerdanturfTown_House_EventScript_TutorRedShard_6:
# 87 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_7:
# 88 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_8:
# 89 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_COVET
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_9:
# 90 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_10:
# 91 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_GASTRO_ACID
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_11:
# 92 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_12:
# 93 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_13:
# 94 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_14:
# 95 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_15:
# 96 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_16:
# 97 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_17:
# 98 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_18:
# 99 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_19:
# 100 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_20:
# 101 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_21:
# 102 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_WORK_UP
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_23:
# 109 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorYellowShard::
# 118 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 119 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_House_EventScript_TutorYellowShard_2
# 124 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_PleaseSelectMove
# 126 "data/maps/VerdanturfTown_House/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorYellowShard_Text_0, VerdanturfTown_House_EventScript_TutorYellowShard_Text_1, VerdanturfTown_House_EventScript_TutorYellowShard_Text_2, VerdanturfTown_House_EventScript_TutorYellowShard_Text_3, VerdanturfTown_House_EventScript_TutorYellowShard_Text_4, VerdanturfTown_House_EventScript_TutorYellowShard_Text_5, VerdanturfTown_House_EventScript_TutorYellowShard_Text_6, VerdanturfTown_House_EventScript_TutorYellowShard_Text_7, VerdanturfTown_House_EventScript_TutorYellowShard_Text_8, VerdanturfTown_House_EventScript_TutorYellowShard_Text_9, VerdanturfTown_House_EventScript_TutorYellowShard_Text_10, VerdanturfTown_House_EventScript_TutorYellowShard_Text_11, VerdanturfTown_House_EventScript_TutorYellowShard_Text_12, VerdanturfTown_House_EventScript_TutorYellowShard_Text_13, VerdanturfTown_House_EventScript_TutorYellowShard_Text_14, VerdanturfTown_House_EventScript_TutorYellowShard_Text_15
# 130 "data/maps/VerdanturfTown_House/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/VerdanturfTown_House/scripts.pory"
	case 0, VerdanturfTown_House_EventScript_TutorYellowShard_6
# 132 "data/maps/VerdanturfTown_House/scripts.pory"
	case 1, VerdanturfTown_House_EventScript_TutorYellowShard_7
# 133 "data/maps/VerdanturfTown_House/scripts.pory"
	case 2, VerdanturfTown_House_EventScript_TutorYellowShard_8
# 134 "data/maps/VerdanturfTown_House/scripts.pory"
	case 3, VerdanturfTown_House_EventScript_TutorYellowShard_9
# 135 "data/maps/VerdanturfTown_House/scripts.pory"
	case 4, VerdanturfTown_House_EventScript_TutorYellowShard_10
# 136 "data/maps/VerdanturfTown_House/scripts.pory"
	case 5, VerdanturfTown_House_EventScript_TutorYellowShard_11
# 137 "data/maps/VerdanturfTown_House/scripts.pory"
	case 6, VerdanturfTown_House_EventScript_TutorYellowShard_12
# 138 "data/maps/VerdanturfTown_House/scripts.pory"
	case 7, VerdanturfTown_House_EventScript_TutorYellowShard_13
# 139 "data/maps/VerdanturfTown_House/scripts.pory"
	case 8, VerdanturfTown_House_EventScript_TutorYellowShard_14
# 140 "data/maps/VerdanturfTown_House/scripts.pory"
	case 9, VerdanturfTown_House_EventScript_TutorYellowShard_15
# 141 "data/maps/VerdanturfTown_House/scripts.pory"
	case 10, VerdanturfTown_House_EventScript_TutorYellowShard_16
# 142 "data/maps/VerdanturfTown_House/scripts.pory"
	case 11, VerdanturfTown_House_EventScript_TutorYellowShard_17
# 143 "data/maps/VerdanturfTown_House/scripts.pory"
	case 12, VerdanturfTown_House_EventScript_TutorYellowShard_18
# 144 "data/maps/VerdanturfTown_House/scripts.pory"
	case 13, VerdanturfTown_House_EventScript_TutorYellowShard_19
# 145 "data/maps/VerdanturfTown_House/scripts.pory"
	case 14, VerdanturfTown_House_EventScript_TutorYellowShard_20
# 146 "data/maps/VerdanturfTown_House/scripts.pory"
	case 15, VerdanturfTown_House_EventScript_TutorYellowShard_21
# 147 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
VerdanturfTown_House_EventScript_TutorYellowShard_4:
# 150 "data/maps/VerdanturfTown_House/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 152 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorYellowShard_23
# 156 "data/maps/VerdanturfTown_House/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 157 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorTaugthMove
	return

VerdanturfTown_House_EventScript_TutorYellowShard_2:
# 120 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorNoShardOfColor
	end

VerdanturfTown_House_EventScript_TutorYellowShard_6:
# 131 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_7:
# 132 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_CROSS_POISON
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_8:
# 133 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_9:
# 134 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_10:
# 135 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_11:
# 136 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_12:
# 137 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_13:
# 138 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_14:
# 139 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_GEM
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_15:
# 140 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_16:
# 141 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_17:
# 142 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_18:
# 143 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SEED_BOMB
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_19:
# 144 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_20:
# 145 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_THROAT_CHOP
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_21:
# 146 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto VerdanturfTown_House_EventScript_TutorYellowShard_4

VerdanturfTown_House_EventScript_TutorYellowShard_23:
# 153 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorBlueShard::
# 162 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 163 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_House_EventScript_TutorBlueShard_2
# 168 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_PleaseSelectMove
# 170 "data/maps/VerdanturfTown_House/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorBlueShard_Text_0, VerdanturfTown_House_EventScript_TutorBlueShard_Text_1, VerdanturfTown_House_EventScript_TutorBlueShard_Text_2, VerdanturfTown_House_EventScript_TutorBlueShard_Text_3, VerdanturfTown_House_EventScript_TutorBlueShard_Text_4, VerdanturfTown_House_EventScript_TutorBlueShard_Text_5, VerdanturfTown_House_EventScript_TutorBlueShard_Text_6, VerdanturfTown_House_EventScript_TutorBlueShard_Text_7, VerdanturfTown_House_EventScript_TutorBlueShard_Text_8, VerdanturfTown_House_EventScript_TutorBlueShard_Text_9, VerdanturfTown_House_EventScript_TutorBlueShard_Text_10, VerdanturfTown_House_EventScript_TutorBlueShard_Text_11, VerdanturfTown_House_EventScript_TutorBlueShard_Text_12, VerdanturfTown_House_EventScript_TutorBlueShard_Text_13, VerdanturfTown_House_EventScript_TutorBlueShard_Text_14, VerdanturfTown_House_EventScript_TutorBlueShard_Text_15
# 174 "data/maps/VerdanturfTown_House/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/VerdanturfTown_House/scripts.pory"
	case 0, VerdanturfTown_House_EventScript_TutorBlueShard_6
# 176 "data/maps/VerdanturfTown_House/scripts.pory"
	case 1, VerdanturfTown_House_EventScript_TutorBlueShard_7
# 177 "data/maps/VerdanturfTown_House/scripts.pory"
	case 2, VerdanturfTown_House_EventScript_TutorBlueShard_8
# 178 "data/maps/VerdanturfTown_House/scripts.pory"
	case 3, VerdanturfTown_House_EventScript_TutorBlueShard_9
# 179 "data/maps/VerdanturfTown_House/scripts.pory"
	case 4, VerdanturfTown_House_EventScript_TutorBlueShard_10
# 180 "data/maps/VerdanturfTown_House/scripts.pory"
	case 5, VerdanturfTown_House_EventScript_TutorBlueShard_11
# 181 "data/maps/VerdanturfTown_House/scripts.pory"
	case 6, VerdanturfTown_House_EventScript_TutorBlueShard_12
# 182 "data/maps/VerdanturfTown_House/scripts.pory"
	case 7, VerdanturfTown_House_EventScript_TutorBlueShard_13
# 183 "data/maps/VerdanturfTown_House/scripts.pory"
	case 8, VerdanturfTown_House_EventScript_TutorBlueShard_14
# 184 "data/maps/VerdanturfTown_House/scripts.pory"
	case 9, VerdanturfTown_House_EventScript_TutorBlueShard_15
# 185 "data/maps/VerdanturfTown_House/scripts.pory"
	case 10, VerdanturfTown_House_EventScript_TutorBlueShard_16
# 186 "data/maps/VerdanturfTown_House/scripts.pory"
	case 11, VerdanturfTown_House_EventScript_TutorBlueShard_17
# 187 "data/maps/VerdanturfTown_House/scripts.pory"
	case 12, VerdanturfTown_House_EventScript_TutorBlueShard_18
# 188 "data/maps/VerdanturfTown_House/scripts.pory"
	case 13, VerdanturfTown_House_EventScript_TutorBlueShard_19
# 189 "data/maps/VerdanturfTown_House/scripts.pory"
	case 14, VerdanturfTown_House_EventScript_TutorBlueShard_20
# 190 "data/maps/VerdanturfTown_House/scripts.pory"
	case 15, VerdanturfTown_House_EventScript_TutorBlueShard_21
# 191 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
VerdanturfTown_House_EventScript_TutorBlueShard_4:
# 194 "data/maps/VerdanturfTown_House/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 196 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorBlueShard_23
# 200 "data/maps/VerdanturfTown_House/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 201 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorTaugthMove
	return

VerdanturfTown_House_EventScript_TutorBlueShard_2:
# 164 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorNoShardOfColor
	end

VerdanturfTown_House_EventScript_TutorBlueShard_6:
# 175 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_7:
# 176 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_8:
# 177 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_9:
# 178 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_CHILLING_WATER
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_10:
# 179 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_11:
# 180 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_EARTH_POWER
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_12:
# 181 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_13:
# 182 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_SPINNER
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_14:
# 183 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_15:
# 184 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_16:
# 185 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_17:
# 186 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_18:
# 187 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_REVENGE
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_19:
# 188 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_20:
# 189 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SKITTER_SMACK
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_21:
# 190 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
	goto VerdanturfTown_House_EventScript_TutorBlueShard_4

VerdanturfTown_House_EventScript_TutorBlueShard_23:
# 197 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorGreenShard::
# 206 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 207 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_House_EventScript_TutorGreenShard_2
# 212 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_PleaseSelectMove
# 214 "data/maps/VerdanturfTown_House/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorGreenShard_Text_0, VerdanturfTown_House_EventScript_TutorGreenShard_Text_1, VerdanturfTown_House_EventScript_TutorGreenShard_Text_2, VerdanturfTown_House_EventScript_TutorGreenShard_Text_3, VerdanturfTown_House_EventScript_TutorGreenShard_Text_4, VerdanturfTown_House_EventScript_TutorGreenShard_Text_5, VerdanturfTown_House_EventScript_TutorGreenShard_Text_6, VerdanturfTown_House_EventScript_TutorGreenShard_Text_7, VerdanturfTown_House_EventScript_TutorGreenShard_Text_8, VerdanturfTown_House_EventScript_TutorGreenShard_Text_9, VerdanturfTown_House_EventScript_TutorGreenShard_Text_10, VerdanturfTown_House_EventScript_TutorGreenShard_Text_11, VerdanturfTown_House_EventScript_TutorGreenShard_Text_12, VerdanturfTown_House_EventScript_TutorGreenShard_Text_13, VerdanturfTown_House_EventScript_TutorGreenShard_Text_14, VerdanturfTown_House_EventScript_TutorGreenShard_Text_15
# 218 "data/maps/VerdanturfTown_House/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/VerdanturfTown_House/scripts.pory"
	case 0, VerdanturfTown_House_EventScript_TutorGreenShard_6
# 220 "data/maps/VerdanturfTown_House/scripts.pory"
	case 1, VerdanturfTown_House_EventScript_TutorGreenShard_7
# 221 "data/maps/VerdanturfTown_House/scripts.pory"
	case 2, VerdanturfTown_House_EventScript_TutorGreenShard_8
# 222 "data/maps/VerdanturfTown_House/scripts.pory"
	case 3, VerdanturfTown_House_EventScript_TutorGreenShard_9
# 223 "data/maps/VerdanturfTown_House/scripts.pory"
	case 4, VerdanturfTown_House_EventScript_TutorGreenShard_10
# 224 "data/maps/VerdanturfTown_House/scripts.pory"
	case 5, VerdanturfTown_House_EventScript_TutorGreenShard_11
# 225 "data/maps/VerdanturfTown_House/scripts.pory"
	case 6, VerdanturfTown_House_EventScript_TutorGreenShard_12
# 226 "data/maps/VerdanturfTown_House/scripts.pory"
	case 7, VerdanturfTown_House_EventScript_TutorGreenShard_13
# 227 "data/maps/VerdanturfTown_House/scripts.pory"
	case 8, VerdanturfTown_House_EventScript_TutorGreenShard_14
# 228 "data/maps/VerdanturfTown_House/scripts.pory"
	case 9, VerdanturfTown_House_EventScript_TutorGreenShard_15
# 229 "data/maps/VerdanturfTown_House/scripts.pory"
	case 10, VerdanturfTown_House_EventScript_TutorGreenShard_16
# 230 "data/maps/VerdanturfTown_House/scripts.pory"
	case 11, VerdanturfTown_House_EventScript_TutorGreenShard_17
# 231 "data/maps/VerdanturfTown_House/scripts.pory"
	case 12, VerdanturfTown_House_EventScript_TutorGreenShard_18
# 232 "data/maps/VerdanturfTown_House/scripts.pory"
	case 13, VerdanturfTown_House_EventScript_TutorGreenShard_19
# 233 "data/maps/VerdanturfTown_House/scripts.pory"
	case 14, VerdanturfTown_House_EventScript_TutorGreenShard_20
# 234 "data/maps/VerdanturfTown_House/scripts.pory"
	case 15, VerdanturfTown_House_EventScript_TutorGreenShard_21
# 235 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
VerdanturfTown_House_EventScript_TutorGreenShard_4:
# 238 "data/maps/VerdanturfTown_House/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 240 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorGreenShard_23
# 244 "data/maps/VerdanturfTown_House/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 245 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorTaugthMove
	return

VerdanturfTown_House_EventScript_TutorGreenShard_2:
# 208 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorNoShardOfColor
	end

VerdanturfTown_House_EventScript_TutorGreenShard_6:
# 219 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_7:
# 220 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAIN_PUNCH
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_8:
# 221 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_9:
# 222 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_10:
# 223 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_11:
# 224 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_FOUL_PLAY
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_12:
# 225 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_13:
# 226 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_WAVE
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_14:
# 227 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_LIQUIDATION
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_15:
# 228 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_16:
# 229 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_17:
# 230 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_18:
# 231 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_19:
# 232 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_STOMPING_TANTRUM
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_20:
# 233 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPERPOWER
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_21:
# 234 "data/maps/VerdanturfTown_House/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
	goto VerdanturfTown_House_EventScript_TutorGreenShard_4

VerdanturfTown_House_EventScript_TutorGreenShard_23:
# 241 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorEnd::
# 251 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_House_EventScript_PleaseSelectMove::
# 255 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_PleaseSelectMove_Text_0
	return


VerdanturfTown_House_EventScript_TutorTaugthMove::
# 261 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_TutorTaugthMove_Text_0
# 262 "data/maps/VerdanturfTown_House/scripts.pory"
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorPresentation_Text_0:
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I'm the move tutor. I can teach your\n"
	.string "Pokèmon powerful moves if you bring me\l"
	.string "a shard.$"

VerdanturfTown_House_EventScript_TutorNoShard_Text_0:
# 46 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I'm sorry, but it seems you don't have\n"
	.string "any shard with you. Come back when\l"
	.string "you'll find some.$"

VerdanturfTown_House_EventScript_TutorNoShardOfColor_Text_0:
# 52 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "You don't seem to have any shard of\n"
	.string "that color. Come back when you'll find\l"
	.string "some.$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_0:
# 58 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Which shard do you want to give me?$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_1:
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "RED$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_2:
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "YELLOW$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_3:
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "BLUE$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_4:
# 60 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "GREEN$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_0:
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Agility$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_1:
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Bug Bite$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_2:
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Covet$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_3:
# 82 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Fire Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_4:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Gastro Acid$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_5:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Ice Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_6:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Magical Leaf$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_7:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Metal Claw$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_8:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Ominous Wind$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_9:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Poison Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_10:
# 83 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Silver Wind$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_11:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Super Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_12:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Swift$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_13:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Taunt$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_14:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Thunder Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_15:
# 84 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Work Up$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_0:
# 126 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Breaking Swipe$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_1:
# 126 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Cross Poison$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_2:
# 126 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Electroweb$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_3:
# 126 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Fire Punch$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_4:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Ice Punch$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_5:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Icy Wind$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_6:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Iron Head$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_7:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Pounce$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_8:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Power Gem$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_9:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Psychic Fangs$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_10:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Razor Shell$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_11:
# 127 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Scorching Sands$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_12:
# 128 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Seed Bomb$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_13:
# 128 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Signal Beam$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_14:
# 128 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Throat Chop$"

VerdanturfTown_House_EventScript_TutorYellowShard_Text_15:
# 128 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Thunder Punch$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_0:
# 170 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Aqua Tail$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_1:
# 170 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Blaze Kick$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_2:
# 170 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Bounce$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_3:
# 170 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Chilling Water$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_4:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Drill Run$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_5:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Earth Power$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_6:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Hyper Voice$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_7:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Ice Spinner$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_8:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Icicle Spear$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_9:
# 171 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Iron Tail$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_10:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Knock Off$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_11:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Mystical Fire$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_12:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Revenge$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_13:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Rock Blast$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_14:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Skitter Smack$"

VerdanturfTown_House_EventScript_TutorBlueShard_Text_15:
# 172 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Trailblaze$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_0:
# 214 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Body Press$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_1:
# 214 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Drain Punch$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_2:
# 214 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Dual Wingbeat$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_3:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Expanding Force$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_4:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Flip Turn$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_5:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Foul Play$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_6:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Gunk Shot$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_7:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Heat Wave$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_8:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Liquidation$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_9:
# 215 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Outrage$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_10:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Phantom Force$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_11:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Pollen Puff$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_12:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Rising Voltage$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_13:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Stomping Tantrum$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_14:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Superpower$"

VerdanturfTown_House_EventScript_TutorGreenShard_Text_15:
# 216 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Triple Axel$"

VerdanturfTown_House_EventScript_PleaseSelectMove_Text_0:
# 255 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Please select a move from the list.$"

VerdanturfTown_House_EventScript_TutorTaugthMove_Text_0:
# 261 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "All done! Your Pokèmon learned a new\n"
	.string "move. Come back soon.$"
