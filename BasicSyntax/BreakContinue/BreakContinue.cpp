#include <iostream>
using namespace std;

int main()
{
	/* Example of break and continue
	for (int i = 0; i < 10; i++)
	{
		cout << "i is: " << i << endl;

		if (i == 1)
		{
			continue;
		}

		if (i == 4)
		{
			break;
		}

		cout << "Looping . . ." << endl;
	}
	*/

	const string password = "hello";
	string input;

	do
	{
		cout << "Enter password > " << flush;
		cin >> input;

		if (input == password)
		{
			break;
		}

		cout << "Incorrect password." << endl;

	} while (true);

	cout << "Password accepted." << endl;


	cout << "Program quitting . . ." << endl;

	return 0;
}