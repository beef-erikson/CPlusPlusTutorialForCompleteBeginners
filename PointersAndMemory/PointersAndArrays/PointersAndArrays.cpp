#include <iostream>
using namespace std;

// Examples of looping through array using pointers
int main()
{
	string texts[] = { "one", "two", "three" };
	string* pTexts = texts;
	
	// Iterate using standard i++
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
	{
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;

	// Iterate using pointer increment
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++)
	{
		cout << *pTexts << " " << flush;
	}
	cout << endl;

	// start and end elements of array
	string* pElement = &texts[0];		// could also just use: string* pElement = texts;
	string* pEnd = &texts[2];

	// Another iteration method using above pointers
	while (true)
	{
		cout << *pElement << " " << flush;
		if (pElement == pEnd)
		{
			break;
		}
		pElement++;
	}
	cout << endl;

	return 0;
}