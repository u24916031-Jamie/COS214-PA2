#ifndef OCEANWORK_H
#define OCEANWORK_H


#include "Work.h"
#include "Traveller.h"

class OceanWork : Work {



public:
	OceanWork(std::string name, std::string description, std::string workMessage) : Work(name, description, workMessage) {};

	void work(Traveller& traveller) {
		std::cout << m_workMessage << std::endl;
	}
	virtual ~OceanWork() {};
};


#endif
