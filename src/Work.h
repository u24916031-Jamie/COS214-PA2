#ifndef WORK_H
#define WORK_H
#include "SettlementFeature.h"
#include <iostream>

class Work : SettlementFeature {
protected:
	int pay;
	std::string workMessage;
public:
	Work(std::string name, std::string description, std::string workMessage) : SettlementFeature(name, description) {};

	virtual void work(Traveller traveller) = 0;
	virtual ~Work() {};
};

#endif
