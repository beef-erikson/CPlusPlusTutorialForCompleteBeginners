#include <stdio.h>
#include <SDL.h>
#include "Screen.h"

using namespace BeefEriksonStudios;

int main(int argc, char** argv)
{
	Screen screen;

	screen.init();

	// main loop
	while (true)
	{
		if (!screen.processEvents())
		{
			break;
		}
	}

	screen.close();

	return 0;
}