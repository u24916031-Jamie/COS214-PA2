#ifndef FORESTFOOD_H
#define FORESTFOOD_H

#include "Food.h"

class ForestFood : public Food {


public:
	ForestFood(std::string name, std::string description, std::string eatMessage) : Food(name, description, eatMessage) {};

	void eat(Traveller& traveller) {
		std::cout << m_eatMessage << std::endl;
	};
	virtual ~ForestFood() {};
};

#endif
