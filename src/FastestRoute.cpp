#include "FastestRoute.h"
#include "Place.h"
#include "Settlement.h"
#include <vector>

FastestRoute::FastestRoute() {}

FastestRoute::~FastestRoute() {}

Settlement* FastestRoute::getNextSettlement(Place& map, Settlement* current) 
{
	std::vector<Settlement*> candidates;
	map.collectSettlements(candidates);
	Settlement* best = 0;
	for (size_t i = 0; i < candidates.size(); ++i) 
    {
		Settlement* s = candidates[i];
		if (s == current) continue;
		if (!best || s->getTravelTime() < best->getTravelTime()) 
        {
			best = s;
		}
	}
	return best;
}

std::string FastestRoute::getName() const { return "Fastest"; }
