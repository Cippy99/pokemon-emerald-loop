VerdanturfTown_House_MapScripts::
	.byte 0

VerdanturfTown_House_EventScript_TutorPresentation::
	lock
	faceplayer
	msgbox VerdanturfTown_House_EventScript_TutorPresentation_Text_0
	call VerdanturfTown_House_EventScript_CheckPlayerHasShards
	compare VAR_TEMP_1, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorPresentation_2
	call VerdanturfTown_House_EventScript_TutorChooseShard
VerdanturfTown_House_EventScript_TutorPresentation_1:
	end

VerdanturfTown_House_EventScript_TutorPresentation_2:
	call VerdanturfTown_House_EventScript_TutorNoShard
	goto VerdanturfTown_House_EventScript_TutorPresentation_1


VerdanturfTown_House_EventScript_CheckPlayerHasShards::
	setvar VAR_TEMP_1, 0
	checkitem ITEM_RED_SHARD
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_2
VerdanturfTown_House_EventScript_CheckPlayerHasShards_1:
	checkitem ITEM_YELLOW_SHARD
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_5
VerdanturfTown_House_EventScript_CheckPlayerHasShards_4:
	checkitem ITEM_BLUE_SHARD
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_8
VerdanturfTown_House_EventScript_CheckPlayerHasShards_7:
	checkitem ITEM_GREEN_SHARD
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_House_EventScript_CheckPlayerHasShards_11
VerdanturfTown_House_EventScript_CheckPlayerHasShards_10:
	return

VerdanturfTown_House_EventScript_CheckPlayerHasShards_2:
	addvar VAR_TEMP_1, 1
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_1

VerdanturfTown_House_EventScript_CheckPlayerHasShards_5:
	addvar VAR_TEMP_1, 2
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_4

VerdanturfTown_House_EventScript_CheckPlayerHasShards_8:
	addvar VAR_TEMP_1, 4
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_7

VerdanturfTown_House_EventScript_CheckPlayerHasShards_11:
	addvar VAR_TEMP_1, 8
	goto VerdanturfTown_House_EventScript_CheckPlayerHasShards_10


VerdanturfTown_House_EventScript_TutorNoShard::
	msgbox VerdanturfTown_House_EventScript_TutorNoShard_Text_0
	release
	end


VerdanturfTown_House_EventScript_TutorNoShardOfColor::
	msgbox VerdanturfTown_House_EventScript_TutorNoShardOfColor_Text_0
	release
	end


VerdanturfTown_House_EventScript_TutorChooseShard::
	msgbox VerdanturfTown_House_EventScript_TutorChooseShard_Text_0
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorChooseShard_Text_1, VerdanturfTown_House_EventScript_TutorChooseShard_Text_2, VerdanturfTown_House_EventScript_TutorChooseShard_Text_3, VerdanturfTown_House_EventScript_TutorChooseShard_Text_4
	switch VAR_RESULT
	case 1, VerdanturfTown_House_EventScript_TutorChooseShard_2
	case 2, VerdanturfTown_House_EventScript_TutorChooseShard_3
	case 3, VerdanturfTown_House_EventScript_TutorChooseShard_4
	case 4, VerdanturfTown_House_EventScript_TutorChooseShard_5
	call VerdanturfTown_House_EventScript_TutorEnd
	return

VerdanturfTown_House_EventScript_TutorChooseShard_2:
	call VerdanturfTown_House_EventScript_TutorRedShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_3:
	call VerdanturfTown_House_EventScript_TutorRedShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_4:
	call VerdanturfTown_House_EventScript_TutorRedShard
	return

VerdanturfTown_House_EventScript_TutorChooseShard_5:
	call VerdanturfTown_House_EventScript_TutorRedShard
	return


VerdanturfTown_House_EventScript_TutorRedShard::
	checkitem ITEM_RED_SHARD
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_House_EventScript_TutorRedShard_2
	dynmultichoice 0, 0, FALSE, 8, 0, DYN_MULTICHOICE_CB_NONE, VerdanturfTown_House_EventScript_TutorRedShard_Text_0, VerdanturfTown_House_EventScript_TutorRedShard_Text_1, VerdanturfTown_House_EventScript_TutorRedShard_Text_2, VerdanturfTown_House_EventScript_TutorRedShard_Text_3, VerdanturfTown_House_EventScript_TutorRedShard_Text_4, VerdanturfTown_House_EventScript_TutorRedShard_Text_5, VerdanturfTown_House_EventScript_TutorRedShard_Text_6, VerdanturfTown_House_EventScript_TutorRedShard_Text_7, VerdanturfTown_House_EventScript_TutorRedShard_Text_8, VerdanturfTown_House_EventScript_TutorRedShard_Text_9, VerdanturfTown_House_EventScript_TutorRedShard_Text_10, VerdanturfTown_House_EventScript_TutorRedShard_Text_11, VerdanturfTown_House_EventScript_TutorRedShard_Text_12, VerdanturfTown_House_EventScript_TutorRedShard_Text_13, VerdanturfTown_House_EventScript_TutorRedShard_Text_14
	switch VAR_RESULT
	case 1, VerdanturfTown_House_EventScript_TutorRedShard_6
	case 2, VerdanturfTown_House_EventScript_TutorRedShard_7
	case 3, VerdanturfTown_House_EventScript_TutorRedShard_8
	case 4, VerdanturfTown_House_EventScript_TutorRedShard_9
	case 5, VerdanturfTown_House_EventScript_TutorRedShard_10
	case 6, VerdanturfTown_House_EventScript_TutorRedShard_11
	case 7, VerdanturfTown_House_EventScript_TutorRedShard_12
	case 8, VerdanturfTown_House_EventScript_TutorRedShard_13
	case 9, VerdanturfTown_House_EventScript_TutorRedShard_14
	case 10, VerdanturfTown_House_EventScript_TutorRedShard_15
	case 11, VerdanturfTown_House_EventScript_TutorRedShard_16
	case 12, VerdanturfTown_House_EventScript_TutorRedShard_17
	case 13, VerdanturfTown_House_EventScript_TutorRedShard_18
	case 14, VerdanturfTown_House_EventScript_TutorRedShard_19
	case 15, VerdanturfTown_House_EventScript_TutorRedShard_20
	case 16, VerdanturfTown_House_EventScript_TutorRedShard_21
VerdanturfTown_House_EventScript_TutorRedShard_4:
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_House_EventScript_TutorRedShard_22
	call VerdanturfTown_House_EventScript_TutorTaugthMove
	return

VerdanturfTown_House_EventScript_TutorRedShard_2:
	call VerdanturfTown_House_EventScript_TutorNoShardOfColor
	end

VerdanturfTown_House_EventScript_TutorRedShard_6:
	setvar VAR_0x8005, MOVE_AGILITY
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_7:
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_8:
	setvar VAR_0x8005, MOVE_COVET
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_9:
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_10:
	setvar VAR_0x8005, MOVE_GASTRO_ACID
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_11:
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_12:
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_13:
	setvar VAR_0x8005, MOVE_METAL_CLAW
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_14:
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_15:
	setvar VAR_0x8005, MOVE_POISON_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_16:
	setvar VAR_0x8005, MOVE_SILVER_WIND
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_17:
	setvar VAR_0x8005, MOVE_SUPER_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_18:
	setvar VAR_0x8005, MOVE_SWIFT
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_19:
	setvar VAR_0x8005, MOVE_TAUNT
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_20:
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_21:
	setvar VAR_0x8005, MOVE_WORK_UP
	goto VerdanturfTown_House_EventScript_TutorRedShard_4

VerdanturfTown_House_EventScript_TutorRedShard_22:
	call VerdanturfTown_House_EventScript_TutorEnd
	return


VerdanturfTown_House_EventScript_TutorEnd::
	release
	end


VerdanturfTown_House_EventScript_TutorTaugthMove::
	msgbox VerdanturfTown_House_EventScript_TutorTaugthMove_Text_0
	call VerdanturfTown_House_EventScript_TutorEnd
	return


EventScript_MultichoiceTests::
	lock
	faceplayer
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_DEFAULT
	random ITEMS_COUNT
	bufferitemname STR_VAR_1, VAR_RESULT
	dynmultipush EventScript_MultichoiceTests_Text_0, VAR_RESULT
	random ITEMS_COUNT
	bufferitemname STR_VAR_2, VAR_RESULT
	dynmultipush EventScript_MultichoiceTests_Text_1, VAR_RESULT
	random ITEMS_COUNT
	bufferitemname STR_VAR_3, VAR_RESULT
	dynmultipush EventScript_MultichoiceTests_Text_2, VAR_RESULT
	dynmultistack 0, 0, TRUE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_SHOW_ITEM
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MultichoiceTests_Text_3, EventScript_MultichoiceTests_Text_4, EventScript_MultichoiceTests_Text_5
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MultichoiceTests_Text_3, EventScript_MultichoiceTests_Text_4, EventScript_MultichoiceTests_Text_5, EventScript_MultichoiceTests_Text_6
	buffernumberstring STR_VAR_1, VAR_RESULT
	msgbox EventScript_MultichoiceTests_Text_0, MSGBOX_DEFAULT
	closemessage
	release
	end


VerdanturfTown_House_EventScript_TutorPresentation_Text_0:
	.string "I'm the move tutor. I can teach your\n"
	.string "Pokèmon powerful moves if you bring me\l"
	.string "a shard.$"

VerdanturfTown_House_EventScript_TutorNoShard_Text_0:
	.string "I'm sorry, but it seems you don't have\n"
	.string "any shard with you. Come back when\l"
	.string "you'll find some.$"

VerdanturfTown_House_EventScript_TutorNoShardOfColor_Text_0:
	.string "You don't seem to have any shard of\n"
	.string "that color. Come back when yo'll finde\l"
	.string "some.$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_0:
	.string "Which shard do you want to give me?$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_1:
	.string "RED$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_2:
	.string "YELLOW$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_3:
	.string "BLUE$"

VerdanturfTown_House_EventScript_TutorChooseShard_Text_4:
	.string "GREEN$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_0:
	.string "Agility$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_1:
	.string "Bug Bite$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_2:
	.string "Covet$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_3:
	.string "Fire Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_4:
	.string "Gastro Acid$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_5:
	.string "Ice Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_6:
	.string "Magical Leaf$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_7:
	.string "Metal Claw$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_8:
	.string "Ominous Wind$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_9:
	.string "Poison Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_10:
	.string "Silver Wind"
	.string "Super Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_11:
	.string "Swift$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_12:
	.string "Taunt$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_13:
	.string "Thunder Fang$"

VerdanturfTown_House_EventScript_TutorRedShard_Text_14:
	.string "Work Up$"

VerdanturfTown_House_EventScript_TutorTaugthMove_Text_0:
	.string "All done! Your Pokèmon learned a new move.\nCome back soon.$"

EventScript_MultichoiceTests_Text_0:
	.string "{STR_VAR_1}$"

EventScript_MultichoiceTests_Text_1:
	.string "{STR_VAR_2}$"

EventScript_MultichoiceTests_Text_2:
	.string "{STR_VAR_3}$"

EventScript_MultichoiceTests_Text_3:
	.string "Option 1$"

EventScript_MultichoiceTests_Text_4:
	.string "Option 2$"

EventScript_MultichoiceTests_Text_5:
	.string "Option 3$"

EventScript_MultichoiceTests_Text_6:
	.string "Option 4$"
