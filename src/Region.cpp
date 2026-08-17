#include "Region.h"
#include "Settlement.h"
#include <iostream>

Region::Region(const std::string& name, const std::string& description): Place(name, description) {}

Region::~Region()
{
	for (size_t i = 0; i < children.size(); ++i) delete children[i];
}

bool Region::isSettlement() const {return false;}

bool Region::addPlace(Place* place)
{
	if (!place || place == this) return false;
	children.push_back(place);
	return true;
}

void Region::print(int depth) const
{
	std::cout << std::string(depth * 2, ' ') << "[Region] " << getName() << " - " << getDescription() << std::endl;
	for (size_t i = 0; i < children.size(); ++i) children[i]->print(depth + 1);
}

void Region::collectSettlements(std::vector<Settlement*>& out)
{
	for (size_t i = 0; i < children.size(); ++i) 
	{
		if (children[i]->isSettlement()) out.push_back(static_cast<Settlement*>(children[i]));
		else static_cast<Region*>(children[i])->collectSettlements(out);
	}
}
