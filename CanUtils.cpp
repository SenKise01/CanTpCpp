#include "CanUtils.h"

uint32_t CanUtils::DlcToLength(uint8_t dlc)
{
  switch (dlc) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: return dlc;
    case 9: return
  }
}