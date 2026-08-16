#ifndef SETTLEMENTFEATURE_H
#define SETTLEMENTFEATURE_H

class SettlementFeature : Settlement {

public:
	Settlement settlement;

	void getName();

	void getDescription();

	void* addSettlement(Settlement param);

	void enter(Traveller traveller);

	void shop(Traveller traveller);

	void sleep(Traveller traveller);

	void work(Traveller traveller);

	void eat(Traveller traveller);
};

#endif
