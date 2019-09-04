#include "Swarm.h"

namespace BeefEriksonStudios
{
	Swarm::Swarm()
	{
		m_pParticles = new Particle[NPARTICLES];
	}

	Swarm::~Swarm() 
	{
		delete[] m_pParticles;
	}
}