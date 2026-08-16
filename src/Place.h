#ifndef PLACE_H
#define PLACE_H

class Place {

private:
	string name;
	string description;
	boolean isSettlement;

public:
	string getName();

	string getDescription();

	virtual void addPlace(Place param) = 0;

	boolean isSettlement();
};

#endif
