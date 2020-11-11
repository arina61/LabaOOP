#include "Cone.h"
#include <math.h>
#include <istream>
#include <iostream>

Cone::Cone() :Body()
{ 
	_inclined = 0;
}

Cone::Cone(double radius, double height):Body(radius, height)
{
	_inclined = Sqrt();
}

double Cone::GetInclined() const
{
	return _inclined;
}


void Cone::ShowBody()
{
	std::cout << (*this);
}

int Cone::Type()
{
	return 2;
}

double Cone::AreaSurface()
{
	return _pi * GetLenght() * (_inclined + GetLenght());
}

double Cone::Volume()
{
	return _pi * GetLenght() * GetLenght() * GetHeight() / 3;
}

double Cone::Sqrt()
{
	return sqrt((GetLenght() * GetLenght() + GetHeight() * GetHeight()));
}

std::istream& operator>>(std::istream& is, Cone& date)
{
	double lenght, height;
	is >> lenght >> height;
	date.SetLenght(lenght);
	date.SetHeight(height);
	if (height == 0 || lenght == 0)
		throw std::exception("incorrect data");
	return is;
}

std::ostream& operator<<(std::ostream& os, Cone& date)
{
	os << "Cone";
	os << "(" << date.GetLenght() << ")";
	os << "(" << date.GetHeight() << "), ";
	os << "forming a cone - " << date.GetInclined() << "\n";
	
	return os;
}
