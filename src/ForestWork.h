#ifndef FORESTWORK_H
#define FORESTWORK_H

#include "Work.h"
#include "Traveller.h"

class ForestWork : Work {


public:
	ForestWork(std::string name, std::string description, std::string workMessage) : Work(name, description, workMessage) {};

	void work(Traveller& traveller) {
		std::cout << workMessage << std::endl;
	}
};

#endif
