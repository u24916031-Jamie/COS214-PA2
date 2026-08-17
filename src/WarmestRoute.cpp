#include "WarmestRoute.h"
#include "Place.h"
#include "Settlement.h"
#include <vector>

WarmestRoute::WarmestRoute() {}

WarmestRoute::~WarmestRoute() {}

Settlement* WarmestRoute::getNextSettlement(Place& map, Settlement* current) 
{
	std::vector<Settlement*> candidates;
	map.collectSettlements(candidates);
	Settlement* best = 0;
	for (size_t i = 0; i < candidates.size(); ++i) 
    {
		Settlement* s = candidates[i];
		if (s == current) continue;
		if (!best || s->getTemperature() > best->getTemperature()) 
        {
			best = s;
		}
	}
	return best;
}

std::string WarmestRoute::getName() const { return "Warmest"; }
