#include <iostream>

#include "clim.h"
#include "sport.h"

int main()
{
	Car* car = new Sport();
	car = new Clim(car);

	std::cout << car->getCost() << std::endl;
	delete car;
	car = nullptr;
}