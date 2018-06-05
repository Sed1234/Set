#include "Bus.h"



Bus::Bus()
{
	bus.push_back(Bus(1,6));
	bus.push_back(Bus(1, 10));
	bus.push_back(Bus(11, 5));
	bus.push_back(Bus(4, 4));
	bus.push_back(Bus(7, 9));
	bus.push_back(Bus(2, 8));
	bus.push_back(Bus(3, 10));
	bus.push_back(Bus(3, 5));

}

Bus::Bus(int x, int y)
{
	this->x = x;
	this->y = y;
}


Bus::~Bus()
{
}
