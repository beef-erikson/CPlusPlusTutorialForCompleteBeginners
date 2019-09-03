#pragma once

#include <iostream>
using namespace std;

namespace cats
{
	const string CATNAME = "Freddy";

	class Cat
	{
	public:
		Cat();
		~Cat();
		void speak();
	};
}