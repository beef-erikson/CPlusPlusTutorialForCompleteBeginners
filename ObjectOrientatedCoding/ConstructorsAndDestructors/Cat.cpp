#include <iostream>
#include "Cat.h"
using namespace std;

// Constructor
Cat::Cat()
{
	cout << "Cat created" << endl;

	happy = true;
}

// Destructor
Cat::~Cat()
{
	cout << "Cat destroyed" << endl;
}

// Cat speaks based on happiness
void Cat::speak()
{
	if (happy)
	{
		cout << "Meow!" << endl;
	}
	else
	{
		cout << "Sssss!" << endl;
	}
}