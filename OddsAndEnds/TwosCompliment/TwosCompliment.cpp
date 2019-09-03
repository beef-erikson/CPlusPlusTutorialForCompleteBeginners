#include <iostream>
using namespace std;

int main()
{
	char value = 127;

	cout << (int)value << endl;
	// overflows to minimum
	value++;
	cout << (int)value << endl;

	// why? - char is 8 bits. 2 pow 8 = 256. 256 / 2 = 128 (for postive and negative).
	// must store 0, hence 127 max / -128 minimum

	return 0;
}