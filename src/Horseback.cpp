#include "Horseback.h"
#include "Traveller.h"
#include <iostream>

Horseback::Horseback(): TransportationMethod(30, 10,
	  "You saddle up and ride hard. You arrive exhausted but in one piece.",
	  "You cannot afford stable fees and you are too tired to walk. You are stranded.") {}

Horseback::~Horseback() {}

bool Horseback::leave(Traveller& traveller) 
{
	return TransportationMethod::leave(traveller);
}
