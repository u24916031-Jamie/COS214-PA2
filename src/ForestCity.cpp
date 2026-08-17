#include "ForestCity.h"
#include "Traveller.h"
#include <iostream>

ForestCity::ForestCity(const std::string& name, const std::string& description)
	: Settlement(name, description,
	  "The canopy closes overhead as you walk under carved wooden arches.",
	  "The woodcarvers' stalls are empty. Nothing to buy here.",
	  "There is no inn. You sleep in the crook of a great oak.",
	  "The lumber yard is quiet. No work for you today.",
	  "You find nothing but bitter acorns to eat.") {}

ForestCity::~ForestCity() {}

void ForestCity::enter(Traveller&) 
{
	std::cout << enterMessage << " Welcome to " << getName() << "." << std::endl;
}
