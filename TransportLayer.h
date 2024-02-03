#ifndef TRANSPORT_LAYER_H
#define TRANSPORT_LAYER_H

#include "DataLinkLayer.h"

class TransportLayer
{
public:
  TransportLayer (DataLinkLayer &dataLinkLayer);
  void send (uint8_t *payload, uint32_t length);
  void receive (uint8_t *payload, uint32_t &length);

private:
  DataLinkLayer &_dataLinkLayer;
};

#endif