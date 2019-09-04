#include <stdio.h>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
using namespace BeefEriksonStudios;

int main(int argc, char** argv)
{
	Screen screen;

	screen.init();

	// main loop
	while (true)
	{
		// loop between min and max of red, green and blue values (0 - 255)
		int elapsed = SDL_GetTicks();
		unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

		// sets pixels based on RGB
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, red, green, blue);
			}
		}

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