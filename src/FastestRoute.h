#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H

class FastestRoute : Route {


public:
	Settlement* getNextSettlement(Place& map);
};

#endif
