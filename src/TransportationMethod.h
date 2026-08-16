#ifndef TRANSPORTATIONMETHOD_H
#define TRANSPORTATIONMETHOD_H

class TransportationMethod {

private:
	int hungerCost;
	int moneyCost;
	string successMessage;
	string failMessage;

public:
	virtual boolean leave(Traveller& traveller) = 0;
};

#endif
