#include "Particle.h"
#include <stdlib.h>

namespace BeefEriksonStudios
{
	Particle::Particle()
	{
		// sets x and y to range between -1 and 1
		m_x = (2.0 * rand()) / RAND_MAX - 1;
		m_y = (2.0 * rand()) / RAND_MAX - 1;
	}
}