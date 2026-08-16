#ifndef OCEANMARKET_H
#define OCEANMARKET_H


#include "Market.h"
#include "Traveller.h"


class OceanMarket : Market {


public:
	void shop(Traveller& traveller);
};

#endif
