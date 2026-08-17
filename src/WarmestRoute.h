#ifndef WARMESTROUTE_H
#define WARMESTROUTE_H

#include "Route.h"

class WarmestRoute : public Route 
{
public:
	WarmestRoute();
	virtual ~WarmestRoute();
	virtual Settlement* getNextSettlement(Place& map, Settlement* current);
	virtual std::string getName() const;
};

#endif
