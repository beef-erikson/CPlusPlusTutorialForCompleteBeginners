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
		// draw particles
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, 0, 128, 255);
			}
		}

		// one white pixel in center
		screen.setPixel(512, 384, 255, 255, 255);

		// draws screen
		screen.update();

		// once events return false, break loop and quit
		if (!screen.processEvents())
		{
			break;
		}
	}

	screen.close();

	return 0;
}