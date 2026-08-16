#ifndef MARKET_H
#define MARKET_H

class Market : SettlementFeature {

public:
	int price;

	virtual void shop(Traveller traveller) = 0;
	virtual ~Market() {};
};

#endif
