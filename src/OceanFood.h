#ifndef OCEANFOOD_H
#define OCEANFOOD_H

#include "Food.h"
#include "Traveller.h"

class OceanFood : public Food {


public:
	OceanFood(std::string name, std::string description, std::string eatMessage) : Food(name, description, eatMessage) {};

	void eat(Traveller& traveller) {
		std::cout << m_eatMessage << std::endl;
	}
	virtual ~OceanFood() {};
};

#endif
