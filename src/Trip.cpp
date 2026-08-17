#include "Trip.h"
#include "Route.h"
#include "Place.h"
#include "Settlement.h"

Trip::Trip(Place* map, Settlement* start, Route* route): map(map), currentSettlement(start), route(route) {}

Trip::~Trip() 
{
	delete route;
}

void Trip::setRoute(Route* newRoute) 
{
	if (newRoute == route) return;
	delete route;
	route = newRoute;
}

std::string Trip::getRouteName() const 
{
	return route ? route->getName() : "none";
}

Settlement* Trip::getCurrentSettlement() const { return currentSettlement; }

void Trip::setCurrentSettlement(Settlement* settlement) 
{
	currentSettlement = settlement;
}

Settlement* Trip::getDestination() const 
{
	if (!route || !map) return 0;
	return route->getNextSettlement(*map, currentSettlement);
}
