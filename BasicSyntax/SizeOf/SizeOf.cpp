#include <iostream>
using namespace std;

int main()
{
	int values[] = { 4, 67, 3, 2, 235, 33 };

	for (int i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		cout << values[i] << " " << flush;
	}

	return 0;
}