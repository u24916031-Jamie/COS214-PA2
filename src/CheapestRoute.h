#pragma once

#include "Route.h"


class CheapestRoute : public Route {

public:
	Settlement* getNextSettlement(Place& map);


};