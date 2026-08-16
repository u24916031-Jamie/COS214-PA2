#pragma once

#include "Route.h"


class WarmestRoute : public Route {

public:
	Settlement* getNextSettlement(Place& map);


};