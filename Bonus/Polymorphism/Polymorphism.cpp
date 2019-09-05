#include <iostream>

using namespace std;

// demonstrating of polymorphism - use virtual when you know the value is going to be overridden in subclass
class Animal
{
public:
	virtual void speak() = 0;
};

class Cat : public Animal {
public:
	virtual void speak()
	{
		cout << "RrrrRRrrrr" << endl;
	}
};

class HouseCat : public Cat {
public:
	virtual void speak()
	{
		cout << "Meouw" << endl;
	}
};


int main()
{
	Animal* pCat = new Cat;
	pCat->speak();
	delete pCat;

	HouseCat houseCat;
	houseCat.speak();
}