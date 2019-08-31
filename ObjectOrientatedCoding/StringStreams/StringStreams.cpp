#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int age = 38;
	string name = "Beef";
	
	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;

	return 0;
}