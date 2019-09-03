#include <iostream>
using namespace std;

// outputs elements in array
void show1(const int nElements, string texts[])
{
	for (int i = 0; i < nElements; i++)
	{
		cout << texts[i] << endl;
	}
}

// same as show1 but used with a pointer
void show2(const int nElements, string *texts)
{
	for (int i = 0; i < nElements; i++)
	{
		cout << texts[i] << endl;
	}
}

// shows size information in addition to outputting elements
// note that numbers of elements supplied in argument must match parameter
void show3(string (&texts)[3])
{
	cout << sizeof(texts) << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
	{
		cout << texts[i] << endl;
	}
}

// return array from function
char* getMemory()
{
	char* pMem = new char[100];
	return pMem;
}

// free up memory
void freeMemory(char* pMem)
{
	delete[] pMem;
}

int main()
{
	string texts[] = { "apple", "orange", "banana" };

	cout << sizeof(texts) << endl;
	
	show1(3, texts);
	show2(3, texts);
	show3(texts);
	
	char* pMemory = getMemory();
	freeMemory(pMemory);
	
	return 0;
}