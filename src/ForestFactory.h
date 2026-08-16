#ifndef FORESTFACTORY_H
#define FORESTFACTORY_H

class ForestFactory : BiomeFactory {


public:
	Settlement* createSettlement();

	Work* createWork();

	Food* createFood();

	Lodging* createLodging();

	Market* createMarket();
};

#endif
