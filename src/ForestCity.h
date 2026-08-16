#ifndef FORESTCITY_H
#define FORESTCITY_H

#include "City.h"
#include "Traveller.h"

class ForestCity : City {


public:
	ForestCity(std::string name, std::string description, std::string enterMessage) : City(name, description, enterMessage) {};
	void enter(Traveller& traveller);
	virtual ~ForestCity() {};
};

#endif
