#ifndef MARKET_H
#define MARKET_H

#include "SettlementFeature.h"
class Market : SettlementFeature {

protected:
	int price;
	std::string m_shopMessage;
public:
	Market(std::string name, std::string description, std::string shopMessage) : SettlementFeature(name, description) {
		m_shopMessage = shopMessage;
	};

	virtual void shop(Traveller traveller) = 0;
	virtual ~Market() {};
};

#endif
