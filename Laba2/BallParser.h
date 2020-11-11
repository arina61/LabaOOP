#pragma once
#include "Parser.h"
#include "Ball.h"
#include "Body.h"

#include <iostream>

class BallParser : public Parser
{
	Body* BodyCreate() override
	{
		Ball* a = new Ball();
		std::cin >> (*a);
		std::cout << (*a);
		return a;
	}
};

