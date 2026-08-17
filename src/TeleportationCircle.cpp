#include "TeleportationCircle.h"
#include "MerchantCaravan.h"
#include "Traveller.h"
#include <iostream>

TeleportationCircle::TeleportationCircle(): TransportationMethod(5, 100,"The circle flares and you step out at your destination in an instant.","The circle stays dark. You cannot pay the mages.") {}

TeleportationCircle::~TeleportationCircle() {}

bool TeleportationCircle::leave(Traveller& traveller) 
{
	if (traveller.getMoney() < 100) 
	{
		std::cout << "You can no longer afford the Teleportation Circle. You join a Merchant Caravan." << std::endl;
		traveller.setTransportationMethod(new MerchantCaravan());
		return traveller.leave();
	}
	return TransportationMethod::leave(traveller);
}
