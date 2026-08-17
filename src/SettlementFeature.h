#ifndef SETTLEMENTFEATURE_H
#define SETTLEMENTFEATURE_H

#include "Settlement.h"
#include "Traveller.h"
#include <iostream>
#include <string>

class SettlementFeature : public Settlement {
private:
	Settlement* settlement;

public:
	SettlementFeature() = delete;
	SettlementFeature(std::string name, std::string description) :Settlement(name, description), settlement(nullptr) {};



	void addSettlement(Settlement* param) {
		if (settlement == nullptr) {
			settlement = param;
		}
		else {
			settlement->addSettlement(param);
		}
	}

	virtual void enter(Traveller& traveller) {
		settlement->enter(traveller);
	};

	virtual void shop(Traveller& traveller) {
		settlement->shop(traveller);
	};

	virtual void sleep(Traveller& traveller) {
		settlement->sleep(traveller);
	};

	virtual void work(Traveller& traveller) {
		settlement->work(traveller);
	};

	virtual void eat(Traveller& traveller) {
		settlement->eat(traveller);
	};

	virtual int getTravelCost() const {return settlement ? settlement->getTravelCost():0;}
	virtual int getTravelTime() const {return settlement ? settlement->getTravelTime():0;}
	virtual int getTemperature() const {return settlement ? settlement->getTemperature():0;}

	virtual ~SettlementFeature() {
		delete settlement;
	};
};

#endif
