#include <iostream>
using namespace std;

int main()
{
	cout << "Array of integers" << endl;
	cout << "-----------------" << endl;

	int values[3];

	values[0] = 23;
	values[1] = 2352;
	values[2] = 112;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;


	cout << endl << "Array of doubles" << endl;
	cout << "----------------" << endl;

	double numbers[4] = {4.5, 2.3, 5.3, 8.1};

	for (int i = 0; i < 4; i++)
	{
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}


	cout << endl << "Initializing with zero values" << endl;
	cout << "----------------" << endl;

	int numberArray[8] = {};

	for (int i = 0; i < 8; i++)
	{
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}


	cout << endl << "Initializing with strings" << endl;
	cout << "----------------" << endl;

	string texts[] = { "apple", "banana", "orange" };

	for (int i = 0; i < 3; i++)
	{
		cout << "Element at index " << i << ": " << texts[i] << endl;
	}

	return 0;
}