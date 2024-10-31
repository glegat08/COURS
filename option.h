#pragma once
#include "car.h"

class Option : public Car
{
public:
	Option(Car* car);
protected:
	Car* m_car;
};