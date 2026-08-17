#include "Settlement.h"
#include "Traveller.h"
#include <iostream>

Settlement::Settlement(const std::string& name, const std::string& description,const std::string& enterMessage, const std::string& shopMessage,const std::string& sleepMessage, const std::string& workMessage,const std::string& eatMessage)
	: Place(name, description), enterMessage(enterMessage), shopMessage(shopMessage),sleepMessage(sleepMessage), workMessage(workMessage), eatMessage(eatMessage) {}

Settlement::~Settlement() {}

bool Settlement::isSettlement() const { return true; }

void Settlement::print(int depth) const 
{
	std::cout << std::string(depth * 2, ' ') << "[Settlement] " << getName()<< " - " << getDescription() << std::endl;
}

void Settlement::shop(Traveller&) { std::cout << shopMessage << std::endl; }
void Settlement::sleep(Traveller&) { std::cout << sleepMessage << std::endl; }
void Settlement::work(Traveller&) { std::cout << workMessage << std::endl; }
void Settlement::eat(Traveller&) { std::cout << eatMessage << std::endl; }
