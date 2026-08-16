#ifndef SETTLEMENT_H
#define SETTLEMENT_H

class Settlement : Place {

protected:
	string enterMessage;
	string shopMessage;
	string sleepMessage;
	string workMessage;
	string eatMessage;

public:
	void enter(Traveller traveller);

	void shop(Traveller traveller);

	void sleep(Traveller traveller);

	void work(Traveller traveller);

	void eat(Traveller traveller);
};

#endif
