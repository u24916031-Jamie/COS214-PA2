#ifndef LODGING_H
#define LODGING_H

class Lodging : SettlementFeature {

public:
	int price;

	virtual void sleep(Traveller traveller) = 0;
};

#endif
