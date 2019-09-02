#include <iostream>
using namespace std;

int main()
{
	char text[] = "Hello #100DaysOfCode!";
	
	// sets start and end points of array
	int nChars = sizeof(text) - 1;
	char* pStart = text;
	char* pEnd = text + nChars - 1;

	// reverses char array using pointers
	while (pStart < pEnd)
	{
		// swaps chars
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		// moves pointers
		pStart++;
		pEnd--;
	}

	// outputs
	cout << text << endl;

	return 0;
}