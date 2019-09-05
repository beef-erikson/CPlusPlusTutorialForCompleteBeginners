#pragma once

namespace BeefEriksonStudios
{
	struct Particle
	{
		Particle();

		double m_x;
		double m_y;
		double m_speed;
		double m_direction;

		void update();
	};
}
