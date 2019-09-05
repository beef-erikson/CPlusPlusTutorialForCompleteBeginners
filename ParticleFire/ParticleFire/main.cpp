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
	// random seed
	srand(time(NULL));

	// inits screen
	Screen screen;
	screen.init();

	// creates swarm of particles
	Swarm swarm;

	// main loop
	while (true)
	{
		// loop between min and max of red, green and blue values (0 - 255)
		int elapsed = SDL_GetTicks();
		unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

		// draw particles
		const Particle* const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * (Screen::SCREEN_WIDTH / 2);
			int y = (particle.m_y + 1) * (Screen::SCREEN_HEIGHT / 2);

			screen.setPixel(x, y, red, green, blue);
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