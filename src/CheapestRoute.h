#ifndef CHEAPESTROUTE_H
#define CHEAPESTROUTE_H

#include "Route.h"

class CheapestRoute : public Route 
{
public:
	CheapestRoute();
	virtual ~CheapestRoute();
	virtual Settlement* getNextSettlement(Place& map, Settlement* current);
	virtual std::string getName() const;
};

#endif
