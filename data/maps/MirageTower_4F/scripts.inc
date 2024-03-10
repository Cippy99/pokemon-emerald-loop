.set LOCALID_FOSSILIZED_BIRD, 1
.set LOCALID_FOSSILIZED_FISH, 2
.set LOCALID_FOSSILIZED_DRAKE, 4
.set LOCALID_FOSSILIZED_DINO, 5

MirageTower_4F_MapScripts::
	.byte 0

MirageTower_4F_EventScript_CollapseMirageTower::
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 32  @ num shakes
	setvar VAR_0x8007, 2   @ shake delay
	special ShakeCamera
	waitstate
	special DoMirageTowerCeilingCrumble
	waitstate
	setvar VAR_MIRAGE_TOWER_STATE, 1
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
	warp MAP_ROUTE111, 19, 59
	waitstate
	release
	end

MirageTower_4F_EventScript_FossilizedBird::
	lock
	faceplayer
	msgbox MirageTower_4F_EventScript_FossilizedBird_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
	giveitem ITEM_FOSSILIZED_BIRD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_BIRD
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_FISH
	removeobject LOCALID_FOSSILIZED_BIRD
	delay 30
	setvar VAR_0x800A, LOCALID_FOSSILIZED_FISH
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedFish::
	lock
	faceplayer
	msgbox MirageTower_4F_EventScript_FossilizedFish_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
	giveitem ITEM_FOSSILIZED_FISH
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_FISH
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_BIRD
	removeobject LOCALID_FOSSILIZED_FISH
	delay 30
	setvar VAR_0x800A, LOCALID_FOSSILIZED_BIRD
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedDrake::
	lock
	faceplayer
	msgbox MirageTower_4F_EventScript_FossilizedDrake_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
	giveitem ITEM_FOSSILIZED_DRAKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DRAKE
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DINO
	removeobject LOCALID_FOSSILIZED_DRAKE
	delay 30
	setvar VAR_0x800A, LOCALID_FOSSILIZED_DINO
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedDino::
	lock
	faceplayer
	msgbox MirageTower_4F_EventScript_FossilizedDino_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
	giveitem ITEM_FOSSILIZED_DINO
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DINO
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DRAKE
	removeobject LOCALID_FOSSILIZED_DINO
	delay 30
	setvar VAR_0x800A, LOCALID_FOSSILIZED_DRAKE
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_ShakeOrCollapse::
	goto_if_set FLAG_CHOOSE_FIRST_FOSSIL, MirageTower_4F_EventScript_ShakeOrCollapse_1
	setflag FLAG_CHOOSE_FIRST_FOSSIL
	goto MirageTower_4F_EventScript_ShakeMirageTower
	return

MirageTower_4F_EventScript_ShakeOrCollapse_1:
	goto MirageTower_4F_EventScript_CollapseMirageTower
	return


MirageTower_4F_EventScript_LeaveFossil::
	msgbox MirageTower_4F_EventScript_LeaveFossil_Text_0
	release
	return


MirageTower_4F_EventScript_ShakeMirageTower::
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 16
	setvar VAR_0x8007, 2
	special ShakeCamera
	waitstate
	removeobject VAR_0x800A
	msgbox MirageTower_4F_EventScript_ShakeMirageTower_Text_0
	closemessage
	release
	return


MirageTower_4F_EventScript_FossilizedBird_Text_0:
	.string "Take the Fossilized Bird?$"

MirageTower_4F_EventScript_FossilizedFish_Text_0:
	.string "Take the Fossilized Fish?$"

MirageTower_4F_EventScript_FossilizedDrake_Text_0:
	.string "Take the Fossilized Drake?$"

MirageTower_4F_EventScript_FossilizedDino_Text_0:
	.string "Take the Fossilized Dino?$"

MirageTower_4F_EventScript_LeaveFossil_Text_0:
	.string "{PLAYER} left the fossil alone.$"

MirageTower_4F_EventScript_ShakeMirageTower_Text_0:
	.string "The floor seems instable. If you take\n"
	.string "another fossil the tower may collapse.$"
