#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <vector>

class Settlement;

class Region : public Place
{
private:
	std::vector<Place*> children;

public:
	Region(const std::string& name, const std::string& description);
	virtual ~Region();
	virtual bool isSettlement() const;
	virtual bool addPlace(Place* place);
	virtual void print(int depth = 0) const;
	void collectSettlements(std::vector<Settlement*>& out);
};

#endif
