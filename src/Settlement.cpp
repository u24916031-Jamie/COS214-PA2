#include "Settlement.h"
#include "Traveller.h"
#include <iostream>

Settlement::Settlement(const std::string& name, const std::string& description,const std::string& enterMessage, const std::string& shopMessage,const std::string& sleepMessage, const std::string& workMessage,const std::string& eatMessage)
	: Place(name, description), travelCost(0), travelTime(0), temperature(0), enterMessage(enterMessage), shopMessage(shopMessage),sleepMessage(sleepMessage), workMessage(workMessage), eatMessage(eatMessage) {}
Settlement::Settlement(const std::string& name, const std::string& description): Place(name, description), travelCost(0), travelTime(0), temperature(0) {}
Settlement::~Settlement() {}

void Settlement::collectSettlements(std::vector<Settlement*>& out) { out.push_back(this); }
int Settlement::getTravelCost() const { return travelCost; }
int Settlement::getTravelTime() const { return travelTime; }
int Settlement::getTemperature() const { return temperature; }
void Settlement::setTravelStats(int cost, int time, int temp) { travelCost = cost; travelTime = time; temperature = temp; }

bool Settlement::isSettlement() const { return true; }

void Settlement::print(int depth) const 
{
	std::cout << std::string(depth * 2, ' ') << "[Settlement] " << getName()<< " - " << getDescription() << std::endl;
}

void Settlement::shop(Traveller&) { std::cout << shopMessage << std::endl; }
void Settlement::sleep(Traveller&) { std::cout << sleepMessage << std::endl; }
void Settlement::work(Traveller&) { std::cout << workMessage << std::endl; }
void Settlement::eat(Traveller&) { std::cout << eatMessage << std::endl; }
