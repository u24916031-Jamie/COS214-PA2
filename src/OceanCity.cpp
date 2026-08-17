#include "OceanCity.h"
#include "Traveller.h"
#include <iostream>

OceanCity::OceanCity(const std::string& name, const std::string& description)
	: Settlement(name, description,
	  "Salt wind and gull cries greet you as you step onto the docks.",
	  "The fish stalls are closed. Nothing to buy here.",
	  "There is no inn. You doze against a coil of rope.",
	  "The harbour master has no work for you today.",
	  "You find nothing but seaweed to chew on.") {}

OceanCity::~OceanCity() {}

void OceanCity::enter(Traveller&) 
{
	std::cout << enterMessage << " Welcome to " << getName() << "." << std::endl;
}
