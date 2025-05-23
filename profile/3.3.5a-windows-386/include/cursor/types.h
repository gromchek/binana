#ifndef CURSOR_TYPES_H
#define CURSOR_TYPES_H

DECLARE_ENUM(CURSORITEMTYPE);
DECLARE_ENUM(CURSORMODE);

enum CURSORITEMTYPE {
  CURSOR_EMPTY = 0,
  CURSOR_ITEM = 1,
  CURSOR_MONEY = 2,
  CURSOR_SPELL = 3,
  NUM_CURSOR_ITEM_TYPES = 4
};

enum CURSORMODE {
  NO_CURSOR = 0,
  POINT_CURSOR = 1,
  CAST_CURSOR = 2,
  BUY_CURSOR = 3,
  ATTACK_CURSOR = 4,
  INTERACT_CURSOR = 5,
  SPEAK_CURSOR = 6,
  INSPECT_CURSOR = 7,
  PICKUP_CURSOR = 8,
  TAXI_CURSOR = 9,
  TRAINER_CURSOR = 10,
  MINE_CURSOR = 11,
  SKIN_CURSOR = 12,
  GATHER_CURSOR = 13,
  LOCK_CURSOR = 14,
  MAIL_CURSOR = 15,
  LOOT_ALL_CURSOR = 16,
  REPAIR_CURSOR = 17,
  REPAIRNPC_CURSOR = 18,
  ITEM_CURSOR = 19,
  SKIN_HORDE_CURSOR = 20,
  SKIN_ALLIANCE_CURSOR = 21,
  INNKEEPER_CURSOR = 22,
  QUEST_CURSOR = 23,
  QUEST_REPEATABLE_CURSOR = 24,
  QUEST_TURNIN_CURSOR = 25,
  VEHICLE_CURSOR = 26,
  POINT_ERROR_CURSOR = 27,
  CAST_ERROR_CURSOR = 28,
  BUY_ERROR_CURSOR = 29,
  ATTACK_ERROR_CURSOR = 30,
  INTERACT_ERROR_CURSOR = 31,
  SPEAK_ERROR_CURSOR = 32,
  INSPECT_ERROR_CURSOR = 33,
  PICKUP_ERROR_CURSOR = 34,
  TAXI_ERROR_CURSOR = 35,
  TRAINER_ERROR_CURSOR = 36,
  MINE_ERROR_CURSOR = 37,
  SKIN_ERROR_CURSOR = 38,
  GATHER_ERROR_CURSOR = 39,
  LOCK_ERROR_CURSOR = 40,
  MAIL_ERROR_CURSOR = 41,
  LOOT_ALL_ERROR_CURSOR = 42,
  REPAIR_ERROR_CURSOR = 43,
  REPAIRNPC_ERROR_CURSOR = 44,
  ITEM_ERROR_CURSOR = 45,
  SKIN_HORDE_ERROR_CURSOR = 46,
  SKIN_ALLIANCE_ERROR_CURSOR = 47,
  INNKEEPER_ERROR_CURSOR = 48,
  QUEST_ERROR_CURSOR = 49,
  QUEST_REPEATABLE_ERROR_CURSOR = 50,
  QUEST_TURNIN_ERROR_CURSOR = 51,
  VEHICLE_ERROR_CURSOR = 52,
  NUM_CURSOR_MODES = 53
};

#endif
