.set LOCALID_NURSE, 1
.set LOCALID_BLACK_BELT, 5
.set LOCALID_SCIENTIST, 6

LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MUSCLE_BAND, LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_2
LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_1:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_5
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_3
LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_4:
BlackBeltReturnNormalPos:
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_2:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_0
	goto BlackBeltReturnNormalPos
	goto LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_1

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_5:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_2
	giveitem ITEM_MUSCLE_BAND
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MUSCLE_BAND
	goto LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_4


LavaridgeTown_PokemonCenter_1F_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WISE_GLASSES, LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_2
LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_1:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_5
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_3
LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_4:
ScientistReturnNormalPos:
	applymovement LOCALID_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_2:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_0
	goto ScientistReturnNormalPos
	goto LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_1

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_5:
	msgbox LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_2
	giveitem ITEM_WISE_GLASSES
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WISE_GLASSES
	goto LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_4


LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_0:
	.string "Muscles rules!$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_1:
	.string "Muscles are better than mind, don't you\n"
	.string "think?$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_2:
	.string "You're right. And with this your muscles\n"
	.string "will be even stronger!$"

LavaridgeTown_PokemonCenter_1F_EventScript_BlackBelt_Text_3:
	.string "WHAT?\n"
	.string "IMPOSSIBLE!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_0:
	.string "Mind is superior to raw strength!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_1:
	.string "Mind is better than muscles, do you\n"
	.string "agree?$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_2:
	.string "Well Said! And with this your mind will be\n"
	.string "even more powerful!$"

LavaridgeTown_PokemonCenter_1F_EventScript_Scientist_Text_3:
	.string "You cannot even imagine what our mind\n"
	.string "is capable of!$"
