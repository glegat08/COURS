#include "clim.h"

Clim::Clim(Car* car) : Option(car) {}

int Clim::getCost()
{
	return m_car->getCost() + 1000;
}