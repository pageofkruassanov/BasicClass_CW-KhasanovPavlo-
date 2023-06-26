#include "Dog.h"

void Dog::Show()
{
	cout << "Name: " << getName() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Breed: " << breed << endl;
	cout << "Sound: " << sound << endl;
	cout << "Age: " << getAge() << endl;
}
