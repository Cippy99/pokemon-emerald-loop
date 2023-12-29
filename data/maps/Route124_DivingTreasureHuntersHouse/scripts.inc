Route124_DivingTreasureHuntersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
	.byte 0

Route124_DivingTreasureHuntersHouse_OnTransition:
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end

Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
	lock
	faceplayer
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_Shop
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
	goto Route124_DivingTreasureHuntersHouse_Shop
	end


Route124_DivingTreasureHuntersHouse_Shop::
	message Route124_DivingTreasureHuntersHouse_Shop_Text_0
	waitmessage
	pokemart Route124_DivingTreasureHuntersHouse_StoneMart
	msgbox Route124_DivingTreasureHuntersHouse_Shop_Text_1
	release
	return


Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
	return


	.align 2
Route124_DivingTreasureHuntersHouse_StoneMart:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

Route124_DivingTreasureHuntersHouse_Shop_Text_0:
	.string "Are you interested in any of my stones?$"

Route124_DivingTreasureHuntersHouse_Shop_Text_1:
	.string "I hope to see you again soon.$"

Route124_DivingTreasureHuntersHouse_Text_Greeting::
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
	.string "EVOLUTIONARY STONES SHOP$"
