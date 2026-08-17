#ifndef TRANSPORTATIONMETHOD_H
#define TRANSPORTATIONMETHOD_H

#include <string>

class Traveller;

class TransportationMethod 
{
private:
	int hungerCost;
	int moneyCost;
	std::string successMessage;
	std::string failMessage;

protected:
	TransportationMethod(int hungerCost, int moneyCost, const std::string& successMessage, const std::string& failMessage);

public:
	virtual ~TransportationMethod();
	virtual bool leave(Traveller& traveller) = 0;
	int getHungerCost() const;
	int getMoneyCost() const;
	std::string getSuccessMessage() const;
	std::string getFailMessage() const;
};

#endif
