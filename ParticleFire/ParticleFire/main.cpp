#include "SDL.h"
#include <stdio.h>

int main(int argc, char** argv)
{
	// constants
	const int SCREEN_WIDTH = 1024;
	const int SCREEN_HEIGHT = 768;

	// tries to init
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Could not initialize: %s\n", SDL_GetError());
		return 1;
	}

	// sets up window
	SDL_Window* window = SDL_CreateWindow("Particle Fire Explosion",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	// checks window is setup
	if (window == NULL)
	{
		SDL_Quit();
		printf("Could not create window: %s\n", SDL_GetError());
		return 2;
	}

	// sets renderer using vsync and texture in RGBA mode
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
	SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC,
		SCREEN_WIDTH, SCREEN_HEIGHT);

	// verifies renderer and texture created
	if (renderer == NULL)
	{
		printf("Could not create renderer: %s\n", SDL_GetError());
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 3;
	}
	if (texture == NULL)
	{
		printf("Could not create texture: %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 4;
	}

	// sets buffer for pixels on screen
	Uint32* buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

	// writes pixel info to create white screen (sets RGBA to 0xFF (255))
	SDL_memset(buffer, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

	// updates screen
	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);

	// game loop variables
	bool quit = false;
	SDL_Event event;

	// main loop
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

	// kills program and deallocates everything
	delete[] buffer;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}