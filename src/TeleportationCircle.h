#ifndef TELEPORTATIONCIRCLE_H
#define TELEPORTATIONCIRCLE_H

#include "TransportationMethod.h"

class TeleportationCircle : public TransportationMethod 
{
public:
	TeleportationCircle();
	virtual ~TeleportationCircle();
	virtual bool leave(Traveller& traveller);
};

#endif
