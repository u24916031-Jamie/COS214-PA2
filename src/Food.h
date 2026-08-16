#ifndef FOOD_H
#define FOOD_H

class Food : SettlementFeature {

public:
	int hunger;

	virtual void eat(Traveller traveller) = 0;
};

#endif
