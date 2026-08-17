#ifndef HORSEBACK_H
#define HORSEBACK_H

#include "TransportationMethod.h"

class Horseback : public TransportationMethod 
{
public:
	Horseback();
	virtual ~Horseback();
	virtual bool leave(Traveller& traveller);
};

#endif
