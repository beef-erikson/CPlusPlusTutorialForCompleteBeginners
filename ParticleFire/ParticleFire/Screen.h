#pragma once

#include <SDL.h>
#include <stdio.h>

namespace BeefEriksonStudios
{
	class Screen
	{
	public:
		const static int SCREEN_WIDTH = 1024;
		const static int SCREEN_HEIGHT = 768;

	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer;

	public:
		Screen();

	public:
		bool init();
		bool processEvents();
		void close();
	};
}
