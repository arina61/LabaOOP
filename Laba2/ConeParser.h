#pragma once
#include "Parser.h"
#include "Cone.h"
#include "Body.h"
#include <iostream>

class ConeParser:public Parser
{
public:
	Body* BodyCreate() override
	{
		Cone* a = new Cone();
		std::cin >> (*a);
		std::cout << (*a);
		return a;
	}
};

