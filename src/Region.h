#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <vector>

class Region : Place {

public:
	std::vector<Place*> children;



	Region(std::string name, std::string description);

	void addPlace(Place* param);

	std::vector<Place*>& getChildren();

	virtual ~Region();
};

#endif
