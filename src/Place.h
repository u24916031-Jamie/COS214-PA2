#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>

class Settlement;

class Place 
{
private:
	std::string name;
	std::string description;

protected:
	Place(const std::string& name, const std::string& description);

public:
	virtual ~Place();
	std::string getName() const;
	std::string getDescription() const;
	virtual bool isSettlement() const = 0;
	virtual bool addPlace(Place* place);
	virtual void print(int depth = 0) const = 0;
	virtual void collectSettlements(std::vector<Settlement*>& out) = 0;
};

#endif
