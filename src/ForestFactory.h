#ifndef FORESTFACTORY_H
#define FORESTFACTORY_H

#include "BiomeFactory.h"
#include "Settlement.h"
#include "Work.h"
#include "Food.h"
#include "Lodging.h"
#include "Market.h"

class ForestFactory : BiomeFactory {


public:
	Settlement* createSettlement();

	Work* createWork();

	Food* createFood();

	Lodging* createLodging();

	Market* createMarket();
};

#endif
