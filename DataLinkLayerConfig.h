#ifndef DATA_LINK_LAYER_CONFIG_H
#define DATA_LINK_LAYER_CONFIG_H

#include <stdint.h>

enum class DataLinkLayerType
{
  Can,
  CanFd,
  Flexray
};

struct DataLinkLayerConfig
{
  DataLinkLayerType type;
  uint8_t maxLength;
  bool timestampsEnabled;
};

#endif