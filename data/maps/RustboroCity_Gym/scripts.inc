# 1 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_OnTransition
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_Gym_OnWarp
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_Gym/scripts.pory"

# 6 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_GYM_GUIDE, 4
# 7 "data/maps/RustboroCity_Gym/scripts.pory"

# 8 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_OnTransition:
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	copyvar VAR_0x8003 VAR_GYM_1_LEADER
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetupImportantFightGfxId
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	bufferleadername STR_VAR_1, VAR_GYM_1_LEADER
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_OnWarp:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script_2 VAR_RUSTBORO_GYM_STATE, 0, RustboroCity_Gym_EventScript_GymGuideGreeting
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte 0
# 17 "data/maps/RustboroCity_Gym/scripts.pory"

# 18 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Leader::
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	copyvar VAR_0x8003 VAR_GYM_1_LEADER
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_StartGym1Fight
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Gym/scripts.pory"

# 28 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeaderDefeated::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	bufferleadername STR_VAR_1, VAR_GYM_1_LEADER
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 43 "data/maps/RustboroCity_Gym/scripts.pory"

# 44 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Gym/scripts.pory"

# 62 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Gym/scripts.pory"

# 67 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 96 "data/maps/RustboroCity_Gym/scripts.pory"

# 97 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 101 "data/maps/RustboroCity_Gym/scripts.pory"

# 102 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 121 "data/maps/RustboroCity_Gym/scripts.pory"

# 122 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"

# 127 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"

# 139 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"

# 143 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"

# 150 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against the leader!$"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"

# 157 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The leader is stronger than me by\n"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"

# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"

# 177 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables your POKèMON\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use the HM move CUT\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "outside of battle.\p"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"

# 186 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used more than once,\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so you can teach it to different POKèMON.$"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"

# 196 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"

# 202 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"

# 205 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{STR_VAR_1}'S CERTIFIED TRAINERS:\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"

# 210 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{STR_VAR_1}: Oh, hello, {PLAYER}?\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is {STR_VAR_1} of RUSTBORO CITY.\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER {STR_VAR_1}\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"

# 231 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"

# 249 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

RustboroCity_Gym_EventScript_GymGuideGreeting::
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, Common_Movement_ExclamationMark
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, GymGuideWalkToPlayer
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideGreetAndExplain, MSGBOX_DEFAULT
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_GYM_GUIDE, GymGuideGoBack
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 1
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	return


# 311 "data/maps/RustboroCity_Gym/scripts.pory"
GymGuideWalkToPlayer:
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	face_player
	step_end

# 317 "data/maps/RustboroCity_Gym/scripts.pory"
GymGuideGoBack:
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	face_original_direction
	step_end

RustboroCity_Gym_Text_GymGuideGreetAndExplain::
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the CHAMPION?\p"
	.string "I'm no TRAINER, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "POKéMON CHAMPIONSHIP together!\p"
	.string "It's your job as a TRAINER to collect\n"
	.string "GYM BADGES, am I right?\p"
	.string "But GYM LEADERS aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "Some time ago the Hoenn POKéMON League\n"
	.string "decided that collecting all the BADGES\l"
	.string "was too easy.\p"
	.string "So, to spice up the competition they\n"
	.string "invited GYM LEADERS from all over\l"
	.string "the world to fight against\l"
	.string "challengers like you.\p"
	.string "Inside every gym there is always a\n"
	.string "different leader. Even I can't keep\l"
	.string "up with all this randomness...\p"
	.string "Fortunately, every time a new leader\n"
	.string "arrives they replace the sign outside\l"
	.string "of the GYM, so challengers can\l"
	.string "prepare for the battle.\p"
	.string "Well, enough talking, now it's time\n"
	.string "to fight!\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the GYM LEADER.$"
