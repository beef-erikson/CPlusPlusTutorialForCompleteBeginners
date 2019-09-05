#pragma once

#include "Particle.h"

namespace BeefEriksonStudios
{
	class Swarm
	{
	public:
		// number of particles to display
		const static int NPARTICLES = 5000;
		const Particle* const getParticles() { return m_pParticles; };

	private:
		Particle* m_pParticles;
		int lastTime;

	public:
		Swarm();
		~Swarm();

	public:
		void update(int elapsed);
	};
}
