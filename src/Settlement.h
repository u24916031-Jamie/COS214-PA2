#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include "Place.h"
#include "Traveller.h"

class Settlement : Place {

protected:
	std::string enterMessage;
	std::string shopMessage;
	std::string sleepMessage;
	std::string workMessage;
	std::string eatMessage;

public:
	Settlement();
	Settlement(std::string name, std::string description);


	void enter(Traveller& traveller);

	void shop(Traveller& traveller);

	void sleep(Traveller& traveller);

	void work(Traveller& traveller);

	void eat(Traveller& traveller);
	virtual void addSettlement(Settlement* param) = 0;
};

#endif
