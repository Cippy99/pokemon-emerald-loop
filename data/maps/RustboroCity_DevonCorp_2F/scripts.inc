# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5

RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, 0
# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkgalarfossils
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1:
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_FISH
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DINO
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ARCTOVISH
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_0x800A, SPECIES_ARCTOVISH
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RevivePokemonUsingFossils, MSGBOX_YESNO
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_25
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_BIRD
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DINO
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ARCTOZOLT
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_0x800A, SPECIES_ARCTOZOLT
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RevivePokemonUsingFossils, MSGBOX_YESNO
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10:
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DRAKE
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DRACOZOLT
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_0x800A, SPECIES_DRACOZOLT
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RevivePokemonUsingFossils, MSGBOX_YESNO
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13:
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DRAKE
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DRACOVISH
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_0x800A, SPECIES_DRACOVISH
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RevivePokemonUsingFossils, MSGBOX_YESNO
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16:
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOZOLT
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_DRACOZOLT, 30
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilParty
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilPC
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19:
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOZOLT
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DINO
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 30
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilParty
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilPC
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22:
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOVISH
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_DRACOVISH, 30
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilParty
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilPC
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_25:
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOVISH
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DINO
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCTOVISH, 30
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilParty
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilPC
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end


RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilParty::
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
	end


RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilPC::
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC
	end


RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC::
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
	end


RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare::
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x800A
	return


RustboroCity_DevonCorp_2F_EventScript_ReviveDeclined::
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil::
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	return


# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with POKéMON.\p"
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch POKéMON you've caught before.\p"
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON the longer a battle runs.\p"
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of POKéMON.\p"
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON…\p"
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects POKéMON from fossils…\p"
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a POKéMON fossil?\p"
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that POKéMON\n"
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one POKéMON at a time.\p"
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient POKéMON.\n"
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RevivePokemonUsingFossils::
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can use the {STR_VAR_1}\n"
	.string "and the {STR_VAR_2}\p"
	.string "to revive the ancient POKèMON\n"
	.string "{STR_VAR_3}.\p"
	.string "Is that Okay?$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher::
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_3} from\n"
	.string "the DEVON RESEARCHER.$"
