# 1 "data/maps/Route122/scripts.pory"
Route122_MapScripts::
# 2 "data/maps/Route122/scripts.pory"
	.byte 0

Route122_EventScript_AquaGrunt::
# 5 "data/maps/Route122/scripts.pory"
	lock
# 6 "data/maps/Route122/scripts.pory"
	faceplayer
# 7 "data/maps/Route122/scripts.pory"
	msgbox Route122_EventScript_AquaGrunt_Text_0, MSGBOX_NPC
# 8 "data/maps/Route122/scripts.pory"
	release
	return


Route122_EventScript_AquaGrunt_Text_0:
# 7 "data/maps/Route122/scripts.pory"
	.string "I'm guarding the entrance to Mt. Pyre.\n"
	.string "No one can enter it!$"
