#pragma once
#include <vector>
class Bus
{
public:
	int x, y;
	std::vector<Bus> bus; 
	Bus();
	Bus(int, int);
	~Bus();
};

