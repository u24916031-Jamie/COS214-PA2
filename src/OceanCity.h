#ifndef OCEANCITY_H
#define OCEANCITY_H

#include "Settlement.h"

class OceanCity : public Settlement 
{
public:
	OceanCity(const std::string& name, const std::string& description);
	virtual ~OceanCity();
	virtual void enter(Traveller& traveller);
};

#endif
