SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_SwordsDanceBlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_SWORDS_DANCE, SootopolisCity_House1_EventScript_ReceivedSwordsDance
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_SWORDS_DANCE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SWORDS_DANCE
	msgbox SootopolisCity_House1_Text_ExplainSwordsDance, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_ReceivedSwordsDance::
	msgbox SootopolisCity_House1_Text_ExplainSwordsDance, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House1_Text_DevelopedThisTM:
	.string "For thirty years I've remained in\n"
	.string "SOOTOPOLIS honing my skills.\p"
	.string "I developed a shattering TM.\n"
	.string "I bequeath it to you!$"

SootopolisCity_House1_Text_ExplainSwordsDance:
	.string "TM31 contains SWORDS DANCE! It's a\n"
	.string "very strong move!$"

SootopolisCity_House1_Text_Kecleon:
	.string "KECLEON: Puu puhyaah.$"

