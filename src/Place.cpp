#include "Place.h"
#include <iostream>

Place::Place(const std::string& name, const std::string& description): name(name), description(description) {}

Place::~Place() {}

std::string Place::getName() const { return name; }
std::string Place::getDescription() const { return description; }

bool Place::addPlace(Place* place) 
{
	if (place) {
		std::cout << place->getName() << " cannot be added to " << name
		          << ": it is not a region." << std::endl;
	}
	return false;
}
