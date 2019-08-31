#include <sstream>
#include "Person.h"




/* 
// Constructor demonstrating the use of 'this' keyword
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}
*/

// Constructor using initialization lists
Person::Person(string name, int age) : name(name), age(age) {}

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