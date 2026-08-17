#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H

#include "Route.h"

class FastestRoute : public Route 
{
public:
	FastestRoute();
	virtual ~FastestRoute();
	virtual Settlement* getNextSettlement(Place& map, Settlement* current);
	virtual std::string getName() const;
};

#endif
