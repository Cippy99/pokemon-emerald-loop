# 1 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_MapScripts::
# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
# 3 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 5 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_OnTransition:
# 6 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
# 7 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end

Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 12 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_Shop
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 15 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_Shop
	end


Route124_DivingTreasureHuntersHouse_Shop::
# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Shop_Text_0
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	pokemart Route124_DivingTreasureHuntersHouse_StoneMart
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Shop_Text_1
# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
	return


Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
	return


	.align 2
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_StoneMart:
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_WATER_STONE
# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_MOON_STONE
# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_SUN_STONE
# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

Route124_DivingTreasureHuntersHouse_Shop_Text_0:
# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Are you interested in any of my stones?$"

Route124_DivingTreasureHuntersHouse_Shop_Text_1:
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I hope to see you again soon.$"

Route124_DivingTreasureHuntersHouse_Text_Greeting::
# 32 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the DIVING TREASURE HUNTER!\p"
	.string "I'm the awesome dude who makes\n"
	.string "deep-sea dives to gather treasures\l"
	.string "resting at the bottom.\p"
	.string "I once traded shards for stones, but\n"
	.string "since that guy in Verdantuf came\l"
	.string "everyoune is giving shards to him.\p"
	.string "So now I'm just selling my items\n"
	.string "normally...$"

Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard::
# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "EVOLUTIONARY STONES SHOP$"
