#ifndef CHEAPESTROUTE_H
#define CHEAPESTROUTE_H

class CheapestRoute : Route {


public:
	Settlement* getNextSettlement(Place& map);
};

#endif
