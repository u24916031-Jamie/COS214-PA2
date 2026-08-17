#ifndef FORESTMARKET_H
#define FORESTMARKET_H

#include "Market.h"
#include "Traveller.h"

class ForestMarket : public Market {


public:
	ForestMarket(std::string name, std::string description, std::string message) : Market(name, description, message) {};

	void shop(Traveller& traveller) {
		std::cout << m_shopMessage << std::endl;
	}
	virtual ~ForestMarket() {};
};

#endif
