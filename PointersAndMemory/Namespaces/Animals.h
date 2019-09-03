#pragma once

#include <iostream>
using namespace std;

namespace tdm
{
	const string CATNAME = "Tiddles";

	class Cat
	{
	public:
		Cat();
		~Cat();
		void speak();
	};
}