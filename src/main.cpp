#include <iostream>

#include "Traveller.h"
#include "TeleportationCircle.h"
#include "ForestFactory.h"
#include "OceanFactory.h"
#include "Settlement.h"
#include "Region.h"
#include "Trip.h"
#include "CheapestRoute.h"
#include "FastestRoute.h"
#include "WarmestRoute.h"

int main()
{
	ForestFactory forest;
	OceanFactory ocean;

	Settlement* forestCity = forest.createCity();
	forestCity->setTravelStats(50, 4, 10);
	Settlement* town = forest.createLodging();
	town->addSettlement(forest.createFood());
	town->addSettlement(forest.createMarket());
	town->addSettlement(forest.createWork());
	town->addSettlement(forestCity);

	Settlement* oceanCity = ocean.createCity();
	oceanCity->setTravelStats(20, 6, 25);
	Settlement* port = ocean.createLodging();
	port->addSettlement(ocean.createFood());
	port->addSettlement(ocean.createMarket());
	port->addSettlement(ocean.createWork());
	port->addSettlement(oceanCity);

	Settlement* outpost = forest.createCity();
	outpost->setTravelStats(80, 2, 15);

	Region* world = new Region("Aerthos", "The known world");
	Region* woods = new Region("Deepwood", "Forest");
	Region* coast = new Region("Salt Coast", "Ocean");
	world->addPlace(woods);
	world->addPlace(coast);
	woods->addPlace(town);
	woods->addPlace(outpost);
	coast->addPlace(port);
	town->addPlace(outpost);
	world->print();

	Traveller hero(250, 100, new TeleportationCircle());

	Trip trip(world, town, new CheapestRoute());
	Settlement* here = trip.getCurrentSettlement();
	std::cout << "\n== " << here->getName() << " ==" << std::endl;
	here->enter(hero);
	here->work(hero);
	here->shop(hero);
	here->eat(hero);
	here->sleep(hero);

	std::cout << "\n" << trip.getRouteName() << " route -> " << trip.getDestination()->getName() << std::endl;
	hero.leave();
	trip.setCurrentSettlement(trip.getDestination());
	here = trip.getCurrentSettlement();
	std::cout << "== " << here->getName() << " ==" << std::endl;
	here->enter(hero);
	here->work(hero);
	here->shop(hero);
	here->eat(hero);
	here->sleep(hero);

	trip.setRoute(new FastestRoute());
	std::cout << "\n" << trip.getRouteName() << " route -> " << trip.getDestination()->getName() << std::endl;
	hero.leave();
	trip.setCurrentSettlement(trip.getDestination());
	here = trip.getCurrentSettlement();
	std::cout << "== " << here->getName() << " ==" << std::endl;
	here->enter(hero);
	here->work(hero);
	here->shop(hero);
	here->eat(hero);
	here->sleep(hero);

	trip.setRoute(new WarmestRoute());
	std::cout << "\n" << trip.getRouteName() << " route -> " << trip.getDestination()->getName() << std::endl;
	hero.leave();
	hero.leave();
	hero.leave();
	std::cout << "money " << hero.getMoney() << ", satiety " << hero.getSatiety() << std::endl;

	delete world;
	return 0;
}
