#ifndef ROUTE_H
#define ROUTE_H

class Route {


public:
	virtual Settlement* getNextSettlement(Place& map) = 0;
};

#endif
