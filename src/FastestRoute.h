#pragma once

#include "Route.h"


class FastestRoute : public Route {

public:
	Settlement* getNextSettlement(Place& map);


};