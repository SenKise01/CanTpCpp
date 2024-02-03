#ifndef CAN_UTILS_H
#define CAN_UTILS_H

#include <stdint.h>

struct CanUtils
{
  static uint32_t DlcToLength(uint8_t dlc);
};

#endif