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


// creates an animal object and returns it - note that 'new' allocates memory on the heap rather than the stack
Animal *createAnimal()
{
	Animal* pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}


int main()
{
	// note we still need to delete to deallocate memory
	Animal* pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;

	return 0;
}