#ifndef WARMESTROUTE_H
#define WARMESTROUTE_H

class WarmestRoute : Route {


public:
	Settlement* getNextSettlement(Place& map);
};

#endif
