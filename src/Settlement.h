#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include "Place.h"
#include "Traveller.h"

class Settlement : public Place {



public:
	Settlement() = delete;
	Settlement(std::string name, std::string description) : Place(name, description, true) {};


	virtual void enter(Traveller& traveller) = 0;
	virtual void shop(Traveller& traveller) = 0;
	virtual void sleep(Traveller& traveller) = 0;
	virtual void work(Traveller& traveller) = 0;
	virtual void eat(Traveller& traveller) = 0;

	virtual void addSettlement(Settlement* param) = 0;
	virtual void addPlace(Place* param){};


	virtual ~Settlement() {};
};

#endif
