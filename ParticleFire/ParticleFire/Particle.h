#pragma once

namespace BeefEriksonStudios
{
	struct Particle
	{
		Particle();

		double m_x;
		double m_y;
		double m_xSpeed;
		double m_ySpeed;

		void update();
	};
}
