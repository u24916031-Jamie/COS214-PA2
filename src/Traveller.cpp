#include "Traveller.h"
#include "TransportationMethod.h"
#include <iostream>

Traveller::Traveller(int startingMoney, int startingSatiety, TransportationMethod* initialMethod): money(startingMoney < 0 ? 0 : startingMoney),satiety(startingSatiety < 0 ? 0 : startingSatiety),currentMethod(initialMethod) {}

Traveller::~Traveller() 
{
	delete currentMethod;
}

int Traveller::getMoney() const { return money; }

void Traveller::earnMoney(int amount) 
{
	if (amount > 0) money += amount;
}

void Traveller::spendMoney(int amount) 
{
	if (amount > 0) money -= amount;
	if (money < 0) money = 0;
}

int Traveller::getSatiety() const { return satiety; }

void Traveller::increaseSatiety(int amount) 
{
	if (amount > 0) satiety += amount;
	if (satiety > 100) satiety = 100;
}

void Traveller::decreaseSatiety(int amount) 
{
	if (amount > 0) satiety -= amount;
	if (satiety < 0) satiety = 0;
}

void Traveller::setTransportationMethod(TransportationMethod* newMethod) 
{
	if (newMethod == currentMethod) return;
	delete currentMethod;
	currentMethod = newMethod;
}

bool Traveller::leave() 
{
	if (!currentMethod) 
	{
		std::cout << "You have no way to travel." << std::endl;
		return false;
	}
	return currentMethod->leave(*this);
}
