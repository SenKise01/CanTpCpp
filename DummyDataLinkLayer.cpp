#include "DummyDataLinkLayer.h"

DummyDataLinkLayer::DummyDataLinkLayer(DataLinkLayerConfig dataLinkLayerConfig)
: _dataLinkLayerConfig(dataLinkLayerConfig)
{
}

void DummyDataLinkLayer::send(uint8_t * payload, uint8_t dlc) {}

void DummyDataLinkLayer::receive(uint8_t * payload, uint8_t & dlc) {}

std::vector<uint8_t> DummyDataLinkLayer::getTxMessage(uint32_t index) {}

std::vector<uint8_t> DummyDataLinkLayer::addRxMessage(uint32_t index) {}