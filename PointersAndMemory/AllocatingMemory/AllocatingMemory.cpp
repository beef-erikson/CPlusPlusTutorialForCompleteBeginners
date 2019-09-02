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
	// allocate memory for int
	int* pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;

	// creates 10 animals and deletes all
	Animal* pAnimal = new Animal[10];
	pAnimal[5].setName("Bob");
	pAnimal[5].speak();
	delete[] pAnimal;

	// allocate memory for char
	char* pMem = new char[1000];
	delete[] pMem;

	// Create array of 26 animals, loop through and name them all a-z
	Animal* pAnimal2 = new Animal[26];
	char c = 'a';

	for (int i = 0; i < sizeof(*pAnimal2) - 2; i++, c++)
	{
		string name(1, c);
		pAnimal2->setName(name);
		pAnimal2->speak();
	}
	delete[] pAnimal2;

	return 0;
}