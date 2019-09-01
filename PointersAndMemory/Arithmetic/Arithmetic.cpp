#include <iostream>
using namespace std;


// Take large numbers of seconds and convert it to hours, minutes, seconds
void convert_time(int totalSeconds)
{
	int hours = totalSeconds / 3600;
	int minutes = (totalSeconds - (hours * 3600)) / 60;
	int seconds = totalSeconds - ((hours * 3600) + (minutes * 60));

	cout << "hours: " << hours << " minutes: " << minutes << " seconds: " << seconds << endl;
}


// For loop that iterates 10,000 times; outputs a dot every 100 iterations
void big_loop()
{
	int numberOfDots = 0;

	for (int i = 0; i < 10000; i++)
	{
		if (i % 100 == 0)
		{
			cout << "." << flush;
			numberOfDots++;
		}
	}

	cout << endl << numberOfDots << endl;
}


int main()
{
	convert_time(7320);
	cout << "---------------" << endl;

	big_loop();
	cout << endl << "---------------" << endl;

	double value1 = (double)7 / 2;
	cout << value1 << endl;

	int value2 = (int)7.9;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 4;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5;
	cout << value4 << endl;

	int value5 = 14 % 5;
	cout << value5 << endl;

	double equation = ((5 / 4) % 2) + (2.3 * 6);
	cout << equation << endl;

	return 0;
}