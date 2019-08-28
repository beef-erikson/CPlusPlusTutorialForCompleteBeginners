#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float fValue = 123.456789;
	cout << "Standard: " << fValue << endl;
	cout << fixed << "Fixed: " << fValue << endl;
	cout << scientific << "Scientific: " << fValue << endl << endl;

	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << setprecision(20) << fixed << fValue << endl << endl;

	double dValue = 123.456789;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << setprecision(20) << fixed << dValue << endl << endl;

	long double lValue = 123.456789876543210;
	cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
	cout << setprecision(20) << fixed << lValue << endl;

	return 0;
}