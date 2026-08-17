#include "TransportationMethod.h"
#include "Traveller.h"
#include <iostream>

TransportationMethod::TransportationMethod(int hungerCost, int moneyCost,const std::string& successMessage,const std::string& failMessage): hungerCost(hungerCost), moneyCost(moneyCost),successMessage(successMessage), failMessage(failMessage) {}

TransportationMethod::~TransportationMethod() {}

bool TransportationMethod::leave(Traveller& traveller) 
{
	if (traveller.getMoney() < moneyCost || traveller.getSatiety() < hungerCost) 
	{
		std::cout << failMessage << std::endl;
		return false;
	}
	traveller.spendMoney(moneyCost);
	traveller.decreaseSatiety(hungerCost);
	std::cout << successMessage << std::endl;
	return true;
}

int TransportationMethod::getHungerCost() const { return hungerCost; }
int TransportationMethod::getMoneyCost() const { return moneyCost; }
std::string TransportationMethod::getSuccessMessage() const { return successMessage; }
std::string TransportationMethod::getFailMessage() const { return failMessage; }
