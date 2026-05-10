# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_FOSSILIZED_BIRD, 1
# 3 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_FOSSILIZED_FISH, 2
# 4 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_FOSSILIZED_DRAKE, 4
# 5 "data/maps/MirageTower_4F/scripts.pory"
.set LOCALID_FOSSILIZED_DINO, 5
# 6 "data/maps/MirageTower_4F/scripts.pory"

# 7 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 8 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 9 "data/maps/MirageTower_4F/scripts.pory"

# 10 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 11 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 12 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 13 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 14 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 15 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 16 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 17 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 18 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 19 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 20 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 21 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 22 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 23 "data/maps/MirageTower_4F/scripts.pory"
	release
# 24 "data/maps/MirageTower_4F/scripts.pory"
	end

MirageTower_4F_EventScript_FossilizedBird::
# 30 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 31 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 32 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_FossilizedBird_Text_0, MSGBOX_YESNO
# 33 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
# 34 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_BIRD
# 35 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 36 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_BIRD
# 37 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_FISH
# 38 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_FOSSILIZED_BIRD
# 39 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 40 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x800A, LOCALID_FOSSILIZED_FISH
# 41 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedFish::
# 45 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 46 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 47 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_FossilizedFish_Text_0, MSGBOX_YESNO
# 48 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
# 49 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_FISH
# 50 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 51 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_FISH
# 52 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_BIRD
# 53 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_FOSSILIZED_FISH
# 54 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 55 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x800A, LOCALID_FOSSILIZED_BIRD
# 56 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedDrake::
# 60 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 61 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 62 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_FossilizedDrake_Text_0, MSGBOX_YESNO
# 63 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
# 64 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_DRAKE
# 65 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 66 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DRAKE
# 67 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DINO
# 68 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_FOSSILIZED_DRAKE
# 69 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 70 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x800A, LOCALID_FOSSILIZED_DINO
# 71 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_FossilizedDino::
# 75 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 76 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 77 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_FossilizedDino_Text_0, MSGBOX_YESNO
# 78 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFossil
# 79 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_DINO
# 80 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 81 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DINO
# 82 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FOSSILIZED_DRAKE
# 83 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_FOSSILIZED_DINO
# 84 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 85 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x800A, LOCALID_FOSSILIZED_DRAKE
# 86 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ShakeOrCollapse
	return


MirageTower_4F_EventScript_ShakeOrCollapse::
# 90 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOOSE_FIRST_FOSSIL, MirageTower_4F_EventScript_ShakeOrCollapse_1
# 94 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOOSE_FIRST_FOSSIL
# 95 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_ShakeMirageTower
	return

MirageTower_4F_EventScript_ShakeOrCollapse_1:
# 91 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	return


MirageTower_4F_EventScript_LeaveFossil::
# 100 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_LeaveFossil_Text_0
# 101 "data/maps/MirageTower_4F/scripts.pory"
	release
	return


MirageTower_4F_EventScript_ShakeMirageTower::
# 105 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 106 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 107 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 16
# 108 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2
# 109 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 110 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 111 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_0x800A
# 112 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_ShakeMirageTower_Text_0
# 113 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 114 "data/maps/MirageTower_4F/scripts.pory"
	release
	return


MirageTower_4F_EventScript_FossilizedBird_Text_0:
# 32 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the Fossilized Bird?$"

MirageTower_4F_EventScript_FossilizedFish_Text_0:
# 47 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the Fossilized Fish?$"

MirageTower_4F_EventScript_FossilizedDrake_Text_0:
# 62 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the Fossilized Drake?$"

MirageTower_4F_EventScript_FossilizedDino_Text_0:
# 77 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the Fossilized Dino?$"

MirageTower_4F_EventScript_LeaveFossil_Text_0:
# 100 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the fossil alone.$"

MirageTower_4F_EventScript_ShakeMirageTower_Text_0:
# 112 "data/maps/MirageTower_4F/scripts.pory"
	.string "The floor seems instable. If you take\n"
	.string "another fossil the tower may collapse.$"
