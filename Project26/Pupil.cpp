#include "Pupil.h"



Pupil::Pupil()
{
	pupil.insert(Pupil(165, 65, 21, "Sem"));
	pupil.insert(Pupil(177, 65, 18, "Sara"));
	pupil.insert(Pupil(172, 58, 22, "Ada"));
	pupil.insert(Pupil(170, 68, 25, "Bob"));
	pupil.insert(Pupil(163, 52, 17, "Adam"));
	pupil.insert(Pupil(167, 70, 24, "Maikl"));
	pupil.insert(Pupil(158, 45, 20, "Alex"));
}

void Pupil::sort()
{
	for (Pupil i : pupil) {
		std::cout << i.age << ' ';
	}
	/*std::sort(pupil.begin(), pupil.end(), [](Pupil & a, Pupil & b) {
		if (a.age > b.age || a.height > b.height || a.weight > b.weight)
		{
			return true;
		}
		else {
			return false;
		}
	});*/
}



Pupil::Pupil(int height, int weight, int age, std::string name)
{
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->name = name;
}


Pupil::~Pupil()
{
}
