#include "Screen.h"

namespace BeefEriksonStudios
{
	// constructor
	Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL)
	{
	}

	// initializes program
	bool Screen::init()
	{
		// tries to init
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			printf("Could not initialize: %s\n", SDL_GetError());
			return 0;
		}

		// sets up window
		m_window = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		// checks window is setup
		if (m_window == NULL)
		{
			SDL_Quit();
			printf("Could not create window: %s\n", SDL_GetError());
			return false;
		}

		// sets renderer using vsync and texture in RGBA mode
		m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
		m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC,
			SCREEN_WIDTH, SCREEN_HEIGHT);

		// verifies renderer and texture created
		if (m_renderer == NULL)
		{
			printf("Could not create renderer: %s\n", SDL_GetError());
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}
		if (m_texture == NULL)
		{
			printf("Could not create texture: %s\n", SDL_GetError());
			SDL_DestroyRenderer(m_renderer);
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		// sets buffer for pixels on screen
		m_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

		// writes pixel info (memset sets all RGBA values, 0 being black)
		SDL_memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

		return true;
	}

	// checks events
	bool Screen::processEvents()
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			// quits on window close
			if (event.type == SDL_QUIT)
			{
				return false;
			}
		}
		return true;
	}

	// sets pixel buffer to x/y value by the RGB values
	void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
	{
		Uint32 color = 0;
		Uint8 alpha = 0xFF;

		color += red;
		color <<= 8;
		color += green;
		color <<= 8;
		color += blue;
		color <<= 8;
		color += alpha;

		m_buffer[(y * SCREEN_WIDTH) + x] = color;
	}

	// updates screen
	void Screen::update()
	{
		SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
		SDL_RenderClear(m_renderer);
		SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
		SDL_RenderPresent(m_renderer);
	}

	// kills program and deallocates everything
	void Screen::close()
	{
		delete[] m_buffer;
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyTexture(m_texture);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
	}
}