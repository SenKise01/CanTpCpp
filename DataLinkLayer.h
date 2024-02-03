#ifndef DATA_LINK_LAYER_H
#define DATA_LINK_LAYER_H

#include "DataLinkLayerConfig.h"
#include <stdint.h>

class DataLinkLayer
{
public:
  DataLinkLayer (DataLinkLayerConfig dataLinkLayerConfig);
  virtual void send (uint8_t *payload, uint8_t dlc) = 0;
  virtual void receive (uint8_t *payload, uint8_t &dlc) = 0;

protected:
  DataLinkLayerConfig _dataLinkLayerConfig;
};

#endif