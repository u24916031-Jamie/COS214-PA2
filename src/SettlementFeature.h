#ifndef SETTLEMENTFEATURE_H
#define SETTLEMENTFEATURE_H

#include "Settlement.h"
#include "Traveller.h"

class SettlementFeature : public Settlement {
private:
	Settlement* settlement;

public:

	void getName();

	void getDescription();

	void addSettlement(Settlement* param);

	void enter(Traveller& traveller);

	void shop(Traveller& traveller);

	void sleep(Traveller& traveller);

	void work(Traveller& traveller);

	void eat(Traveller& traveller);
};

#endif
