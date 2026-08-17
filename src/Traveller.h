#ifndef TRAVELLER_H
#define TRAVELLER_H

class TransportationMethod;

class Traveller 
{
private:
	int money;
	int satiety;
	TransportationMethod* currentMethod;

	Traveller(const Traveller&);
	Traveller& operator=(const Traveller&);

public:
	Traveller(int startingMoney, int startingSatiety, TransportationMethod* initialMethod);
	~Traveller();

	int getMoney() const;
	void earnMoney(int amount);
	void spendMoney(int amount);

	int getSatiety() const;
	void increaseSatiety(int amount);
	void decreaseSatiety(int amount);

	void setTransportationMethod(TransportationMethod* newMethod);
	bool leave();
};

#endif
