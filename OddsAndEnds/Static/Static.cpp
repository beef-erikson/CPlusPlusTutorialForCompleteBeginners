#include <iostream>
using namespace std;

// .h header file
class Test
{
public:
	static int const MAX = 99;

private:
	static int count;
	int id;

public:
	Test();
	static void showInfo();
	int getId();
};


// .cpp source
int Test::count = 0;

// prefix increment so that it starts at 1 when instantiating 
Test::Test()
{ 
	id = ++count; 
}

void Test::showInfo()
{
	cout << count << endl;
}

int Test::getId()
{
	return id;
}


int main()
{
	cout << Test::MAX << endl;

	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;

	Test test2;
	cout << "Object 2 ID: " << test2.getId() << endl;

	Test::showInfo();

	return 0;
}