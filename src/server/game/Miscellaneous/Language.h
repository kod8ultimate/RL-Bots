/*
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TRINITY_LANGUAGE_H
#define __TRINITY_LANGUAGE_H

enum BroadcastTextIds
{
    BROADCAST_TEXT_ACHIEVEMENT_EARNED   = 29245,
    BROADCAST_TEXT_CALL_FOR_HELP        = 2541,
    BROADCAST_TEXT_FLEE_FOR_ASSIST      = 1150
};

enum TrinityStrings
{
    // for chat commands
    LANG_SELECT_CHAR_OR_CREATURE        = 1,
    LANG_SELECT_CREATURE                = 2,

    // level 0 chat
    LANG_SYSTEMMESSAGE                  = 3,
    LANG_EVENTMESSAGE                   = 4,
    LANG_NO_HELP_CMD                    = 5,
    LANG_NO_CMD                         = 6,
    LANG_NO_SUBCMD                      = 7,
    LANG_SUBCMDS_LIST                   = 8,
    LANG_AVIABLE_CMD                    = 9,
    LANG_CMD_SYNTAX                     = 10,
    LANG_ACCOUNT_LEVEL                  = 11,
    LANG_CONNECTED_USERS                = 12,
    LANG_UPTIME                         = 13,
    LANG_PLAYER_SAVED                   = 14,
    LANG_PLAYERS_SAVED                  = 15,
    LANG_GMS_ON_SRV                     = 16,
    LANG_GMS_NOT_LOGGED                 = 17,
    LANG_YOU_IN_FLIGHT                  = 18,
    LANG_UPDATE_DIFF                    = 19,
    LANG_SHUTDOWN_TIMELEFT              = 20,
    LANG_CHAR_IN_FLIGHT                 = 21,
    LANG_CHAR_NON_MOUNTED               = 22,
    LANG_YOU_IN_COMBAT                  = 23,
    LANG_YOU_USED_IT_RECENTLY           = 24,
    LANG_COMMAND_NOTCHANGEPASSWORD      = 25,
    LANG_COMMAND_PASSWORD               = 26,
    LANG_COMMAND_WRONGOLDPASSWORD       = 27,
    LANG_COMMAND_ACCLOCKLOCKED          = 28,
    LANG_COMMAND_ACCLOCKUNLOCKED        = 29,
    LANG_SPELL_RANK                     = 30,
    LANG_KNOWN                          = 31,
    LANG_LEARN                          = 32,
    LANG_PASSIVE                        = 33,
    LANG_TALENT                         = 34,
    LANG_ACTIVE                         = 35,
    LANG_COMPLETE                       = 36,
    LANG_OFFLINE                        = 37,
    LANG_ON                             = 38,
    LANG_OFF                            = 39,
    LANG_YOU_ARE                        = 40,
    LANG_VISIBLE                        = 41,
    LANG_INVISIBLE                      = 42,
    LANG_DONE                           = 43,
    LANG_YOU                            = 44,
    LANG_UNKNOWN                        = 45,
    LANG_ERROR                          = 46,
    LANG_NON_EXIST_CHARACTER            = 47,
    // unused                           = 48,
    LANG_LEVEL_MINREQUIRED              = 49,
    LANG_LEVEL_MINREQUIRED_AND_ITEM     = 50,
    LANG_NPC_TAINER_HELLO               = 51,
    LANG_COMMAND_INVALID_ITEM_COUNT     = 52,
    LANG_COMMAND_MAIL_ITEMS_LIMIT       = 53,
    LANG_NEW_PASSWORDS_NOT_MATCH        = 54,
    LANG_PASSWORD_TOO_LONG              = 55,
    LANG_MOTD_CURRENT                   = 56,
    LANG_USING_WORLD_DB                 = 57,
    LANG_USING_SCRIPT_LIB               = 58,
    LANG_USING_EVENT_AI                 = 59,
    LANG_CONNECTED_PLAYERS              = 60,
    LANG_ACCOUNT_ADDON                  = 61,
    LANG_IMPROPER_VALUE                 = 62,
    LANG_RBAC_WRONG_PARAMETER_ID        = 63,
    LANG_RBAC_WRONG_PARAMETER_REALM     = 64,
    LANG_RBAC_LIST_HEADER_GRANTED       = 65,
    LANG_RBAC_LIST_HEADER_DENIED        = 66,
    LANG_RBAC_LIST_HEADER_BY_SEC_LEVEL  = 67,
    LANG_RBAC_LIST_PERMISSIONS_HEADER   = 68,
    LANG_RBAC_LIST_PERMS_LINKED_HEADER  = 69,
    LANG_RBAC_LIST_EMPTY                = 70,
    LANG_RBAC_LIST_ELEMENT              = 71,
    LANG_RBAC_PERM_GRANTED_IN_LIST      = 72,
    LANG_RBAC_PERM_GRANTED_IN_DENIED_LIST = 73,
    LANG_RBAC_PERM_GRANTED              = 74,
    LANG_RBAC_PERM_DENIED_IN_LIST       = 75,
    LANG_RBAC_PERM_DENIED_IN_GRANTED_LIST = 76,
    LANG_RBAC_PERM_DENIED               = 77,
    LANG_RBAC_PERM_REVOKED              = 78,
    LANG_RBAC_PERM_REVOKED_NOT_IN_LIST  = 79,
    LANG_PVPSTATS                       = 80,
    LANG_PVPSTATS_DISABLED              = 81,
    LANG_COMMAND_NEARGRAVEYARD          = 82,
    LANG_COMMAND_NEARGRAVEYARD_NOTFOUND = 83,
    LANG_GOINFO_SIZE                    = 84,
    LANG_GOINFO_ADDON                   = 85,
    LANG_GOINFO_MODEL                   = 86,
    // Free 87 - 95


    LANG_GUILD_RENAME_ALREADY_EXISTS    = 96,
    LANG_GUILD_RENAME_DONE              = 97,
    LANG_RENAME_PLAYER_ALREADY_EXISTS   = 98,
    LANG_RENAME_PLAYER_WITH_NEW_NAME    = 99,

    // level 1 chat
    LANG_GLOBAL_NOTIFY                  = 100,
    LANG_MAP_POSITION                   = 101,
    LANG_IS_TELEPORTED                  = 102,
    LANG_CANNOT_SUMMON_TO_INST          = 103,
    LANG_CANNOT_GO_TO_INST_PARTY        = 104,
    LANG_CANNOT_GO_TO_INST_GM           = 105,
    LANG_CANNOT_GO_INST_INST            = 106,
    LANG_CANNOT_SUMMON_INST_INST        = 107,
    LANG_SUMMONING                      = 108,
    LANG_SUMMONED_BY                    = 109,
    LANG_TELEPORTING_TO                 = 110,
    LANG_TELEPORTED_TO_BY               = 111,
    LANG_NO_PLAYER                      = 112,
    LANG_APPEARING_AT                   = 113,
    LANG_APPEARING_TO                   = 114,
    LANG_BAD_VALUE                      = 115,
    LANG_NO_CHAR_SELECTED               = 116,
    LANG_NOT_IN_GROUP                   = 117,

    LANG_YOU_CHANGE_HP                  = 118,
    LANG_YOURS_HP_CHANGED               = 119,
    LANG_YOU_CHANGE_MANA                = 120,
    LANG_YOURS_MANA_CHANGED             = 121,
    LANG_YOU_CHANGE_ENERGY              = 122,
    LANG_YOURS_ENERGY_CHANGED           = 123,

    LANG_CURRENT_ENERGY                 = 124,              //log
    LANG_YOU_CHANGE_RAGE                = 125,
    LANG_YOURS_RAGE_CHANGED             = 126,
    LANG_YOU_CHANGE_LVL                 = 127,
    LANG_CURRENT_FACTION                = 128,
    LANG_WRONG_FACTION                  = 129,
    LANG_YOU_CHANGE_FACTION             = 130,
    LANG_YOU_CHANGE_SPELLFLATID         = 131,
    LANG_YOURS_SPELLFLATID_CHANGED      = 132,
    LANG_YOU_GIVE_TAXIS                 = 133,
    LANG_YOU_REMOVE_TAXIS               = 134,
    LANG_YOURS_TAXIS_ADDED              = 135,
    LANG_YOURS_TAXIS_REMOVED            = 136,

    LANG_YOU_CHANGE_ASPEED              = 137,
    LANG_YOURS_ASPEED_CHANGED           = 138,
    LANG_YOU_CHANGE_SPEED               = 139,
    LANG_YOURS_SPEED_CHANGED            = 140,
    LANG_YOU_CHANGE_SWIM_SPEED          = 141,
    LANG_YOURS_SWIM_SPEED_CHANGED       = 142,
    LANG_YOU_CHANGE_BACK_SPEED          = 143,
    LANG_YOURS_BACK_SPEED_CHANGED       = 144,
    LANG_YOU_CHANGE_FLY_SPEED           = 145,
    LANG_YOURS_FLY_SPEED_CHANGED        = 146,

    LANG_YOU_CHANGE_SIZE                = 147,
    LANG_YOURS_SIZE_CHANGED             = 148,
    LANG_NO_MOUNT                       = 149,
    LANG_YOU_GIVE_MOUNT                 = 150,
    LANG_MOUNT_GIVED                    = 151,

    LANG_CURRENT_MONEY                  = 152,
    LANG_YOU_TAKE_ALL_MONEY             = 153,
    LANG_YOURS_ALL_MONEY_GONE           = 154,
    LANG_YOU_TAKE_MONEY                 = 155,
    LANG_YOURS_MONEY_TAKEN              = 156,
    LANG_YOU_GIVE_MONEY                 = 157,
    LANG_YOURS_MONEY_GIVEN              = 158,
    LANG_YOU_HEAR_SOUND                 = 159,

    LANG_NEW_MONEY                      = 160,              // Log

    LANG_REMOVE_BIT                     = 161,
    LANG_SET_BIT                        = 162,
    LANG_COMMAND_TELE_TABLEEMPTY        = 163,
    LANG_COMMAND_TELE_NOTFOUND          = 164,
    LANG_COMMAND_TELE_PARAMETER         = 165,
    LANG_COMMAND_TELE_NOLOCATION        = 166,
    LANG_RESERVED_NAME                  = 167,
    LANG_COMMAND_TELE_LOCATION          = 168,

    LANG_MAIL_SENT                      = 169,
    LANG_SOUND_NOT_EXIST                = 170,
    LANG_CANT_TELEPORT_SELF             = 171,
    LANG_CONSOLE_COMMAND                = 172,
    LANG_YOU_CHANGE_RUNIC_POWER         = 173,
    LANG_YOURS_RUNIC_POWER_CHANGED      = 174,
    LANG_LIQUID_STATUS                  = 175,
    LANG_INVALID_GAMEOBJECT_TYPE        = 176,
    LANG_GAMEOBJECT_DAMAGED             = 177,
    LANG_GRID_POSITION                  = 178,
    // 179-185 used in 6.x branch
    LANG_TRANSPORT_POSITION             = 186,
    LANG_PARTIAL_GROUP_SUMMON           = 187,
    // Room for more level 1              188-199 not used

    // level 2 chat
    LANG_NO_SELECTION                   = 200,
    LANG_OBJECT_GUID                    = 201,
    LANG_TOO_LONG_NAME                  = 202,
    LANG_CHARS_ONLY                     = 203,
    LANG_TOO_LONG_SUBNAME               = 204,
    LANG_NOT_IMPLEMENTED                = 205,

    LANG_ITEM_ADDED_TO_LIST             = 206,
    LANG_ITEM_NOT_FOUND                 = 207,
    LANG_ITEM_DELETED_FROM_LIST         = 208,
    LANG_ITEM_NOT_IN_LIST               = 209,
    LANG_ITEM_ALREADY_IN_LIST           = 210,

    LANG_RESET_SPELLS_ONLINE            = 211,
    LANG_RESET_SPELLS_OFFLINE           = 212,
    LANG_RESET_TALENTS_ONLINE           = 213,
    LANG_RESET_TALENTS_OFFLINE          = 214,
    LANG_RESET_SPELLS                   = 215,
    LANG_RESET_TALENTS                  = 216,

    LANG_RESETALL_UNKNOWN_CASE          = 217,
    LANG_RESETALL_SPELLS                = 218,
    LANG_RESETALL_TALENTS               = 219,

    LANG_WAYPOINT_NOTFOUND              = 220,
    LANG_WAYPOINT_NOTFOUNDLAST          = 221,
    LANG_WAYPOINT_NOTFOUNDSEARCH        = 222,
    LANG_WAYPOINT_NOTFOUNDDBPROBLEM     = 223,
    LANG_WAYPOINT_CREATSELECTED         = 224,
    LANG_WAYPOINT_CREATNOTFOUND         = 225,
    LANG_WAYPOINT_VP_SELECT             = 226,
    LANG_WAYPOINT_VP_NOTFOUND           = 227,
    LANG_WAYPOINT_VP_NOTCREATED         = 228,
    LANG_WAYPOINT_VP_ALLREMOVED         = 229,
    LANG_WAYPOINT_NOTCREATED            = 230,
    LANG_WAYPOINT_NOGUID                = 231,
    LANG_WAYPOINT_NOWAYPOINTGIVEN       = 232,
    LANG_WAYPOINT_ARGUMENTREQ           = 233,
    LANG_WAYPOINT_ADDED                 = 234,
    LANG_WAYPOINT_ADDED_NO              = 235,
    LANG_WAYPOINT_CHANGED               = 236,
    LANG_WAYPOINT_CHANGED_NO            = 237,
    LANG_WAYPOINT_EXPORTED              = 238,
    LANG_WAYPOINT_NOTHINGTOEXPORT       = 239,
    LANG_WAYPOINT_IMPORTED              = 240,
    LANG_WAYPOINT_REMOVED               = 241,
    LANG_WAYPOINT_NOTREMOVED            = 242,
    LANG_WAYPOINT_TOOFAR1               = 243,
    LANG_WAYPOINT_TOOFAR2               = 244,
    LANG_WAYPOINT_TOOFAR3               = 245,
    LANG_WAYPOINT_INFO_TITLE            = 246,
    LANG_WAYPOINT_INFO_WAITTIME         = 247,
    LANG_WAYPOINT_INFO_MODEL            = 248,
    LANG_WAYPOINT_INFO_EMOTE            = 249,
    LANG_WAYPOINT_INFO_SPELL            = 250,
    LANG_WAYPOINT_INFO_TEXT             = 251,
    LANG_WAYPOINT_INFO_AISCRIPT         = 252,

    LANG_RENAME_PLAYER                  = 253,
    LANG_RENAME_PLAYER_GUID             = 254,

    LANG_WAYPOINT_WPCREATNOTFOUND       = 255,
    LANG_WAYPOINT_NPCNOTFOUND           = 256,

    LANG_MOVE_TYPE_SET                  = 257,
    LANG_MOVE_TYPE_SET_NODEL            = 258,
    LANG_USE_BOL                        = 259,
    LANG_VALUE_SAVED                    = 260,
    LANG_VALUE_SAVED_REJOIN             = 261,

    LANG_COMMAND_GOAREATRNOTFOUND       = 262,
    LANG_INVALID_TARGET_COORD           = 263,
    LANG_INVALID_ZONE_COORD             = 264,
    LANG_INVALID_ZONE_MAP               = 265,
    LANG_COMMAND_TARGETOBJNOTFOUND      = 266,
    LANG_COMMAND_GOOBJNOTFOUND          = 267,
    LANG_COMMAND_GOCREATNOTFOUND        = 268,
    LANG_COMMAND_GOCREATMULTIPLE        = 269,
    LANG_COMMAND_DELCREATMESSAGE        = 270,
    LANG_COMMAND_CREATUREMOVED          = 271,
    LANG_COMMAND_CREATUREATSAMEMAP      = 272,
    LANG_COMMAND_OBJNOTFOUND            = 273,
    LANG_COMMAND_DELOBJREFERCREATURE    = 274,
    LANG_COMMAND_DELOBJMESSAGE          = 275,
    LANG_COMMAND_TURNOBJMESSAGE         = 276,
    LANG_COMMAND_MOVEOBJMESSAGE         = 277,
    LANG_COMMAND_VENDORSELECTION        = 278,
    LANG_COMMAND_NEEDITEMSEND           = 279,
    LANG_COMMAND_ADDVENDORITEMITEMS     = 280,
    LANG_COMMAND_KICKSELF               = 281,
    LANG_COMMAND_KICKMESSAGE            = 282,
    LANG_COMMAND_DISABLE_CHAT_DELAYED   = 283,
    LANG_COMMAND_WHISPERACCEPTING       = 284,
    LANG_COMMAND_WHISPERON              = 285,
    LANG_COMMAND_WHISPEROFF             = 286,
    LANG_COMMAND_CREATGUIDNOTFOUND      = 287,
    LANG_COMMAND_NOT_DEAD_OR_NO_LOOT    = 288,
    LANG_COMMAND_NPC_SHOWLOOT_HEADER    = 289,
    LANG_COMMAND_NPC_SHOWLOOT_LABEL     = 290,
    LANG_COMMAND_NPC_SHOWLOOT_ENTRY     = 291,
    LANG_COMMAND_NPC_SHOWLOOT_MONEY     = 292,
    LANG_COMMAND_NPC_SHOWLOOT_LABEL_2   = 293,
    LANG_COMMAND_NPC_SHOWLOOT_SUBLABEL  = 294,
    LANG_COMMAND_NPC_SHOWLOOT_ENTRY_2   = 295,
      // 296 free

      // END
    LANG_COMMAND_SPAWNDIST              = 297,
    LANG_COMMAND_SPAWNTIME              = 298,
    LANG_COMMAND_MODIFY_HONOR           = 299,

    LANG_YOUR_CHAT_DISABLED             = 300,
    LANG_YOU_DISABLE_CHAT               = 301,
    LANG_CHAT_ALREADY_ENABLED           = 302,
    LANG_YOUR_CHAT_ENABLED              = 303,
    LANG_YOU_ENABLE_CHAT                = 304,

    LANG_COMMAND_MODIFY_REP             = 305,
    LANG_COMMAND_MODIFY_ARENA           = 306,
    LANG_COMMAND_FACTION_NOTFOUND       = 307,
    LANG_COMMAND_FACTION_UNKNOWN        = 308,
    LANG_COMMAND_FACTION_INVPARAM       = 309,
    LANG_COMMAND_FACTION_DELTA          = 310,
    LANG_FACTION_LIST                   = 311,
    LANG_FACTION_VISIBLE                = 312,
    LANG_FACTION_ATWAR                  = 313,
    LANG_FACTION_PEACE_FORCED           = 314,
    LANG_FACTION_HIDDEN                 = 315,
    LANG_FACTION_INVISIBLE_FORCED       = 316,
    LANG_FACTION_INACTIVE               = 317,
    LANG_REP_HATED                      = 318,
    LANG_REP_HOSTILE                    = 319,
    LANG_REP_UNFRIENDLY                 = 320,
    LANG_REP_NEUTRAL                    = 321,
    LANG_REP_FRIENDLY                   = 322,
    LANG_REP_HONORED                    = 323,
    LANG_REP_REVERED                    = 324,
    LANG_REP_EXALTED                    = 325,
    LANG_COMMAND_FACTION_NOREP_ERROR    = 326,
    LANG_FACTION_NOREPUTATION           = 327,
    LANG_LOOKUP_PLAYER_ACCOUNT          = 328,
    LANG_LOOKUP_PLAYER_CHARACTER        = 329,
    LANG_NO_PLAYERS_FOUND               = 330,
    LANG_EXTENDED_COST_NOT_EXIST        = 331,
    LANG_GM_ON                          = 332,
    LANG_GM_OFF                         = 333,
    LANG_GM_CHAT_ON                     = 334,
    LANG_GM_CHAT_OFF                    = 335,
    LANG_YOU_REPAIR_ITEMS               = 336,
    LANG_YOUR_ITEMS_REPAIRED            = 337,
    LANG_YOU_SET_WATERWALK              = 338,
    LANG_YOUR_WATERWALK_SET             = 339,
    LANG_CREATURE_FOLLOW_YOU_NOW        = 340,
    LANG_CREATURE_NOT_FOLLOW_YOU        = 341,
    LANG_CREATURE_NOT_FOLLOW_YOU_NOW    = 342,
    LANG_CREATURE_NON_TAMEABLE          = 343,
    LANG_YOU_ALREADY_HAVE_PET           = 344,
    LANG_CUSTOMIZE_PLAYER               = 345,
    LANG_CUSTOMIZE_PLAYER_GUID          = 346,
    LANG_COMMAND_GOTAXINODENOTFOUND     = 347,
    LANG_GAMEOBJECT_HAVE_INVALID_DATA   = 348,
    LANG_TITLE_LIST_CHAT                = 349,
    LANG_TITLE_LIST_CONSOLE             = 350,
    LANG_COMMAND_NOTITLEFOUND           = 351,
    LANG_INVALID_TITLE_ID               = 352,
    LANG_TITLE_ADD_RES                  = 353,
    LANG_TITLE_REMOVE_RES               = 354,
    LANG_TITLE_CURRENT_RES              = 355,
    LANG_CURRENT_TITLE_RESET            = 356,
    LANG_COMMAND_CHEAT_STATUS           = 357,
    LANG_COMMAND_CHEAT_GOD              = 358,
    LANG_COMMAND_CHEAT_CT               = 359,
    LANG_COMMAND_CHEAT_CD               = 360,
    LANG_COMMAND_CHEAT_POWER            = 361,
    LANG_COMMAND_CHEAT_WW               = 362,
    LANG_COMMAND_WHISPEROFFPLAYER       = 363,
    LANG_COMMAND_CHEAT_TAXINODES        = 364,
    // Room for more level 2              365-399 not used

    // level 3 chat
    LANG_SCRIPTS_RELOADED               = 400,
    LANG_YOU_CHANGE_SECURITY            = 401,
    LANG_YOURS_SECURITY_CHANGED         = 402,
    LANG_YOURS_SECURITY_IS_LOW          = 403,
    LANG_CREATURE_MOVE_DISABLED         = 404,
    LANG_CREATURE_MOVE_ENABLED          = 405,
    LANG_NO_WEATHER                     = 406,
    LANG_WEATHER_DISABLED               = 407,

    LANG_BAN_YOUBANNED                  = 408,
    LANG_BAN_YOUPERMBANNED              = 409,
    LANG_BAN_NOTFOUND                   = 410,

    LANG_UNBAN_UNBANNED                 = 411,
    LANG_UNBAN_ERROR                    = 412,

    LANG_ACCOUNT_NOT_EXIST              = 413,

    LANG_BANINFO_NOCHARACTER            = 414,
    LANG_BANINFO_NOIP                   = 415,
    LANG_BANINFO_NOACCOUNTBAN           = 416,
    LANG_BANINFO_BANHISTORY             = 417,
    LANG_BANINFO_HISTORYENTRY           = 418,
    LANG_BANINFO_INFINITE               = 419,
    LANG_BANINFO_NEVER                  = 420,
    LANG_YES                            = 421,
    LANG_NO                             = 422,
    LANG_BANINFO_IPENTRY                = 423,

    LANG_BANLIST_NOIP                   = 424,
    LANG_BANLIST_NOACCOUNT              = 425,
    LANG_BANLIST_NOCHARACTER            = 426,
    LANG_BANLIST_MATCHINGIP             = 427,
    LANG_BANLIST_MATCHINGACCOUNT        = 428,

    LANG_COMMAND_LEARN_MANY_SPELLS      = 429,
    LANG_COMMAND_LEARN_CLASS_SPELLS     = 430,
    LANG_COMMAND_LEARN_CLASS_TALENTS    = 431,
    LANG_COMMAND_LEARN_ALL_LANG         = 432,
    LANG_COMMAND_LEARN_ALL_CRAFT        = 433,
    LANG_COMMAND_COULDNOTFIND           = 434,
    LANG_COMMAND_ITEMIDINVALID          = 435,
    LANG_COMMAND_NOITEMFOUND            = 436,
    LANG_COMMAND_LISTOBJINVALIDID       = 437,
    LANG_COMMAND_LISTITEMMESSAGE        = 438,
    LANG_COMMAND_LISTOBJMESSAGE         = 439,
    LANG_COMMAND_INVALIDCREATUREID      = 440,
    LANG_COMMAND_LISTCREATUREMESSAGE    = 441,
    LANG_COMMAND_NOAREAFOUND            = 442,
    LANG_COMMAND_NOITEMSETFOUND         = 443,
    LANG_COMMAND_NOSKILLFOUND           = 444,
    LANG_COMMAND_NOSPELLFOUND           = 445,
    LANG_COMMAND_NOQUESTFOUND           = 446,
    LANG_COMMAND_NOCREATUREFOUND        = 447,
    LANG_COMMAND_NOGAMEOBJECTFOUND      = 448,
    LANG_COMMAND_GRAVEYARDNOEXIST       = 449,
    LANG_COMMAND_GRAVEYARDALRLINKED     = 450,
    LANG_COMMAND_GRAVEYARDLINKED        = 451,
    LANG_COMMAND_GRAVEYARDWRONGZONE     = 452,
    //                                  = 453, see LANG_PINFO_PLAYER
    LANG_COMMAND_GRAVEYARDERROR         = 454,
    LANG_COMMAND_GRAVEYARD_NOTEAM       = 455,
    LANG_COMMAND_GRAVEYARD_ANY          = 456,
    LANG_COMMAND_GRAVEYARD_ALLIANCE     = 457,
    LANG_COMMAND_GRAVEYARD_HORDE        = 458,
    LANG_COMMAND_GRAVEYARDNEAREST       = 459,
    LANG_COMMAND_ZONENOGRAVEYARDS       = 460,
    LANG_COMMAND_ZONENOGRAFACTION       = 461,
    LANG_COMMAND_TP_ALREADYEXIST        = 462,
    LANG_COMMAND_TP_ADDED               = 463,
    LANG_COMMAND_TP_ADDEDERR            = 464,
    LANG_COMMAND_TP_DELETED             = 465,
    LANG_COMMAND_NOTAXINODEFOUND        = 466,
    LANG_COMMAND_TARGET_LISTAURAS       = 467,
    LANG_COMMAND_TARGET_AURADETAIL      = 468,
    LANG_COMMAND_TARGET_LISTAURATYPE    = 469,
    LANG_COMMAND_TARGET_AURASIMPLE      = 470,

    LANG_COMMAND_QUEST_NOTFOUND         = 471,
    LANG_COMMAND_QUEST_STARTFROMITEM    = 472,
    LANG_COMMAND_QUEST_REMOVED          = 473,
    LANG_COMMAND_QUEST_REWARDED         = 474,
    LANG_COMMAND_QUEST_COMPLETE         = 475,
    LANG_COMMAND_QUEST_ACTIVE           = 476,

    LANG_COMMAND_FLYMODE_STATUS         = 477,

    LANG_COMMAND_OPCODESENT             = 478,

    LANG_COMMAND_IMPORT_SUCCESS         = 479,
    LANG_COMMAND_IMPORT_FAILED          = 480,
    LANG_COMMAND_EXPORT_SUCCESS         = 481,
    LANG_COMMAND_EXPORT_FAILED          = 482,

    LANG_COMMAND_SPELL_BROKEN           = 483,

    LANG_SET_SKILL                      = 484,
    LANG_SET_SKILL_ERROR                = 485,

    LANG_INVALID_SKILL_ID               = 486,
    LANG_LEARNING_GM_SKILLS             = 487,
    LANG_YOU_KNOWN_SPELL                = 488,
    LANG_TARGET_KNOWN_SPELL             = 489,
    LANG_UNKNOWN_SPELL                  = 490,
    LANG_FORGET_SPELL                   = 491,
    LANG_REMOVEALL_COOLDOWN             = 492,
    LANG_REMOVE_COOLDOWN                = 493,

    LANG_ADDITEM                        = 494,              //log
    LANG_ADDITEMSET                     = 495,              //log
    LANG_REMOVEITEM                     = 496,
    LANG_ITEM_CANNOT_CREATE             = 497,
    LANG_INSERT_GUILD_NAME              = 498,
    LANG_PLAYER_NOT_FOUND               = 499,
    LANG_PLAYER_IN_GUILD                = 500,
    LANG_GUILD_NOT_CREATED              = 501,
    LANG_NO_ITEMS_FROM_ITEMSET_FOUND    = 502,

    LANG_DISTANCE                       = 503,

    LANG_ITEM_SLOT                      = 504,
    LANG_ITEM_SLOT_NOT_EXIST            = 505,
    LANG_ITEM_ADDED_TO_SLOT             = 506,
    LANG_ITEM_SAVE_FAILED               = 507,
    LANG_ITEMLIST_SLOT                  = 508,
    LANG_ITEMLIST_MAIL                  = 509,
    LANG_ITEMLIST_AUCTION               = 510,

    LANG_WRONG_LINK_TYPE                = 511,
    LANG_ITEM_LIST_CHAT                 = 512,
    LANG_QUEST_LIST_CHAT                = 513,
    LANG_CREATURE_ENTRY_LIST_CHAT       = 514,
    LANG_CREATURE_LIST_CHAT             = 515,
    LANG_GO_ENTRY_LIST_CHAT             = 516,
    LANG_GO_LIST_CHAT                   = 517,
    LANG_ITEMSET_LIST_CHAT              = 518,
    LANG_TELE_LIST                      = 519,
    LANG_SPELL_LIST                     = 520,
    LANG_SKILL_LIST_CHAT                = 521,

    LANG_GAMEOBJECT_NOT_EXIST           = 522,

    LANG_GAMEOBJECT_CURRENT             = 523,              //log
    LANG_GAMEOBJECT_DETAIL              = 524,
    LANG_GAMEOBJECT_ADD                 = 525,

    LANG_MOVEGENS_LIST                  = 526,
    LANG_MOVEGENS_IDLE                  = 527,
    LANG_MOVEGENS_RANDOM                = 528,
    LANG_MOVEGENS_WAYPOINT              = 529,
    //                                  = 530, not used
    LANG_MOVEGENS_CONFUSED              = 531,
    LANG_MOVEGENS_CHASE_PLAYER          = 532,
    LANG_MOVEGENS_CHASE_CREATURE        = 533,
    LANG_MOVEGENS_CHASE_NULL            = 534,
    LANG_MOVEGENS_HOME_CREATURE         = 535,
    LANG_MOVEGENS_HOME_PLAYER           = 536,
    LANG_MOVEGENS_FLIGHT                = 537,
    LANG_MOVEGENS_UNKNOWN               = 538,

    LANG_NPCINFO_CHAR                   = 539,
    LANG_NPCINFO_LEVEL                  = 540,
    LANG_NPCINFO_HEALTH                 = 541,
    LANG_NPCINFO_FLAGS                  = 542,
    LANG_NPCINFO_LOOT                   = 543,
    LANG_NPCINFO_POSITION               = 544,
    LANG_NPCINFO_VENDOR                 = 545,
    LANG_NPCINFO_TRAINER                = 546,
    LANG_NPCINFO_DUNGEON_ID             = 547,

    //                                  = 548, see LANG_PINFO_GM_ACTIVE
    //                                  = 549, see LANG_PINFO_BANNED
    //                                  = 550, see LANG_PINFO_MUTED

    LANG_YOU_SET_EXPLORE_ALL            = 551,
    LANG_YOU_SET_EXPLORE_NOTHING        = 552,
    LANG_YOURS_EXPLORE_SET_ALL          = 553,
    LANG_YOURS_EXPLORE_SET_NOTHING      = 554,

    LANG_NPC_SETDATA                    = 555,

    //! Old ones now free:
    LANG_COMMAND_NEAR_NPC_MESSAGE       = 556,

    LANG_YOURS_LEVEL_UP                 = 557,
    LANG_YOURS_LEVEL_DOWN               = 558,
    LANG_YOURS_LEVEL_PROGRESS_RESET     = 559,
    LANG_EXPLORE_AREA                   = 560,
    LANG_UNEXPLORE_AREA                 = 561,

    LANG_UPDATE                         = 562,
    LANG_UPDATE_CHANGE                  = 563,
    LANG_TOO_BIG_INDEX                  = 564,
    LANG_SET_UINT                       = 565,              //log
    LANG_SET_UINT_FIELD                 = 566,
    LANG_SET_FLOAT                      = 567,              //log
    LANG_SET_FLOAT_FIELD                = 568,
    LANG_GET_UINT                       = 569,              //log
    LANG_GET_UINT_FIELD                 = 570,
    LANG_GET_FLOAT                      = 571,              //log
    LANG_GET_FLOAT_FIELD                = 572,
    LANG_SET_32BIT                      = 573,              //log
    LANG_SET_32BIT_FIELD                = 574,
    LANG_CHANGE_32BIT                   = 575,              //log
    LANG_CHANGE_32BIT_FIELD             = 576,

    LANG_INVISIBLE_INVISIBLE              = 577,
    LANG_INVISIBLE_VISIBLE                = 578,
    LANG_SELECTED_TARGET_NOT_HAVE_VICTIM  = 579,

    LANG_COMMAND_LEARN_ALL_DEFAULT_AND_QUEST = 580,
    LANG_COMMAND_NEAROBJMESSAGE         = 581,
    LANG_COMMAND_RAWPAWNTIMES           = 582,

    LANG_EVENT_ENTRY_LIST_CHAT          = 583,
    LANG_NOEVENTFOUND                   = 584,
    LANG_EVENT_NOT_EXIST                = 585,
    LANG_EVENT_INFO                     = 586,
    LANG_EVENT_ALREADY_ACTIVE           = 587,
    LANG_EVENT_NOT_ACTIVE               = 588,

    LANG_MOVEGENS_POINT                 = 589,
    LANG_MOVEGENS_FEAR                  = 590,
    LANG_MOVEGENS_DISTRACT              = 591,

    LANG_COMMAND_LEARN_ALL_RECIPES      = 592,
    LANG_BANLIST_ACCOUNTS               = 593,
    LANG_BANLIST_ACCOUNTS_HEADER        = 594,
    LANG_BANLIST_IPS                    = 595,
    LANG_BANLIST_IPS_HEADER             = 596,
    LANG_GMLIST                         = 597,
    LANG_GMLIST_HEADER                  = 598,
    LANG_GMLIST_EMPTY                   = 599,

    // End Level 3 list, continued at 1100

    // Battleground
    LANG_BG_A_WINS                      = 600,
    LANG_BG_H_WINS                      = 601,

    LANG_BG_WS_START_TWO_MINUTES        = 753,
    LANG_BG_WS_START_ONE_MINUTE         = 602,
    LANG_BG_WS_START_HALF_MINUTE        = 603,
    LANG_BG_WS_HAS_BEGUN                = 604,

    LANG_BG_WS_CAPTURED_HF              = 605,
    LANG_BG_WS_CAPTURED_AF              = 606,
    LANG_BG_WS_DROPPED_HF               = 607,
    LANG_BG_WS_DROPPED_AF               = 608,
    LANG_BG_WS_RETURNED_AF              = 609,
    LANG_BG_WS_RETURNED_HF              = 610,
    LANG_BG_WS_PICKEDUP_HF              = 611,
    LANG_BG_WS_PICKEDUP_AF              = 612,
    LANG_BG_WS_F_PLACED                 = 613,
    LANG_BG_WS_ALLIANCE_FLAG_RESPAWNED  = 614,
    LANG_BG_WS_HORDE_FLAG_RESPAWNED     = 615,

    LANG_BG_EY_START_TWO_MINUTES        = 755,
    LANG_BG_EY_START_ONE_MINUTE         = 636,
    LANG_BG_EY_START_HALF_MINUTE        = 637,
    LANG_BG_EY_HAS_BEGUN                = 638,

    LANG_BG_AB_ALLY                     = 650,
    LANG_BG_AB_HORDE                    = 651,
    LANG_BG_AB_NODE_STABLES             = 652,
    LANG_BG_AB_NODE_BLACKSMITH          = 653,
    LANG_BG_AB_NODE_FARM                = 654,
    LANG_BG_AB_NODE_LUMBER_MILL         = 655,
    LANG_BG_AB_NODE_GOLD_MINE           = 656,
    LANG_BG_AB_NODE_TAKEN               = 657,
    LANG_BG_AB_NODE_DEFENDED            = 658,
    LANG_BG_AB_NODE_ASSAULTED           = 659,
    LANG_BG_AB_NODE_CLAIMED             = 660,

    LANG_BG_AB_START_TWO_MINUTES        = 754,
    LANG_BG_AB_START_ONE_MINUTE         = 661,
    LANG_BG_AB_START_HALF_MINUTE        = 662,
    LANG_BG_AB_HAS_BEGUN                = 663,
    LANG_BG_AB_A_NEAR_VICTORY           = 664,
    LANG_BG_AB_H_NEAR_VICTORY           = 665,
    LANG_BG_MARK_BY_MAIL                = 666,

    LANG_BG_EY_HAS_TAKEN_A_M_TOWER      = 667,
    LANG_BG_EY_HAS_TAKEN_H_M_TOWER      = 668,
    LANG_BG_EY_HAS_TAKEN_A_D_RUINS      = 669,
    LANG_BG_EY_HAS_TAKEN_H_D_RUINS      = 670,
    LANG_BG_EY_HAS_TAKEN_A_B_TOWER      = 671,
    LANG_BG_EY_HAS_TAKEN_H_B_TOWER      = 672,
    LANG_BG_EY_HAS_TAKEN_A_F_RUINS      = 673,
    LANG_BG_EY_HAS_TAKEN_H_F_RUINS      = 674,
    LANG_BG_EY_HAS_LOST_A_M_TOWER       = 675,
    LANG_BG_EY_HAS_LOST_H_M_TOWER       = 676,
    LANG_BG_EY_HAS_LOST_A_D_RUINS       = 677,
    LANG_BG_EY_HAS_LOST_H_D_RUINS       = 678,
    LANG_BG_EY_HAS_LOST_A_B_TOWER       = 679,
    LANG_BG_EY_HAS_LOST_H_B_TOWER       = 680,
    LANG_BG_EY_HAS_LOST_A_F_RUINS       = 681,
    LANG_BG_EY_HAS_LOST_H_F_RUINS       = 682,
    LANG_BG_EY_HAS_TAKEN_FLAG           = 683,
    LANG_BG_EY_CAPTURED_FLAG_A          = 684,
    LANG_BG_EY_CAPTURED_FLAG_H          = 685,
    LANG_BG_EY_DROPPED_FLAG             = 686,
    LANG_BG_EY_RESETED_FLAG             = 687,

    LANG_ARENA_ONE_TOOLOW               = 700,
    LANG_ARENA_ONE_MINUTE               = 701,
    LANG_ARENA_THIRTY_SECONDS           = 702,
    LANG_ARENA_FIFTEEN_SECONDS          = 703,
    LANG_ARENA_HAS_BEGUN                = 704,

    LANG_WAIT_BEFORE_SPEAKING           = 705,
    LANG_NOT_EQUIPPED_ITEM              = 706,
    LANG_PLAYER_DND                     = 707,
    LANG_PLAYER_AFK                     = 708,
    LANG_PLAYER_DND_DEFAULT             = 709,
    LANG_PLAYER_AFK_DEFAULT             = 710,

    LANG_BG_QUEUE_ANNOUNCE_SELF         = 711,
    LANG_BG_QUEUE_ANNOUNCE_WORLD        = 712,
    LANG_YOUR_ARENA_LEVEL_REQ_ERROR     = 713,
//                                      = 714, see LANG_PINFO_ACC_ACCOUNT
    LANG_YOUR_BG_LEVEL_REQ_ERROR        = 715,
//                                      = 716, see LANG_PINFO_ACC_LASTLOGIN
    LANG_BG_STARTED_ANNOUNCE_WORLD      = 717,
    LANG_ARENA_QUEUE_ANNOUNCE_WORLD_JOIN= 718,
    LANG_ARENA_QUEUE_ANNOUNCE_WORLD_EXIT= 719,

    LANG_BG_GROUP_TOO_LARGE             = 720,              // "Your group is too large for this battleground. Please regroup to join."
    LANG_ARENA_GROUP_TOO_LARGE          = 721,              // "Your group is too large for this arena. Please regroup to join."
    LANG_ARENA_YOUR_TEAM_ONLY           = 722,              // "Your group has members not in your arena team. Please regroup to join."
    LANG_ARENA_NOT_ENOUGH_PLAYERS       = 723,              // "Your group does not have enough players to join this match."
    LANG_ARENA_GOLD_WINS                = 724,              // "The Gold Team wins!"
    LANG_ARENA_GREEN_WINS               = 725,              // "The Green Team wins!"
//                                      = 726, not used
    LANG_BG_GROUP_OFFLINE_MEMBER        = 727,              // "Your group has an offline member. Please remove him before joining."
    LANG_BG_GROUP_MIXED_FACTION         = 728,              // "Your group has players from the opposing faction. You can't join the battleground as a group."
    LANG_BG_GROUP_MIXED_LEVELS          = 729,              // "Your group has players from different battleground brakets. You can't join as group."
    LANG_BG_GROUP_MEMBER_ALREADY_IN_QUEUE = 730,            // "Someone in your party is already in this battleground queue. (S)he must leave it before joining as group."
    LANG_BG_GROUP_MEMBER_DESERTER       = 731,              // "Someone in your party is Deserter. You can't join as group."
    LANG_BG_GROUP_MEMBER_NO_FREE_QUEUE_SLOTS = 732,         // "Someone in your party is already in three battleground queues. You cannot join as group."

    LANG_CANNOT_TELE_TO_BG              = 733,              // "You cannot teleport to a battleground or arena map."
    LANG_CANNOT_SUMMON_TO_BG            = 734,              // "You cannot summon players to a battleground or arena map."
    LANG_CANNOT_GO_TO_BG_GM             = 735,              // "You must be in GM mode to teleport to a player in a battleground."
    LANG_CANNOT_GO_TO_BG_FROM_BG        = 736,              // "You cannot teleport to a battleground from another battleground. Please leave the current battleground first."
    LANG_DEBUG_ARENA_ON                 = 737,
    LANG_DEBUG_ARENA_OFF                = 738,
    LANG_DEBUG_BG_ON                    = 739,
    LANG_DEBUG_BG_OFF                   = 740,
    LANG_DIST_ARENA_POINTS_START        = 741,
    LANG_DIST_ARENA_POINTS_ONLINE_START = 742,
    LANG_DIST_ARENA_POINTS_ONLINE_END   = 743,
    LANG_DIST_ARENA_POINTS_TEAM_START   = 744,
    LANG_DIST_ARENA_POINTS_TEAM_END     = 745,
    LANG_DIST_ARENA_POINTS_END          = 746,
    LANG_BG_DISABLED                    = 747,
    LANG_ARENA_DISABLED                 = 748,
//                                      = 749, see LANG_PINFO_ACC_OS
    LANG_BATTLEGROUND_PREMATURE_FINISH_WARNING = 750,       // "Not enough players. This game will close in %u mins."
    LANG_BATTLEGROUND_PREMATURE_FINISH_WARNING_SECS = 751,  // "Not enough players. This game will close in %u seconds."
//                                      = 752, see LANG_PINFO_ACC_IP
//  LANG_BG_WS_START_TWO_MINUTES        = 753, - defined above
//  LANG_BG_AB_START_TWO_MINUTES        = 754, - defined above
//  LANG_BG_EY_START_TWO_MINUTES        = 755, - defined above

    // Room for BG/ARENA                = 773-784, 788-799 not used
    LANG_ARENA_TESTING                  = 785,
    LANG_AUTO_ANN                       = 786,
    LANG_ANNOUNCE_COLOR                 = 787,

    // in game strings
    LANG_PET_INVALID_NAME               = 800,
    LANG_NOT_ENOUGH_GOLD                = 801,
    LANG_NOT_FREE_TRADE_SLOTS           = 802,
    LANG_NOT_PARTNER_FREE_TRADE_SLOTS   = 803,
    LANG_YOU_NOT_HAVE_PERMISSION        = 804,
    LANG_UNKNOWN_LANGUAGE               = 805,
    LANG_NOT_LEARNED_LANGUAGE           = 806,
    LANG_NEED_CHARACTER_NAME            = 807,
    LANG_PLAYER_NOT_EXIST_OR_OFFLINE    = 808,
    LANG_ACCOUNT_FOR_PLAYER_NOT_FOUND   = 809,
    // unused                           = 810,
    LANG_GUILD_MASTER                   = 811,
    LANG_GUILD_OFFICER                  = 812,
    LANG_GUILD_VETERAN                  = 813,
    LANG_GUILD_MEMBER                   = 814,
    LANG_GUILD_INITIATE                 = 815,
    LANG_ZONE_NOFLYZONE                 = 816,

    LANG_COMMAND_CREATURETEMPLATE_NOTFOUND = 817,
    LANG_COMMAND_CREATURESTORAGE_NOTFOUND  = 818,

    LANG_CHANNEL_CITY                   = 819,

    LANG_NPCINFO_GOSSIP                 = 820,
    LANG_NPCINFO_QUESTGIVER             = 821,
    LANG_NPCINFO_TRAINER_CLASS          = 822,
    LANG_NPCINFO_TRAINER_PROFESSION     = 823,
    LANG_NPCINFO_VENDOR_AMMO            = 824,
    LANG_NPCINFO_VENDOR_FOOD            = 825,
    LANG_NPCINFO_VENDOR_POISON          = 826,
    LANG_NPCINFO_VENDOR_REAGENT         = 827,
    LANG_NPCINFO_REPAIR                 = 828,
    LANG_NPCINFO_FLIGHTMASTER           = 829,
    LANG_NPCINFO_SPIRITHEALER           = 830,
    LANG_NPCINFO_SPIRITGUIDE            = 831,
    LANG_NPCINFO_INNKEEPER              = 832,
    LANG_NPCINFO_BANKER                 = 833,
    LANG_NPCINFO_PETITIONER             = 834,
    LANG_NPCINFO_TABARDDESIGNER         = 835,
    LANG_NPCINFO_BATTLEMASTER           = 836,
    LANG_NPCINFO_AUCTIONEER             = 837,
    LANG_NPCINFO_STABLEMASTER           = 838,
    LANG_NPCINFO_GUILD_BANKER           = 839,
    LANG_NPCINFO_SPELLCLICK             = 840,
    LANG_NPCINFO_MAILBOX                = 841,
    LANG_NPCINFO_PLAYER_VEHICLE         = 842,

    // Pinfo commands
    LANG_PINFO_PLAYER                   = 453,
    LANG_PINFO_GM_ACTIVE                = 548,
    LANG_PINFO_BANNED                   = 549,
    LANG_PINFO_MUTED                    = 550,
    LANG_PINFO_ACC_ACCOUNT              = 714,
    LANG_PINFO_ACC_LASTLOGIN            = 716,
    LANG_PINFO_ACC_OS                   = 749,
    LANG_PINFO_ACC_REGMAILS             = 879,
    LANG_PINFO_ACC_IP                   = 752,
    LANG_PINFO_CHR_LEVEL_LOW            = 843,
    LANG_PINFO_CHR_RACE                 = 844,
    LANG_PINFO_CHR_ALIVE                = 845,
    LANG_PINFO_CHR_PHASE                = 846,
    LANG_PINFO_CHR_MONEY                = 847,
    LANG_PINFO_CHR_MAP                  = 848,
    LANG_PINFO_CHR_GUILD                = 849,
    LANG_PINFO_CHR_GUILD_RANK           = 850,
    LANG_PINFO_CHR_GUILD_NOTE           = 851,
    LANG_PINFO_CHR_GUILD_ONOTE          = 852,
    LANG_PINFO_CHR_PLAYEDTIME           = 853,
    LANG_PINFO_CHR_MAILS                = 854,
    LANG_PINFO_CHR_LEVEL_HIGH           = 871,

    LANG_CHARACTER_GENDER_MALE          = 855,
    LANG_CHARACTER_GENDER_FEMALE        = 856,

    LANG_ARENA_ERROR_NOT_FOUND          = 857,
    LANG_ARENA_ERROR_NAME_EXISTS        = 858,
    LANG_ARENA_ERROR_SIZE               = 859,
    LANG_ARENA_ERROR_COMBAT             = 860,
    LANG_AREAN_ERROR_NAME_NOT_FOUND     = 861,
    LANG_ARENA_ERROR_NOT_MEMBER         = 862,
    LANG_ARENA_ERROR_CAPTAIN            = 863,
    LANG_ARENA_CREATE                   = 864,
    LANG_ARENA_DISBAND                  = 865,
    LANG_ARENA_RENAME                   = 866,
    LANG_ARENA_CAPTAIN                  = 867,
    LANG_ARENA_INFO_HEADER              = 868,
    LANG_ARENA_INFO_MEMBERS             = 869,
    LANG_ARENA_LOOKUP                   = 870,
    //                                  = 871, see LANG_PINFO_CHR_LEVEL_HIGH
    LANG_COMMAND_WRONGEMAIL             = 872,
    LANG_NEW_EMAILS_NOT_MATCH           = 873,
    LANG_COMMAND_EMAIL                  = 874,
    LANG_EMAIL_TOO_LONG                 = 875,
    LANG_COMMAND_NOTCHANGEEMAIL         = 876,
    LANG_OLD_EMAIL_IS_NEW_EMAIL         = 877,
    LANG_COMMAND_EMAIL_OUTPUT           = 878,
    //                                  = 879, see LANG_PINFO_CHR_REGMAILS
    LANG_ACCOUNT_SEC_TYPE               = 880,
    LANG_RBAC_EMAIL_REQUIRED            = 881,
    // Room for in-game strings           882-999 not used

    // Level 4 (CLI only commands)
    LANG_COMMAND_EXIT                   = 1000,
    LANG_ACCOUNT_DELETED                = 1001,
    LANG_ACCOUNT_NOT_DELETED_SQL_ERROR  = 1002,
    LANG_ACCOUNT_NOT_DELETED            = 1003,
    LANG_ACCOUNT_CREATED                = 1004,
    LANG_ACCOUNT_NAME_TOO_LONG          = 1005,
    LANG_ACCOUNT_ALREADY_EXIST          = 1006,
    LANG_ACCOUNT_NOT_CREATED_SQL_ERROR  = 1007,
    LANG_ACCOUNT_NOT_CREATED            = 1008,
    LANG_CHARACTER_DELETED              = 1009,
    LANG_ACCOUNT_LIST_HEADER            = 1010,
    LANG_ACCOUNT_LIST_ERROR             = 1011,
    LANG_ACCOUNT_LIST_BAR               = 1012,
    LANG_ACCOUNT_LIST_LINE              = 1013,
    LANG_ACCOUNT_LIST_EMPTY             = 1014,
    LANG_ACCOUNT_LIST_BAR_HEADER        = 1015,
    LANG_CHARACTER_DELETED_LIST_HEADER  = 1016,
    LANG_CHARACTER_DELETED_LIST_LINE_CONSOLE = 1017,
    LANG_CHARACTER_DELETED_LIST_BAR     = 1018,
    LANG_CHARACTER_DELETED_LIST_EMPTY   = 1019,
    LANG_CHARACTER_DELETED_RESTORE      = 1020,
    LANG_CHARACTER_DELETED_DELETE       = 1021,
    LANG_CHARACTER_DELETED_ERR_RENAME   = 1022,
    LANG_CHARACTER_DELETED_SKIP_ACCOUNT = 1023,
    LANG_CHARACTER_DELETED_SKIP_FULL    = 1024,
    LANG_CHARACTER_DELETED_SKIP_NAME    = 1025,
    LANG_CHARACTER_DELETED_LIST_LINE_CHAT = 1026,
    LANG_SQLDRIVER_QUERY_LOGGING_ENABLED  = 1027,
    LANG_SQLDRIVER_QUERY_LOGGING_DISABLED = 1028,
    LANG_ACCOUNT_INVALID_BNET_NAME      = 1029, // master branch ONLY
    LANG_ACCOUNT_USE_BNET_COMMANDS      = 1030, // master branch enum value name but different text in DB
    LANG_ACCOUNT_PASS_TOO_LONG          = 1031, // master branch ONLY
    LANG_ACCOUNT_CREATED_BNET_WITH_GAME = 1032, // master branch ONLY
    LANG_ACCOUNT_CREATED_BNET           = 1033, // master branch ONLY
    LANG_ACCOUNT_BNET_LIST_HEADER       = 1034, // master branch ONLY
    LANG_ACCOUNT_BNET_LIST_NO_ACCOUNTS  = 1035, // master branch ONLY
    // Room for more level 4              1036-1099 not used

    // Level 3 (continue)
    LANG_ACCOUNT_SETADDON               = 1100,
    LANG_MOTD_NEW                       = 1101,
    LANG_SENDMESSAGE                    = 1102,
    LANG_EVENT_ENTRY_LIST_CONSOLE       = 1103,
    LANG_CREATURE_ENTRY_LIST_CONSOLE    = 1104,
    LANG_ITEM_LIST_CONSOLE              = 1105,
    LANG_ITEMSET_LIST_CONSOLE           = 1106,
    LANG_GO_ENTRY_LIST_CONSOLE          = 1107,
    LANG_QUEST_LIST_CONSOLE             = 1108,
    LANG_SKILL_LIST_CONSOLE             = 1109,
    LANG_CREATURE_LIST_CONSOLE          = 1110,
    LANG_GO_LIST_CONSOLE                = 1111,
    LANG_FILE_OPEN_FAIL                 = 1112,
    LANG_ACCOUNT_CHARACTER_LIST_FULL    = 1113,
    LANG_DUMP_BROKEN                    = 1114,
    LANG_INVALID_CHARACTER_NAME         = 1115,
    LANG_INVALID_CHARACTER_GUID         = 1116,
    LANG_CHARACTER_GUID_IN_USE          = 1117,
    LANG_ITEMLIST_GUILD                 = 1118,
    LANG_MUST_MALE_OR_FEMALE            = 1119,
    LANG_YOU_CHANGE_GENDER              = 1120,
    LANG_YOUR_GENDER_CHANGED            = 1121,
    LANG_SKILL_VALUES                   = 1122,
    LANG_NO_PET_FOUND                   = 1123,
    LANG_WRONG_PET_TYPE                 = 1124,
    LANG_COMMAND_LEARN_PET_TALENTS      = 1125,
    LANG_RESET_PET_TALENTS              = 1126,
    LANG_RESET_PET_TALENTS_ONLINE       = 1127,
    LANG_TAXINODE_ENTRY_LIST_CHAT       = 1128,
    LANG_TAXINODE_ENTRY_LIST_CONSOLE    = 1129,
    LANG_COMMAND_EXPORT_DELETED_CHAR    = 1130,
    LANG_BANLIST_MATCHINGCHARACTER      = 1131,
    LANG_BANLIST_CHARACTERS             = 1132,
    LANG_BANLIST_CHARACTERS_HEADER      = 1133,
    LANG_ALLOW_TICKETS                  = 1134,
    LANG_DISALLOW_TICKETS               = 1135,
    LANG_CHAR_NOT_BANNED                = 1136,
    LANG_DEV_ON                         = 1137,
    LANG_DEV_OFF                        = 1138,
    LANG_MOVEGENS_FOLLOW_PLAYER         = 1139,
    LANG_MOVEGENS_FOLLOW_CREATURE       = 1140,
    LANG_MOVEGENS_FOLLOW_NULL           = 1141,
    LANG_MOVEGENS_EFFECT                = 1142,
    LANG_MOVEFLAGS_GET                  = 1143,
    LANG_MOVEFLAGS_SET                  = 1144,
    LANG_GROUP_ALREADY_IN_GROUP         = 1145,
    LANG_GROUP_PLAYER_JOINED            = 1146,
    LANG_GROUP_NOT_IN_GROUP             = 1147,
    LANG_GROUP_FULL                     = 1148,
    LANG_GROUP_TYPE                     = 1149,
    LANG_GROUP_PLAYER_NAME_GUID         = 1150,
    LANG_LIST_MAIL_HEADER               = 1151,
    LANG_LIST_MAIL_INFO_1               = 1152,
    LANG_LIST_MAIL_INFO_2               = 1153,
    LANG_LIST_MAIL_INFO_3               = 1154,
    LANG_LIST_MAIL_INFO_ITEM            = 1155,
    LANG_LIST_MAIL_NOT_FOUND            = 1156,
    LANG_AHBOT_RELOAD_OK                = 1157,
    LANG_AHBOT_STATUS_BAR_CONSOLE       = 1158,
    LANG_AHBOT_STATUS_MIDBAR_CONSOLE    = 1159,
    LANG_AHBOT_STATUS_TITLE1_CONSOLE    = 1160,
    LANG_AHBOT_STATUS_TITLE1_CHAT       = 1161,
    LANG_AHBOT_STATUS_FORMAT_CONSOLE    = 1162,
    LANG_AHBOT_STATUS_FORMAT_CHAT       = 1163,
    LANG_AHBOT_STATUS_ITEM_COUNT        = 1164,
    LANG_AHBOT_STATUS_ITEM_RATIO        = 1165,
    LANG_AHBOT_STATUS_TITLE2_CONSOLE    = 1166,
    LANG_AHBOT_STATUS_TITLE2_CHAT       = 1167,
    LANG_AHBOT_QUALITY_GRAY             = 1168,
    LANG_AHBOT_QUALITY_WHITE            = 1169,
    LANG_AHBOT_QUALITY_GREEN            = 1170,
    LANG_AHBOT_QUALITY_BLUE             = 1171,
    LANG_AHBOT_QUALITY_PURPLE           = 1172,
    LANG_AHBOT_QUALITY_ORANGE           = 1173,
    LANG_AHBOT_QUALITY_YELLOW           = 1174,
    LANG_AHBOT_ITEMS_AMOUNT             = 1175,
    LANG_AHBOT_ITEMS_RATIO              = 1176,
    LANG_GUILD_INFO_NAME                = 1177,
    LANG_GUILD_INFO_GUILD_MASTER        = 1178,
    LANG_GUILD_INFO_CREATION_DATE       = 1179,
    LANG_GUILD_INFO_MEMBER_COUNT        = 1180,
    LANG_GUILD_INFO_BANK_GOLD           = 1181,
    LANG_GUILD_INFO_MOTD                = 1182,
    LANG_GUILD_INFO_EXTRA_INFO          = 1183,
    LANG_CHANGEACCOUNT_SUCCESS          = 1184,             // log
    LANG_GROUP_NOT_IN_RAID_GROUP        = 1185,
    LANG_GROUP_ROLE_CHANGED             = 1186,
    LANG_LEADER_CANNOT_BE_ASSISTANT     = 1187,
    // Room for more level 3              1188-1198 not used

    // Debug commands
    LANG_DO_NOT_USE_6X_DEBUG_AREATRIGGER_LEFT = 1999,
    LANG_CINEMATIC_NOT_EXIST            = 1200,
    LANG_MOVIE_NOT_EXIST                = 1201,
    LANG_DEBUG_AREATRIGGER_ON           = 1202,
    LANG_DEBUG_AREATRIGGER_OFF          = 1203,
    LANG_DEBUG_AREATRIGGER_REACHED      = 1204,

    // Isle of Conquest
    LANG_BG_IC_START_TWO_MINUTES        = 1205,
    LANG_BG_IC_START_ONE_MINUTE         = 1206,
    LANG_BG_IC_START_HALF_MINUTE        = 1207,
    LANG_BG_IC_HAS_BEGUN                = 1208,
    LANG_BG_IC_ALLIANCE_KEEP            = 1209,
    LANG_BG_IC_HORDE_KEEP               = 1210,
    LANG_BG_IC_TEAM_WINS                = 1211,
    LANG_BG_IC_WEST_GATE_DESTROYED      = 1212,
    LANG_BG_IC_EAST_GATE_DESTROYED      = 1213,
    LANG_BG_IC_SOUTH_GATE_DESTROYED     = 1214,
    LANG_BG_IC_NORTH_GATE_DESTROYED     = 1215,
    LANG_BG_IC_TEAM_ASSAULTED_NODE_1    = 1216,
    LANG_BG_IC_TEAM_DEFENDED_NODE       = 1217,
    LANG_BG_IC_TEAM_ASSAULTED_NODE_2    = 1218,
    LANG_BG_IC_TEAM_HAS_TAKEN_NODE      = 1219,
    LANG_BG_IC_WORKSHOP                 = 1220,
    LANG_BG_IC_DOCKS                    = 1221,
    LANG_BG_IC_REFINERY                 = 1222,
    LANG_BG_IC_QUARRY                   = 1223,
    LANG_BG_IC_HANGAR                   = 1224,
    //                                    1225-1299
    LANG_BG_IC_ALLIANCE                 = 1300,
    LANG_BG_IC_HORDE                    = 1301,

    //                                    1302-1325
    // AV
    LANG_BG_AV_START_ONE_MINUTE         = 1326,
    LANG_BG_AV_START_HALF_MINUTE        = 1327,
    LANG_BG_AV_HAS_BEGUN                = 1328,
    LANG_BG_AV_A_NEAR_LOSE              = 1329,
    LANG_BG_AV_H_NEAR_LOSE              = 1330,
    //                                    1331-1332
    LANG_BG_AV_START_TWO_MINUTES        = 1333,
    // FREE IDS                           1334-1999

    // Ticket Strings 2000-2030
    LANG_COMMAND_TICKETNEW              = 2000,
    LANG_COMMAND_TICKETUPDATED          = 2001,
    LANG_COMMAND_TICKETPLAYERABANDON    = 2002,
    LANG_COMMAND_TICKETCLOSED           = 2003,
    LANG_COMMAND_TICKETDELETED          = 2004,
    LANG_COMMAND_TICKETNOTEXIST         = 2005,
    LANG_COMMAND_TICKETCLOSEFIRST       = 2006,
    LANG_COMMAND_TICKETALREADYASSIGNED  = 2007,
    LANG_COMMAND_TICKETRELOAD           = 2008,
    LANG_COMMAND_TICKETSHOWLIST         = 2009,
    LANG_COMMAND_TICKETSHOWONLINELIST   = 2010,
    LANG_COMMAND_TICKETSHOWCLOSEDLIST   = 2011,
    LANG_COMMAND_TICKETASSIGNERROR_A    = 2012,
    LANG_COMMAND_TICKETASSIGNERROR_B    = 2013,
    LANG_COMMAND_TICKETNOTASSIGNED      = 2014,
    LANG_COMMAND_TICKETUNASSIGNSECURITY = 2015,
    LANG_COMMAND_TICKETCANNOTCLOSE      = 2016,
    LANG_COMMAND_TICKETLISTGUID         = 2017,
    LANG_COMMAND_TICKETLISTNAME         = 2018,
    LANG_COMMAND_TICKETLISTAGE          = 2019,
    LANG_COMMAND_TICKETLISTASSIGNEDTO   = 2020,
    LANG_COMMAND_TICKETLISTUNASSIGNED   = 2021,
    LANG_COMMAND_TICKETLISTMESSAGE      = 2022,
    LANG_COMMAND_TICKETLISTCOMMENT      = 2023,
    LANG_COMMAND_TICKETLISTADDCOMMENT   = 2024,
    LANG_COMMAND_TICKETLISTAGECREATE    = 2025,
    LANG_COMMAND_TICKETSHOWESCALATEDLIST = 2026,
    LANG_COMMAND_TICKETPENDING          = 2027,
    LANG_COMMAND_TICKETRESET            = 2028,
    LANG_COMMAND_TICKETLISTRESPONSE     = 2029,
    LANG_COMMAND_TICKETCOMPLETED        = 2030,

    // Trinity strings                    5000-9999
    LANG_COMMAND_FREEZE                 = 5000,
    LANG_COMMAND_FREEZE_ERROR           = 5001,
    LANG_COMMAND_FREEZE_WRONG           = 5002,
    LANG_COMMAND_UNFREEZE               = 5003,
    LANG_COMMAND_NO_FROZEN_PLAYERS      = 5004,
    LANG_COMMAND_LIST_FREEZE            = 5005,
    LANG_COMMAND_PERMA_FROZEN_PLAYER    = 5006,
    //                                  = 5007, unused
    LANG_INSTANCE_CLOSED                = 5008,
    LANG_COMMAND_PLAYED_TO_ALL          = 5009,
    LANG_NPCINFO_LINKGUID               = 5010,
    LANG_TELEPORTED_TO_BY_CONSOLE       = 5011,
    // for command lookup map
    LANG_COMMAND_NOMAPFOUND             = 5012,
    LANG_CONTINENT                      = 5013,
    LANG_INSTANCE                       = 5014,
    LANG_BATTLEGROUND                   = 5015,
    LANG_ARENA                          = 5016,
    LANG_RAID                           = 5017,
                                        //= 5018,
    LANG_COMMAND_TEMP_FROZEN_PLAYER     = 5019,
    LANG_NPCINFO_PHASEMASK              = 5020,
    LANG_NPCINFO_ARMOR                  = 5021,
    LANG_CHANNEL_ENABLE_OWNERSHIP       = 5022,
    LANG_CHANNEL_DISABLE_OWNERSHIP      = 5023,
    LANG_GOINFO_ENTRY                   = 5024,
    LANG_GOINFO_TYPE                    = 5025,
    LANG_GOINFO_DISPLAYID               = 5026,
    LANG_GOINFO_NAME                    = 5027,
    LANG_GOINFO_LOOTID                  = 5028,
    LANG_COMMAND_LOOKUP_MAX_RESULTS     = 5029,
    LANG_UNAUTHORIZED                   = 5030,
    LANG_NPCINFO_AIINFO                 = 5031,
    LANG_COMMAND_NO_BATTLEGROUND_FOUND  = 5032,
    LANG_COMMAND_NO_ACHIEVEMENT_CRITERIA_FOUND = 5033,
    LANG_COMMAND_NO_OUTDOOR_PVP_FORUND  = 5034,
    LANG_NO_REASON                      = 5035,
    LANG_NPCINFO_EQUIPMENT              = 5036,
    LANG_NPCINFO_MECHANIC_IMMUNE        = 5037,
    LANG_NPCINFO_UNIT_FIELD_FLAGS       = 5038,
    LANG_CONSOLE                        = 5039,
    LANG_CHARACTER                      = 5040,
    LANG_PERMANENTLY                    = 5041,
    LANG_GPS_POSITION_OUTDOORS          = 5042,
    LANG_GPS_POSITION_INDOORS           = 5043,
    LANG_GPS_NO_VMAP                    = 5044,

    // Instance commands
    LANG_COMMAND_LIST_BIND_INFO         = 5045,
    LANG_COMMAND_LIST_BIND_PLAYER_BINDS = 5046,
    LANG_COMMAND_LIST_BIND_GROUP_BINDS  = 5047,
    LANG_COMMAND_INST_UNBIND_UNBINDING  = 5048,
    LANG_COMMAND_INST_UNBIND_UNBOUND    = 5049,
    LANG_COMMAND_INST_STAT_LOADED_INST  = 5050,
    LANG_COMMAND_INST_STAT_PLAYERS_IN   = 5051,
    LANG_COMMAND_INST_STAT_SAVES        = 5052,
    LANG_COMMAND_INST_STAT_PLAYERSBOUND = 5053,
    LANG_COMMAND_INST_STAT_GROUPSBOUND  = 5054,
    LANG_NOT_DUNGEON                    = 5055, // Map is not a dungeon.
    LANG_NO_INSTANCE_DATA               = 5056, // Map has no instance data.
    LANG_COMMAND_INST_SET_BOSS_STATE    = 5057,
    LANG_COMMAND_INST_GET_BOSS_STATE    = 5058,

    // Mutehistory commands
    LANG_COMMAND_MUTEHISTORY            = 5059,
    LANG_COMMAND_MUTEHISTORY_EMPTY      = 5060,
    LANG_COMMAND_MUTEHISTORY_OUTPUT     = 5061,

    // Scene debugs commands [Master only, not used in 3.3.5]
    /*LANG_COMMAND_SCENE_DEBUG_ON         = 5062,
    LANG_COMMAND_SCENE_DEBUG_OFF        = 5063,
    LANG_COMMAND_SCENE_DEBUG_PLAY       = 5064,
    LANG_COMMAND_SCENE_DEBUG_TRIGGER    = 5065,
    LANG_COMMAND_SCENE_DEBUG_CANCEL     = 5066,
    LANG_COMMAND_SCENE_DEBUG_COMPLETE   = 5067,
    LANG_DEBUG_SCENE_OBJECT_LIST        = 5068,
    LANG_DEBUG_SCENE_OBJECT_DETAIL      = 5069, */

    // Strings added for dynamic_spawning
    LANG_SPAWNINFO_GROUP_ID             = 5070,
    LANG_SPAWNINFO_COMPATIBILITY_MODE   = 5071,
    LANG_SPAWNINFO_GUIDINFO             = 5072,
    LANG_SPAWNINFO_SPAWNID_LOCATION     = 5073,
    LANG_SPAWNINFO_DISTANCEFROMPLAYER   = 5074,
    LANG_SPAWNGROUP_BADGROUP            = 5075,
    LANG_SPAWNGROUP_SPAWNCOUNT          = 5076,
    LANG_LIST_RESPAWNS_RANGE            = 5077,
    LANG_LIST_RESPAWNS_ZONE             = 5078,
    LANG_LIST_RESPAWNS_LISTHEADER       = 5079,
    LANG_LIST_RESPAWNS_OVERDUE          = 5080,
    LANG_LIST_RESPAWNS_CREATURES        = 5081,
    LANG_LIST_RESPAWNS_GAMEOBJECTS      = 5082,

    // Room for more Trinity strings      5084-6603

    // Level requirement notifications
    LANG_SAY_REQ                        = 6604,
    LANG_WHISPER_REQ                    = 6605,
    LANG_CHANNEL_REQ                    = 6606,
    LANG_AUCTION_REQ                    = 6607,
    LANG_TICKET_REQ                     = 6608,
    LANG_TRADE_REQ                      = 6609,
    LANG_TRADE_OTHER_REQ                = 6610,
    LANG_MAIL_SENDER_REQ                = 6611,
    LANG_MAIL_RECEIVER_REQ              = 6612,

    // Used for GM Announcements
    LANG_GM_BROADCAST                    = 6613,
    LANG_GM_NOTIFY                       = 6614,
    LANG_GM_ANNOUNCE_COLOR               = 6615,

    LANG_GM_SILENCE                      = 6616,              // "Silence is ON for %s" - Spell 1852

    LANG_WORLD_CLOSED                    = 7523,
    LANG_WORLD_OPENED                    = 7524,

    LANG_LFG_PLAYER_INFO                = 9980,
    LANG_LFG_GROUP_INFO                 = 9981,
    LANG_LFG_NOT_IN_GROUP               = 9982,
    LANG_LFG_CLEAN                      = 9983,
    LANG_LFG_OPTIONS                    = 9984,
    LANG_LFG_OPTIONS_CHANGED            = 9985,
    LANG_LFG_STATE_NONE                 = 9986,
    LANG_LFG_STATE_ROLECHECK            = 9987,
    LANG_LFG_STATE_QUEUED               = 9988,
    LANG_LFG_STATE_PROPOSAL             = 9989,
    LANG_LFG_STATE_BOOT                 = 9990,
    LANG_LFG_STATE_DUNGEON              = 9991,
    LANG_LFG_STATE_FINISHED_DUNGEON     = 9992,
    LANG_LFG_STATE_RAIDBROWSER          = 9993,
    LANG_LFG_ROLE_TANK                  = 9994,
    LANG_LFG_ROLE_HEALER                = 9995,
    LANG_LFG_ROLE_DAMAGE                = 9996,
    LANG_LFG_ROLE_LEADER                = 9997,
    LANG_LFG_ROLE_NONE                  = 9998,
    LANG_LFG_ERROR                      = 9999,

    // Use for not-in-offcial-sources patches
    //                                    10000-10999
    // opvp si
    LANG_OPVP_SI_CAPTURE_H              = 10049,
    LANG_OPVP_SI_CAPTURE_A              = 10050,
    // opvp gossips
    LANG_OPVP_EP_FLIGHT_NPT             = 10051,
    LANG_OPVP_EP_FLIGHT_EWT             = 10052,
    LANG_OPVP_EP_FLIGHT_CGT             = 10053,
    LANG_OPVP_ZM_GOSSIP_ALLIANCE        = 10054,
    LANG_OPVP_ZM_GOSSIP_HORDE           = 10055,

    LANG_BG_SA_START_TWO_MINUTES            = 10056,
    LANG_BG_SA_START_ONE_MINUTE             = 10057,
    LANG_BG_SA_START_HALF_MINUTE            = 10058,
    // unused                                 10059-10062
    LANG_BG_SA_ALLIANCE_CAPTURED_RELIC      = 10063, //The Alliance captured the titan portal!
    LANG_BG_SA_HORDE_CAPTURED_RELIC         = 10064, //The Horde captured the titan portal!
    LANG_BG_SA_ROUND_TWO_ONE_MINUTE         = 10065, //Round 2 of the Battle for the Strand of the Ancients begins in 1 minute.
    LANG_BG_SA_ROUND_TWO_START_HALF_MINUTE  = 10066, //Round 2 begins in 30 seconds. Prepare yourselves!

    // Use for custom patches             11000-11999
    LANG_AUTO_BROADCAST                 = 11000,
    LANG_INVALID_REALMID                = 11001,
    // Prepatch by LordPsyan
    // 01
    // 02
    // 03
    // 04
    // 05
    // 06
    // 07
    // 08
    // 09
    // 10
    // 11
    // 12
    // 13
    // 14
    // 15
    // 16
    // 17
    // 18
    // 19
    // 20
    // Visit http://www.realmsofwarcraft.com/bb for forums and information
    //
    // End of prepatch
    // Show Kick in world
    LANG_COMMAND_KICKMESSAGE_WORLD = 11002,

    // Show Mute in world
    LANG_COMMAND_MUTEMESSAGE_WORLD = 11003,

    // Show Ban in world
    LANG_BAN_CHARACTER_YOUBANNEDMESSAGE_WORLD     = 11004,
    LANG_BAN_CHARACTER_YOUPERMBANNEDMESSAGE_WORLD = 11005,
    LANG_BAN_ACCOUNT_YOUBANNEDMESSAGE_WORLD       = 11006,
    LANG_BAN_ACCOUNT_YOUPERMBANNEDMESSAGE_WORLD   = 11007,

    LANG_NPCINFO_INHABIT_TYPE                     = 11008,
    LANG_NPCINFO_FLAGS_EXTRA                      = 11009,
    LANG_INSTANCE_LOGIN_GAMEMASTER_EXCEPTION      = 11010,

    LANG_CREATURE_NO_INTERIOR_POINT_FOUND         = 11011,
    LANG_CREATURE_MOVEMENT_NOT_BOUNDED            = 11012,
    LANG_CREATURE_MOVEMENT_MAYBE_UNBOUNDED        = 11013,
    LANG_INSTANCE_BIND_MISMATCH                   = 11014,
    LANG_CREATURE_NOT_AI_ENABLED                  = 11015,
    LANG_SELECT_PLAYER_OR_PET                     = 11016,
    LANG_SHUTDOWN_DELAYED                         = 11017,
    // Prepatch by LordPsyan
    // 21
    // 22
    // 23
    // 24
    // 25
    // 26
    // 27
    // 28
    // 29
    // 30
    // 31
    // 32
    // 33
    // 34
    // 35
    // 36
    // 37
    // 38
    // 39
    // 40
    // Visit http://www.realmsofwarcraft.com/bb for forums and information
    //
    // End of prepatch
    LANG_SHUTDOWN_CANCELLED                       = 11018
};
#endif
