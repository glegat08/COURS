#pragma once

class Car
{
public:
	virtual ~Car() = default;
	virtual int getCost() = 0;
};