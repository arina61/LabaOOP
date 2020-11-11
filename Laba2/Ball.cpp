#include "Ball.h"
#include <istream>
#include <iostream>

Ball::Ball():Body()
{
}

Ball::Ball(double radius) :Body(radius)
{
}

double Ball::GetRadius() const
{
	return GetLenght();
}

void Ball::SetRadius(double const newRadius)
{
	SetLenght(newRadius);
}

int Ball::Type()
{
	return 3;
}

void Ball::ShowBody()
{
	std::cout << (*this);
}

double Ball::AreaSurface()
{
	return 4 * GetLenght() *_pi;
}

double Ball::Volume()
{
	double V3 = GetLenght() * GetLenght() * GetLenght();
	return 4*(V3*_pi)/3.0;
}

std::istream& operator>>(std::istream& is, Ball& date)
{
	double radius;
	is >> radius;
	date.SetLenght(radius);
	if (radius == 0)
		throw std::exception("incorrect data");
	return is;
}

std::ostream& operator<<(std::ostream& os, Ball& date)
{
	os << "Ball";
	os << "(" << date.GetRadius() << ")\n";
	return os;
}
