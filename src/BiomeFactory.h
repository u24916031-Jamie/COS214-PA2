#ifndef BIOMEFACTORY_H
#define BIOMEFACTORY_H


#include "Settlement.h"
class BiomeFactory {


public:
	virtual Settlement* createCity() = 0;
	virtual Settlement* createWork() = 0;
	virtual Settlement* createFood() = 0;
	virtual Settlement* createLodging() = 0;
	virtual Settlement* createMarket() = 0;
};

#endif
