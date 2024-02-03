#include <vector>

#include "DataLinkLayer.h"

class DummyDataLinkLayer : public DataLinkLayer
{
public:
  DummyDataLinkLayer(DataLinkLayerConfig dataLinkLayerConfig);
  void send(uint8_t * payload, uint8_t dlc) override;
  void receive(uint8_t * payload, uint8_t & dlc) override;
  std::vector<uint8_t> getTxMessage(uint32_t index);
  std::vector<uint8_t> addRxMessage(uint32_t index);

private:
  std::vector<std::vector<uint8_t> > _txMessages;
  std::vector<std::vector<uint8_t> > _rxMessages;
};