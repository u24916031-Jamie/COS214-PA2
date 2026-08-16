#ifndef OCEANMARKET_H
#define OCEANMARKET_H


#include "Market.h"
#include "Traveller.h"


class OceanMarket : Market {


public:
	OceanMarket(std::string name, std::string description, std::string shopMessage) : Market(name, description, shopMessage) {};

	void shop(Traveller& traveller) {
		std::cout << m_shopMessage << std::endl;
	}
	virtual ~OceanMarket() {};
};

#endif
