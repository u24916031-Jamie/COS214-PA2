#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Place.h"
#include "Settlement.h"
#include "TransportationMethod.h"
#include "Traveller.h"
#include "Route.h"

class GameManager {

private:
	Place* worldMap;
	Settlement* currentSettlement;
	TransportationMethod* transportMethod;
	Traveller* traveller;
	Route* route;

public:
	void work();

	void sleep();

	void shop();

	void setWorldMap(Place* map);

	void setTransportationMethod(TransportationMethod* method, Traveller* traveller);

	void setRoute(Route* route);

	void leave();

	void enter(Settlement* settlement);

	void eat();

	Settlement* getDestination();
};

#endif
