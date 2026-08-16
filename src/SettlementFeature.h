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
	SettlementFeature(std::string name, std::string description) :Settlement(name, description) {};



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

	virtual ~SettlementFeature() {
		delete settlement;
	};
};

#endif
