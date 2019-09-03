#include <iostream>
using namespace std;

class Frog
{
// private instance data
private:
	string name;

// private methods
private:
	string getName() { return name; }

// constructor
public:
	Frog(string name) : name(name) {}

// public methods
public:
	void info() { cout << "My name is: " << getName() << endl; }
};

int main()
{
	Frog frog("Freddy");
	frog.info();

	return 0;
}