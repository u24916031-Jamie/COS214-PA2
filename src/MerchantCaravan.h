#ifndef MERCHANTCARAVAN_H
#define MERCHANTCARAVAN_H

#include "TransportationMethod.h"

class MerchantCaravan : public TransportationMethod 
{
public:
	MerchantCaravan();
	virtual ~MerchantCaravan();
	virtual bool leave(Traveller& traveller);
};

#endif
