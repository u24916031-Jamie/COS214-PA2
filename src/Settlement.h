#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include "Place.h"
#include <string>
#include <vector>

class Traveller;

class Settlement : public Place {


protected:
	std::string enterMessage;
	std::string shopMessage;
	std::string sleepMessage;
	std::string workMessage;
	std::string eatMessage;

	int travelCost;
	int travelTime;
	int temperature;

	Settlement(const std::string& name, const std::string& description);
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

	virtual void collectSettlements(std::vector<Settlement*>& out);
	virtual void addSettlement(Settlement*) {}
	virtual int getTravelCost() const;
	virtual int getTravelTime() const;
	virtual int getTemperature() const;
	void setTravelStats(int cost, int time, int temp);
};

#endif
