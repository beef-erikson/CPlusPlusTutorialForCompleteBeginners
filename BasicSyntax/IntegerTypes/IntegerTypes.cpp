#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int value = 54345;
    cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	// overflow example
	int overflow = 23534634634623463;
	cout << "Overflow, note the number doesn't match: " << overflow << endl;

	long lValue = 2345346346346;
	cout << lValue << endl;

	short sValue = 23;
	cout << sValue << endl;

	// goes by bytes
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short) << endl;

	// only allows positives, can store larger values this way
	unsigned int uValue = 2325235;
	cout << uValue << endl;

	// signed allows both negative and positive, basically same as declaring it as int
	signed int signedValue = -232345;
	cout << signedValue << endl;

	return 0;
}