#include <stdlib.h>
#include <SDL.h>
#include "Particle.h"

namespace BeefEriksonStudios
{
	// sets x and y to random angle and speed starting from center of window
	Particle::Particle() : m_x(0), m_y(0)
	{
		m_direction = (2 * M_PI * rand()) / RAND_MAX;
		m_speed = (0.0005 * rand()) / RAND_MAX;
	}

	// moves particles within window randomly using delta time
	void Particle::update(int interval)
	{
		double xSpeed = m_speed * cos(m_direction);
		double ySpeed = m_speed * sin(m_direction);
		
		m_x += xSpeed * interval;
		m_y += ySpeed * interval;
	}
}