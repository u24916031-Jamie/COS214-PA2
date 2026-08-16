#ifndef SETTLEMENTFEATURE_H
#define SETTLEMENTFEATURE_H

#include "Settlement.h"
#include "Traveller.h"

class SettlementFeature : public Settlement {
private:
	Settlement* settlement;

public:
	SettlementFeature() = delete;
	SettlementFeature(std::string name, std::string description);



	void addSettlement(Settlement* param);

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

	virtual ~SettlementFeature();
};

#endif
