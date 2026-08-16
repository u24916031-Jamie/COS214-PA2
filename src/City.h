#ifndef CITY_H
#define CITY_H

#include "Settlement.h"
#include "Traveller.h"
#include <iostream>

class City : Settlement {
protected:
	std::string m_enterMessage;


public:
	City(std::string name, std::string description, std::string enterMessage) : Settlement(name, description) {
		m_enterMessage = enterMessage;
	};

	virtual void enter(Traveller& traveller) = 0;
	virtual ~City() {};
};

#endif
