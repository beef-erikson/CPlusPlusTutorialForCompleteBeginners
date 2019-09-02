#include <iostream>
using namespace std;

class Animal
{
private:
	string name;

public:
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };
};


int main()
{
	const double PI = 3.141592;
	//VALUE = 10;	Cannot change a const.
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;
	// const int* const pValue = &value;  this will cause both below to error.
	int* pValue = &value;
	cout << *pValue << endl;

	int number = 11;
	pValue = &number;	// error with this: int* const pValue = &value;
	*pValue = 12;		// error with this: const int* pValue = &value;

	cout << *pValue << endl;

	return 0;
}