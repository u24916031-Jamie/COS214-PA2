#ifndef REGION_H
#define REGION_H

class Region : Place {

public:
	Place children;

	void addPlace(Place param);

	Place* getChildren();
};

#endif
