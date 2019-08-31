#include <sstream>
#include "Person.h"


// Constructors
Person::Person()
{
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge) 
{ 
	name = newName; 
	age = newAge; 
}


// Uses stringstream and returns name/age
string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}