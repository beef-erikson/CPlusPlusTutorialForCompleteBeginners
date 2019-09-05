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
		Uint32* m_buffer1;
		Uint32* m_buffer2;

	public:
		Screen();

	public:
		bool init();
		bool processEvents();

		void boxBlur();
		void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
		void update();
		void close();
	};
}
