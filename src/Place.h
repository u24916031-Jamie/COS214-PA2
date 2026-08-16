#ifndef PLACE_H
#define PLACE_H
#include <string>
class Place {

private:
	bool m_isSettlement;
	std::string name;
	std::string description;

public:
	Place();
	Place(std::string name, std::string description, bool isSettlement);
	std::string getName();

	std::string getDescription();

	virtual void addPlace(Place param) = 0;

	bool isSettlement();
};

#endif
