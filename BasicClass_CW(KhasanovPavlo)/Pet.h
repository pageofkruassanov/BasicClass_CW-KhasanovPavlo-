#pragma once
#include <iostream>
using namespace std;
class Pet
{
protected:
	string name;
	string color;
	double age;
public:
	Pet() = delete;
	Pet(string name, double age, string color) :name{ name }, age{ age }, color{ color } {};
	string& getName();
	string& getColor();
	double& getAge();
};

