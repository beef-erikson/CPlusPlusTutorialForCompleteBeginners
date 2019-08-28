#include <iostream>
using namespace std;

int main()
{
	cout << "1. \tAdd new record." << endl;
	cout << "2. \tDelete record." << endl;
	cout << "3. \tView record." << endl;
	cout << "4. \tSearch record" << endl;
	cout << "5. \tQuit" << endl << endl;

	cout << "Enter selection > " << flush;

	int value;
	cin >> value;

	switch (value)
	{
	case 1:
		cout << "Adding new record . . ." << endl;
		break;
	case 2:
		cout << "Deleting record . . ." << endl;
		break;
	case 3:
		cout << "Viewing record . . ." << endl;
		break;
	case 4:
		cout << "Searching record . . ." << endl;
		break;
	case 5:
		cout << "Quitting program . . ." << endl;
		break;
	default:
		cout << "Invalid option." << endl;
	}

	return 0;
}