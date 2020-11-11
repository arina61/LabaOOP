#pragma once
#include "Body.h"
#include <istream>

class Ball :public Body
{
public:
	Ball();
	Ball(double radius);//lenghtBase = radius

	double GetRadius() const;

	friend std::istream& operator>> (std::istream& is, Ball& date);
	friend std::ostream& operator<< (std::ostream& os, Ball& date);

	void SetRadius(double const newRadius);
	
	int Type() override;
	void ShowBody() override;
	double AreaSurface() override;
	double Volume() override;

private:
	const double _pi = 3.1415;
};

