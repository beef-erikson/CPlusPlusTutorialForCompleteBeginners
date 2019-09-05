#pragma once

namespace BeefEriksonStudios
{
	struct Particle
	{
		const double SPEED_FACTOR = 0.1;
		const double RADIAL_CURVE_FACTOR = 0.00025;

	private:
		double m_speed;
		double m_direction;

	private:
		void init();

	public:
		Particle();

		double m_x;
		double m_y;

		void update(int interval);
	};
}
