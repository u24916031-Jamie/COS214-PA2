#include "CheapestRoute.h"
#include "Place.h"
#include "Settlement.h"
#include <vector>

CheapestRoute::CheapestRoute() {}

CheapestRoute::~CheapestRoute() {}

Settlement* CheapestRoute::getNextSettlement(Place& map, Settlement* current) 
{
	std::vector<Settlement*> candidates;
	map.collectSettlements(candidates);
	Settlement* best = 0;
	for (size_t i = 0; i < candidates.size(); ++i) 
    {
		Settlement* s = candidates[i];
		if (s == current) continue;
		if (!best || s->getTravelCost() < best->getTravelCost()) 
        {
			best = s;
		}
	}
	return best;
}

std::string CheapestRoute::getName() const { return "Cheapest"; }
