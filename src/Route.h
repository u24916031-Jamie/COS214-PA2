#pragma once

class Settlement;
class Place;

class Route {

public:
	virtual Settlement* getNextSettlement(Place& map) = 0;


};