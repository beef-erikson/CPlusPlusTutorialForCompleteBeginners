#include <iostream>

using namespace std;


void manipulate(double *pValue)
{
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of int in manipulate: " << *pValue << endl;
}


int main()
{
	int nValue = 8;
	int *pValue = &nValue;
	*pValue = 6;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pValue << endl;
	cout << "Int value via pointer: " << *pValue << endl;
	cout << "--------------------------" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

	
	return 0;
}
