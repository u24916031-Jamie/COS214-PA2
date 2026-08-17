#ifndef FORESTCITY_H
#define FORESTCITY_H

#include "City.h"
#include "Traveller.h"
#include <vector>
#include <string>

class ForestCity : public City {
private:



public:
	ForestCity(std::string name, std::string description, std::string enterMessage) : City(name, description, enterMessage) {};
	void enter(Traveller& traveller) {
		std::cout << m_enterMessage << std::endl;
	}
	virtual ~ForestCity() {};
};

#endif
