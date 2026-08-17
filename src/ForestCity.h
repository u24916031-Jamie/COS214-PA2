#ifndef FORESTCITY_H
#define FORESTCITY_H

#include "Settlement.h"

class ForestCity : public Settlement 
{
public:
	ForestCity(const std::string& name, const std::string& description);
	virtual ~ForestCity();
	virtual void enter(Traveller& traveller);
};

#endif
