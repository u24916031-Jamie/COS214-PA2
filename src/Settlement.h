#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include "Place.h"
#include <string>

class Settlement : public Place {


protected:
	std::string enterMessage;
	std::string shopMessage;
	std::string sleepMessage;
	std::string workMessage;
	std::string eatMessage;

	Settlement(const std::string& name, const std::string& description,const std::string& enterMessage, const std::string& shopMessage,const std::string& sleepMessage, const std::string& workMessage,const std::string& eatMessage);

public:
	virtual ~Settlement();
	virtual bool isSettlement() const;
	virtual void print(int depth = 0) const;

	virtual void enter(Traveller& traveller) = 0;
	virtual void shop(Traveller& traveller);
	virtual void sleep(Traveller& traveller);
	virtual void work(Traveller& traveller);
	virtual void eat(Traveller& traveller);
};

#endif
