#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person1;
	cout << person1.toString() << endl;

	Person person2("Beef");
	cout << person2.toString() << endl;

	Person person3("Sally", 32);
	cout << person3.toString() << endl;

	return 0;
}