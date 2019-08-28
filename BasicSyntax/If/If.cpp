#include <iostream>

using namespace std;

int main()
{
	string password = "hello";
	cout << "Enter password > " << flush;
	
	string input;
	cin >> input;

	if(input == password)
	{
		cout << "Correct password." << endl;
	}

	if (input != password)
	{
		cout << "Access denied." << endl;
	}

	return 0;
}