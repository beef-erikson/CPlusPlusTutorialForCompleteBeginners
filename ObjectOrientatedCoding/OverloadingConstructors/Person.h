#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person();
	Person(string newName) { name = newName; age = 0; };
	Person(string newName, int newAge);
	string toString();
};

