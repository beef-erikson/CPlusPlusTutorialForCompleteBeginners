#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// 0x123456FF

	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;
	unsigned char alpha = 0xFF;

	unsigned int color = 0;

	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	color += alpha;

	cout << setw(8) << hex << color << endl;
}