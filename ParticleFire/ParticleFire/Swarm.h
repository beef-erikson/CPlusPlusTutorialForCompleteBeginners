#pragma once

#include "Particle.h"

namespace BeefEriksonStudios
{
	class Swarm
	{
	public:
		// number of particles to display
		const static int NPARTICLES = 5000;

	private:
		Particle* m_pParticles;

	public:
		Swarm();
		~Swarm();

	public:
		const Particle* const getParticles() { return m_pParticles; };
	};
}
