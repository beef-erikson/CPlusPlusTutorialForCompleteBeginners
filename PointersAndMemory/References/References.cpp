#include <iostream>
using namespace std;

// changes whatever value is passed in
void changeSomething(double &value)
{
	value = 123.4;
}

int main()
{
	// reference example. basically value2 is just a synonym of value1
	int value1 = 8;
	int& value2 = value1;
	value2 = 10;

	cout << "Value 1: " << value1 << "  Value 2: " << value2 << endl;

	// function that takes a reference variable
	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	return 0;
}