#include "ForestFactory.h"
#include "ForestCity.h"
#include "ForestWork.h"
#include "ForestFood.h"
#include "ForestMarket.h"
#include "ForestLodging.h"


Settlement* ForestFactory::createCity() {
	Settlement* ret = new ForestCity(cityNames[cityIdx],cityNames[cityIdx],cityEnter[cityIdx]);
	cityIdx++;
	cityIdx %= cityNames.size();

	return ret;
}

Settlement* ForestFactory::createWork() {
	Settlement* ret = new ForestWork(works[workIdx],works[workIdx],jobWork[workIdx]);
	workIdx++;
	workIdx %= works.size();

	return ret;
}

Settlement* ForestFactory::createFood() {
	Settlement* ret = new ForestFood(foods[foodIdx],foods[foodIdx],foodEat[foodIdx]);
	foodIdx++;
	foodIdx %= foods.size();

	return ret;
}

Settlement* ForestFactory::createLodging() {
	Settlement* ret = new ForestLodging(lodgings[lodgingIdx],lodgings[lodgingIdx],lodgingsSleep[lodgingIdx]);
	lodgingIdx++;
	lodgingIdx %= lodgings.size();

	return ret;
}

Settlement* ForestFactory::createMarket() {
	Settlement* ret = new ForestMarket(markets[marketIdx],markets[marketIdx],marketShop[marketIdx]);
	marketIdx++;
	marketIdx %= markets.size();

	return ret;
}
