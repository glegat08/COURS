#pragma once
#include "option.h"

class Clim : public Option
{
public:
	Clim(Car* car);

	int getCost() override;
};