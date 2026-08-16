#ifndef OCEANFACTORY_H
#define OCEANFACTORY_H

class OceanFactory : BiomeFactory {


public:
	Settlement* createSettlement();

	Work* createWork();

	Food* createFood();

	Lodging* createLodging();

	Market* createMarket();
};

#endif
