#ifndef REGION_H
#define REGION_H

#include "Place.h"
#include <vector>

class Region : public Place 
{
private:
	std::vector<Place*> children;

	Region(const Region&);
	Region& operator=(const Region&);

public:
	Region(const std::string& name, const std::string& description);
	virtual ~Region();
	virtual bool isSettlement() const;
	virtual bool addPlace(Place* place);
	const std::vector<Place*>& getChildren() const;
	virtual void print(int depth = 0) const;
};

#endif
