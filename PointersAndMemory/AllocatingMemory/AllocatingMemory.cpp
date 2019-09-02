#include <iostream>
using namespace std;

// animal class
class Animal
{
private:
	string name;

public:
	// constructors
	Animal() { cout << "Animal created." << endl; }
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying." << endl; }

	// destructor
	~Animal() { cout << "Destructor called." << endl; }

	// methods
	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is: " << name << endl; }
};


int main()
{
	

	return 0;
}