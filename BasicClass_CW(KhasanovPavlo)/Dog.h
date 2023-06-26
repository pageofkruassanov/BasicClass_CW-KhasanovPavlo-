#pragma once
#include "Pet.h"
class Dog:private Pet
{
private:
	string sound;
	string breed;
public:
	Dog() = delete;
	Dog(string sound, string name, string color, string breed, double age) : Pet(name, age, color), sound{ sound }, breed{ breed } {};
	void Show();
};

