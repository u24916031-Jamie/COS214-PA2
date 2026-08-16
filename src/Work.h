#ifndef WORK_H
#define WORK_H

class Work : SettlementFeature {

public:
	int pay;

	virtual void work(Traveller traveller) = 0;
};

#endif
