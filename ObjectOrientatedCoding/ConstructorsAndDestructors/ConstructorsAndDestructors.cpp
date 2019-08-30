#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
	cout << "Starting program . . ." << endl << endl;
	
	{
		Cat midnight;
		midnight.speak();
	}

	cout << endl << "Ending program . . ." << endl;
	return 0;
}