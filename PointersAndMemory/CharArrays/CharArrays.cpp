#include <iostream>
using namespace std;

int main()
{
	char text[] = "hello";
	
	// loops through array
	for (int i = 0; i < sizeof(text); i++)
	{
		cout << i << ": " << text[i] << endl;
	}

	// shows null string terminator
	for (int i = 0; i < sizeof(text); i++)
	{
		cout << i << ": " << (int)text[i] << endl;
	}

	// breaks loop at null terminator
	int k = 0;
	cout << endl;
	while (true)
	{
		if (text[k] == 0)
		{
			break;
		}
			cout << text[k] << flush;
			k++;
	}
	cout << endl;

	return 0;
}