#ifndef OCEANLODGING_H
#define OCEANLODGING_H

#include "Lodging.h"
#include "Traveller.h"

class OceanLodging : public Lodging {


public:
	OceanLodging(std::string name, std::string description, std::string sleepMessage) : Lodging(name, description, sleepMessage) {};

	void sleep(Traveller& traveller) {
		std::cout << m_sleepMessage << std::endl;
	}
	virtual ~OceanLodging() {};
};

#endif
