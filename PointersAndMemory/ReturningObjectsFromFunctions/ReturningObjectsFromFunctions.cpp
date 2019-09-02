#include <iostream>
using namespace std;

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
	// demonstration of new - ALWAYS use delete, otherwise memory leak
	Animal* pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	return 0;
}