#ifndef TRIP_H
#define TRIP_H

#include <string>

class Place;
class Settlement;
class Route;

class Trip 
{
private:
	Place* map;
	Settlement* currentSettlement;
	Route* route;

	Trip(const Trip&);
	Trip& operator=(const Trip&);

public:
	Trip(Place* map, Settlement* start, Route* route);
	~Trip();
	void setRoute(Route* newRoute);
	std::string getRouteName() const;
	Settlement* getCurrentSettlement() const;
	void setCurrentSettlement(Settlement* settlement);
	Settlement* getDestination() const;
};

#endif
