#include <iostream>
using namespace std;

int main()
{
	int numberCats = 5;
	int numberDogs = 2;
	int numberAnimals = numberCats + numberDogs;

    cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total number of pets: " << numberAnimals << endl;
	
	cout << "New dog acquired!" << endl;
	numberDogs++;
	cout << "New number of dogs: " << numberDogs << endl;

	return 0;
}
