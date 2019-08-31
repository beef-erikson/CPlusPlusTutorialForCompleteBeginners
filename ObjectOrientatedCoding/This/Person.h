#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	// Constructor - note we can put initialization lists here in the header as well
	Person() : name(""), age(0) {}
	Person(string name, int age);

	string toString();
};