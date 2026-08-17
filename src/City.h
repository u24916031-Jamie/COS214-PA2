#ifndef CITY_H
#define CITY_H

#include "Settlement.h"
#include "Traveller.h"
#include "Place.h"
#include <iostream>
class City : public Settlement {
protected:
	std::string m_enterMessage;


public:
	City(std::string name, std::string description, std::string enterMessage) : Settlement(name, description) {
		m_enterMessage = enterMessage;
	};

	
	virtual void enter(Traveller& traveller){};
	virtual void shop(Traveller& traveller){};
	virtual void sleep(Traveller& traveller){};
	virtual void work(Traveller& traveller){};
	virtual void eat(Traveller& traveller){};
	virtual void addSettlement(Settlement* param){};
	virtual void addPlace(Place* param){};


	virtual ~City() {};
};

#endif
