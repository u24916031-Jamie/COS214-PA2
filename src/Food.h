#ifndef FOOD_H
#define FOOD_H

#include "SettlementFeature.h"

class Food : SettlementFeature {
private:
	int hunger;

public:

	virtual void eat(Traveller traveller) = 0;

	virtual ~Food() {};
};

#endif
