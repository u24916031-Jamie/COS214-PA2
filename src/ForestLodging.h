#ifndef FORESTLODGING_H
#define FORESTLODGING_H

#include "Lodging.h"
#include "Traveller.h"

class ForestLodging : public Lodging {


public:
	ForestLodging(std::string name, std::string description, std::string sleepMessage) : Lodging(name, description, sleepMessage) {};

	void sleep(Traveller& traveller) {
		std::cout << m_sleepMessage << std::endl;
	}
	virtual ~ForestLodging() {};
};

#endif
