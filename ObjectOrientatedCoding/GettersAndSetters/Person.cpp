#include "Person.h"

// Constructor
Person::Person()
{
	name = "George";
}

// Returns person's name
string Person::toString()
{
	return "Person's name is: " + name;
}

// Sets person's name
void Person::setName(string newName)
{
	name = newName;
}

// Get's person's name
string Person::getName()
{
	return name;
}