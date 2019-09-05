#include <stdio.h>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "Screen.h"
#include "Swarm.h"

using namespace BeefEriksonStudios;

int main(int argc, char** argv)
{
	// range support
	const int HALF_WIDTH = Screen::SCREEN_WIDTH / 2;

	// color shift speeds
	const double RED_SHIFT = 0.0003;
	const double GREEN_SHIFT = 0.0003;
	const double BLUE_SHIFT = 0.0001;

	// random seed
	srand(time(NULL));

	// inits screen
	Screen screen;
	screen.init();

	// create swarm of particles
	Swarm swarm;

	// main loop
	while (true)
	{
		int elapsed = SDL_GetTicks();

		// starts swarm
		swarm.update(elapsed);
		
		// loop between min and max of red, green and blue values (0 - 255)
		unsigned char red = (1 + sin(elapsed * RED_SHIFT)) * 128;
		unsigned char green = (1 + sin(elapsed * GREEN_SHIFT)) * 128;
		unsigned char blue = (1 + sin(elapsed * BLUE_SHIFT)) * 128;

		// draw particles
		const Particle* const pParticles = swarm.getParticles();

		// sets x and y range to be circular and centered in middle
		for (int i = 0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * HALF_WIDTH;
			int y = particle.m_y * HALF_WIDTH + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}

		// blurs using box blur
		screen.boxBlur();

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