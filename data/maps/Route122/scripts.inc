Route122_MapScripts::
	.byte 0

Route122_EventScript_AquaGrunt::
	lock
	faceplayer
	msgbox Route122_EventScript_AquaGrunt_Text_0, MSGBOX_NPC
	release
	return


Route122_EventScript_AquaGrunt_Text_0:
	.string "I'm guarding the entrance to Mt. Pyre.\n"
	.string "No one can enter it!$"
