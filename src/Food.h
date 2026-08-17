#ifndef FOOD_H
#define FOOD_H

#include "SettlementFeature.h"

class Food : public SettlementFeature {
protected:
	int hunger;
	std::string m_eatMessage;

public:
	Food(std::string name, std::string description, std::string eatMessage) : SettlementFeature(name, description) {
		m_eatMessage = eatMessage;
	};

	virtual void eat(Traveller traveller){};
	virtual ~Food() {};
};

#endif
