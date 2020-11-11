#include "Body.h"

Body::Body()
{
	_lenghtBase = 0;
	_height = 0;
}

Body::Body(double lenghtBase)
{
	_lenghtBase = lenghtBase;
	_height = 0;//не используется
}

Body::Body(double lenghtbase, double height)
{
	_lenghtBase = lenghtbase;
	_height = height;
}

double Body::GetHeight() const
{
	return _height;
}

double Body::GetLenght() const
{
	return _lenghtBase;
}

void Body::SetHeight(double const newHeight)
{
	_height = newHeight;
}

void Body::SetLenght(double const newLenght)
{
	_lenghtBase = newLenght;
}


double Body::AreaSurface()
{
	return 0;
}

double Body::Volume()
{
	return 0;
}
