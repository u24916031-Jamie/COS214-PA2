#include "Settlement.h"


#include <iostream>
Settlement::Settlement() : Place() {}
Settlement::Settlement(std::string name, std::string description) : Place(name, description, true) {}


void Settlement::enter(Traveller& traveller) {
	std::cout << enterMessage << std::endl;
}

void Settlement::shop(Traveller& traveller) {
	std::cout << shopMessage << std::endl;
}

void Settlement::sleep(Traveller& traveller) {
	std::cout << sleepMessage << std::endl;
}

void Settlement::work(Traveller& traveller) {
	std::cout << workMessage << std::endl;
}

void Settlement::eat(Traveller& traveller) {
	std::cout << eatMessage << std::endl;
}
