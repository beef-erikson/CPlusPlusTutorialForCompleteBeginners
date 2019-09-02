#include <iostream>
using namespace std;

class Animal
{
private:
	string name;

public:
	// regular constructor
	Animal() { cout << "Animal created." << endl; };
	// copy constructor - note must be const and can't call non-const methods
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying" << endl; };
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };
};

int main()
{
	// uses regular constructor
	Animal animal1;
	animal1.setName("Freddy");
	animal1.speak();

	// copy constructor used
	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");
	animal2.speak();

	// another way to use copy constructor
	Animal animal3(animal1);
	animal3.speak();

	return 0;
}