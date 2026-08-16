#ifndef OCEANFACTORY_H
#define OCEANFACTORY_H
#include "BiomeFactory.h"
#include "Settlement.h"
#include "Work.h"
#include "Food.h"
#include "Lodging.h"
#include "Market.h"
class OceanFactory : BiomeFactory {


public:
	Settlement* createSettlement();

	Work* createWork();

	Food* createFood();

	Lodging* createLodging();

	Market* createMarket();
};

#endif
