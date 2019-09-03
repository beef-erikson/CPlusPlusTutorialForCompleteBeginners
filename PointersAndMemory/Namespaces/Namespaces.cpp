#include <iostream>
#include "Cat.h"
#include "Animals.h"

using namespace std;
using namespace tdm;

int main()
{
	cats::Cat cat;
	cat.speak();

	Cat cat2;
	cat2.speak();

	cout << CATNAME << endl;
	cout << cats::CATNAME << endl;

	return 0;
}