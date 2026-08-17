#ifndef OCEANCITY_H
#define OCEANCITY_H

#include "City.h"
#include "Traveller.h"

class OceanCity : public City {


public:
	OceanCity(std::string name, std::string description, std::string enterMessage) : City(name, description, enterMessage) {};

	void enter(Traveller& traveller) {
		std::cout << m_enterMessage << std::endl;
	}
	virtual ~OceanCity() {};
};

#endif
