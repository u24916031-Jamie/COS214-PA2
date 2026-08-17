#include "MerchantCaravan.h"
#include "Horseback.h"
#include "Traveller.h"
#include <iostream>

MerchantCaravan::MerchantCaravan(): TransportationMethod(15, 50,
	  "You ride with the caravan and arrive after a long, dusty day.",
	  "The caravan master waves you off. No coin, no seat.") {}

MerchantCaravan::~MerchantCaravan() {}

bool MerchantCaravan::leave(Traveller& traveller) 
{
	if (traveller.getMoney() < 50) 
	{
		std::cout << "You can no longer afford the Merchant Caravan. You buy a horse." << std::endl;
		traveller.setTransportationMethod(new Horseback());
		return traveller.leave();
	}
	return TransportationMethod::leave(traveller);
}
