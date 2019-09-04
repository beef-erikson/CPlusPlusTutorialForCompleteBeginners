#include "SDL.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	const int SCREEN_WIDTH = 1024;
	const int SCREEN_HEIGHT = 768;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Could not initialize: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Window* window = SDL_CreateWindow("Particle Fire Explosion",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL)
	{
		SDL_Quit();
		printf("Could not create window: %s\n", SDL_GetError());
		return 2;
	}

	// game loop variables
	bool quit = false;
	SDL_Event event;

	while (!quit)
	{
		// checks events
		while (SDL_PollEvent(&event))
		{
			// quits on window close
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}