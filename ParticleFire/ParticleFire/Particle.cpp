#include <stdlib.h>
#include <SDL.h>
#include "Particle.h"

namespace BeefEriksonStudios
{
	// sets x and y to random angle and speed starting from center of window
	Particle::Particle() : m_x(0), m_y(0)
	{
		init();
	}

	void Particle::init()
	{
		m_x = 0;
		m_y = 0;
		m_direction = (2 * M_PI * rand()) / RAND_MAX;
		m_speed = (SPEED_FACTOR * rand()) / RAND_MAX;
		m_speed *= m_speed;
	}

	// moves particles within window randomly using delta time
	void Particle::update(int interval)
	{
		m_direction += interval * RADIAL_CURVE_FACTOR;
		double xSpeed = m_speed * cos(m_direction);
		double ySpeed = m_speed * sin(m_direction);
		
		m_x += xSpeed * interval;
		m_y += ySpeed * interval;

		// re-initialize particle once it leaves screen
		if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1)
		{
			init();
		}

		// every 100 ticks, re-initialize
		if (rand() < RAND_MAX / 100)
		{
			init();
		}
	}
}