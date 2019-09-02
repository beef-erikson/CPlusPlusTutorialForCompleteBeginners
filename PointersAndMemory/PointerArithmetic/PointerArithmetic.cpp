#include <iostream>
using namespace std;

int main()
{
	// creates array and a pointer to it
	const int NSTRINGS = 5;
	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };
	
	string* pTexts = texts;
	
	// cycles through elements
	pTexts += 3;
	cout << *pTexts << endl;

	pTexts -= 2;
	cout << *pTexts << endl;

	// runs through array using pointers
	string* pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];
	cout << endl;
	while (pTexts != pEnd)
	{
		cout << *pTexts << endl;
		pTexts++;
	}
	cout << endl;

	// gives number of elements in array
	pTexts = &texts[0];
	long elements = (long)(pEnd - pTexts);
	cout << elements << endl << endl;

	// gives middle element in array
	pTexts = &texts[0];
	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;

	return 0;
}