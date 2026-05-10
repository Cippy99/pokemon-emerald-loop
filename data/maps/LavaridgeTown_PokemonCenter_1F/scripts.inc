# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_BLACK_BELT, 5
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST, 6
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINERS if they spend time together.\p"
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my POKéMON\n"
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 51 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If POKéMON are getting rest, so too\n"
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their TRAINERS.$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt::
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lock
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MUSCLE_BAND, LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_2
LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_1:
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_1, MSGBOX_YESNO
# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_5
# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_3
LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_4:
# 73 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
BlackBeltReturnNormalPos:
# 74 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 75 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
	return

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_2:
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_0
# 60 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto BlackBeltReturnNormalPos
	goto LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_1

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_5:
# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_2
# 65 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_MUSCLE_BAND
	goto LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_4


LavaridgeTown_PokemonCenter_1F_EventScript_Scientist::
# 80 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lock
# 81 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 82 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_WISE_GLASSES, LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_2
LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_1:
# 86 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_1, MSGBOX_YESNO
# 87 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_5
# 94 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_3
LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_4:
# 98 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
ScientistReturnNormalPos:
# 99 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FaceOriginalDirection
# 100 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
	return

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_2:
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_0
# 84 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto ScientistReturnNormalPos
	goto LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_1

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_5:
# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_2
# 89 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 90 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 91 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_WISE_GLASSES
	goto LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_4


LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_0:
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Muscles rules!$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_1:
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Muscles are better than mind, don't you\n"
	.string "think?$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_2:
# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "You're right. And with this your muscles\n"
	.string "will be even stronger!$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_3:
# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "WHAT?\n"
	.string "IMPOSSIBLE!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_0:
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Mind is superior to raw strength!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_1:
# 86 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Mind is better than muscles, do you\n"
	.string "agree?$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_2:
# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Well Said! And with this your mind will be\n"
	.string "even more powerful!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_3:
# 94 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "You cannot even imagine what our mind\n"
	.string "is capable of!$"
