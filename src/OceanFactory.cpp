#include "OceanFactory.h"
#include "OceanCity.h"
#include "OceanWork.h"
#include "OceanFood.h"
#include "OceanLodging.h"
#include "OceanMarket.h"

Settlement* OceanFactory::createCity() {
	Settlement* ret = new OceanCity(cityNames[cityIdx],cityNames[cityIdx],cityEnter[cityIdx]);
	cityIdx++;
	cityIdx %= cityNames.size();

	return ret;
}

Settlement* OceanFactory::createWork() {
	Settlement* ret = new OceanWork(jobNames[workIdx],jobNames[workIdx],jobsWork[workIdx]);
	workIdx++;
	workIdx %= jobNames.size();

	return ret;
}

Settlement* OceanFactory::createFood() {
	Settlement* ret = new OceanFood(foodNames[foodIdx],foodNames[foodIdx],foodEat[foodIdx]);
	foodIdx++;
	foodIdx %= foodNames.size();

	return ret;
}

Settlement* OceanFactory::createLodging() {
	Settlement* ret = new OceanLodging(lodgingNames[lodgingIdx],lodgingNames[lodgingIdx],lodgingSleep[lodgingIdx]);
	lodgingIdx++;
	lodgingIdx %= lodgingNames.size();

	return ret;
}

Settlement* OceanFactory::createMarket() {
	Settlement* ret = new OceanMarket(marketNames[marketIdx],marketNames[marketIdx],marketShop[marketIdx]);
	marketIdx++;
	marketIdx %= marketNames.size();

	return ret;
}