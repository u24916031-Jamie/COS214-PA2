#ifndef ROUTE_H
#define ROUTE_H

#include <string>

class Place;
class Settlement;

class Route 
{
public:
	virtual ~Route();
	virtual Settlement* getNextSettlement(Place& map, Settlement* current) = 0;
	virtual std::string getName() const = 0;
};

#endif
