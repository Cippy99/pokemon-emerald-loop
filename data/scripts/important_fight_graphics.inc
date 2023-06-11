Common_EventScript_SetupImportantFightGfxId::
	getimportantfighttype VAR_0x8003
	goto_if_eq VAR_RESULT, TYPE_NORMAL, EventScript_SetupImportantFightGfxId_Normal
    goto_if_eq VAR_RESULT, TYPE_FIGHTING, EventScript_SetupImportantFightGfxId_Fighting
    goto_if_eq VAR_RESULT, TYPE_FIRE, EventScript_SetupImportantFightGfxId_Fire
    goto_if_eq VAR_RESULT, TYPE_GRASS, EventScript_SetupImportantFightGfxId_Grass
    goto_if_eq VAR_RESULT, TYPE_WATER, EventScript_SetupImportantFightGfxId_Water
    goto_if_eq VAR_RESULT, TYPE_ELECTRIC, EventScript_SetupImportantFightGfxId_Electric
    goto_if_eq VAR_RESULT, TYPE_FLYING, EventScript_SetupImportantFightGfxId_Flying
    goto_if_eq VAR_RESULT, TYPE_POISON, EventScript_SetupImportantFightGfxId_Poison
    goto_if_eq VAR_RESULT, TYPE_GROUND, EventScript_SetupImportantFightGfxId_Ground
    goto_if_eq VAR_RESULT, TYPE_ROCK, EventScript_SetupImportantFightGfxId_Rock
    goto_if_eq VAR_RESULT, TYPE_ICE, EventScript_SetupImportantFightGfxId_Ice
    goto_if_eq VAR_RESULT, TYPE_DRAGON, EventScript_SetupImportantFightGfxId_Dragon
    goto_if_eq VAR_RESULT, TYPE_FAIRY, EventScript_SetupImportantFightGfxId_Fairy
    goto_if_eq VAR_RESULT, TYPE_PSYCHIC, EventScript_SetupImportantFightGfxId_Psychic
    goto_if_eq VAR_RESULT, TYPE_DARK, EventScript_SetupImportantFightGfxId_Dark
    goto_if_eq VAR_RESULT, TYPE_GHOST, EventScript_SetupImportantFightGfxId_Ghost
    goto_if_eq VAR_RESULT, TYPE_BUG, EventScript_SetupImportantFightGfxId_Bug
    goto_if_eq VAR_RESULT, TYPE_STEEL, EventScript_SetupImportantFightGfxId_Steel
	end

EventScript_SetupImportantFightGfxId_Normal::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_NORMAN
    return

EventScript_SetupImportantFightGfxId_Fighting::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_BRAWLY
    return

EventScript_SetupImportantFightGfxId_Fire::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_FLANNERY
    return

EventScript_SetupImportantFightGfxId_Water::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_JUAN
    return

EventScript_SetupImportantFightGfxId_Grass::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_BEAUTY
    return

EventScript_SetupImportantFightGfxId_Electric::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_WATTSON
    return

EventScript_SetupImportantFightGfxId_Flying::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_WINONA
    return

EventScript_SetupImportantFightGfxId_Rock::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_ROXANNE
    return

EventScript_SetupImportantFightGfxId_Psychic::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_TATE
    return

EventScript_SetupImportantFightGfxId_Dark::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SIDNEY
    return

EventScript_SetupImportantFightGfxId_Ghost::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_PHOEBE
    return

EventScript_SetupImportantFightGfxId_Ice::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_GLACIA
    return

EventScript_SetupImportantFightGfxId_Dragon::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_DRAKE
    return

EventScript_SetupImportantFightGfxId_Poison::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_AQUA_MEMBER_M
    return

EventScript_SetupImportantFightGfxId_Ground::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_MAGMA_MEMBER_M
    return

EventScript_SetupImportantFightGfxId_Bug::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_BUG_CATCHER
    return

EventScript_SetupImportantFightGfxId_Steel::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_STEVEN
    return

EventScript_SetupImportantFightGfxId_Fairy::
    setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_VALERIE
    return
