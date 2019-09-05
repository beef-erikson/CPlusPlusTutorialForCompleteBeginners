#pragma once
#include <iostream>

namespace BeefEriksonStudios {
	void saySomething()
	{
		std::cout << "Hello There!" << std::endl;
	}

	class Cat
	{
	public:
		Cat() {};
		void speak();
	};
}