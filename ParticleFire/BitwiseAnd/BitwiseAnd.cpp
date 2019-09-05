#include <iostream>

using namespace std;

int main()
{
	int color = 0x123456;

	// strips color values using bitwise &
	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = color & 0x0000FF;

	cout << hex << (int)red << " " << (int)green << " " << (int)blue << endl;

	// or the following
	unsigned char red2 = color >> 16;
	unsigned char green2 = color >> 8;
	unsigned char blue2 = color;

	cout << hex << (int)red2 << " " << (int)green2 << " " << (int)blue2 << endl;

	// for the record, bitwise or: |

	return 0;
}