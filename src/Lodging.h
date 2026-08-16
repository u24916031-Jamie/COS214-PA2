#ifndef LODGING_H
#define LODGING_H

#include "SettlementFeature.h"
class Lodging : SettlementFeature {

protected:
	int price;
	std::string m_sleepMessage;

public:
	Lodging(std::string name, std::string description, std::string sleepMessage) : SettlementFeature(name, description) {
		m_sleepMessage = sleepMessage;
	};

	virtual void sleep(Traveller traveller) = 0;
	virtual ~Lodging() {};
};

#endif
