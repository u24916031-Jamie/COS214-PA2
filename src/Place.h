#ifndef PLACE_H
#define PLACE_H

#include <string>

class Place 
{
private:
	std::string name;
	std::string description;
	bool isSettlement;

protected:
	Place(const std::string& name, const std::string& description);

public:

	Place(std::string name, std::string description, bool isSettlement){
		this->name = name;
		this->description = description;
		this->isSettlement = isSettlement;
	}
	std::string getName(){
		return name;
	}

	std::string getDescription(){
		return description;
	}

	virtual void addPlace(Place* param) = 0;
	virtual ~Place() {};
	bool isSettlement(){
		return isSettlement;
	}
};

#endif
