#include <iostream>
using namespace std;

int main()
{
	string text1 = "Hello ";
	string text2 = "Beef";
	string text3 = text1 + text2;

	cout << text1 << endl;
	cout << text2 << endl;
	cout << text1 << text2 << endl;
	cout << text3 << endl;

	return 0;
}