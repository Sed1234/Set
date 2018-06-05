#pragma once
#include <set>
#include <string>
#include <algorithm>
#include <ostream>
#include <iostream>
class Pupil
{
public:
	int height, weight, age;
	std::string name;
	std::set<Pupil> pupil;
	Pupil();
	void sort();
	Pupil(int, int, int, std::string);
	bool operator <(const Pupil &pupil) const {
		return this->height < pupil.height &&  this->weight < pupil.weight && this->age < pupil.age && this->name < pupil.name;
	}
	/*
	bool operator <=(const Pupil &pupil) const {
		return this->height <= pupil.height &&  this->weight <= pupil.weight && this->age <= pupil.age && this->name <= pupil.name;
	}*/
	/*friend std::ostream & operator << (std::ostream & stream, std::set<Pupil> & pupil)
	{
		Pupil a;
		stream << a.name<<' '<<a.height<<' '<<a.age<<' '  << std::endl;

		return stream;
	}*/

	~Pupil();
};

