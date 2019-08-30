#include <iostream>
#include "Cat.h"

void Cat::speak()
{
	if (happy)
	{
		std::cout << "Meow!" << std::endl;
	}
	else
	{
		std::cout << "Sssss!" << std::endl;
	}
}

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}