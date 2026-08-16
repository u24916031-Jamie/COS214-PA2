#ifndef BIOMEFACTORY_H
#define BIOMEFACTORY_H

class BiomeFactory {


public:
	Settlement* createSettlement();

	Work* createWork();

	Food* createFood();

	Lodging* createLodging();

	Market* createMarket();
};

#endif
