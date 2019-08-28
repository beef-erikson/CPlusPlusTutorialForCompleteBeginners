#include <iostream>
using namespace std;

int main()
{
	string animals[][3] =
	{
		{ "fox", "dog", "cat" },
		{ "mouse", "squirrel", "parrot" }
	};

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
	{
		for (int j = 0; j < sizeof(animals[0]) / sizeof(string); j++)
		{
			cout << animals[i][j] << " " << flush;
		}
		
		cout << endl;
	}

	return 0;
}