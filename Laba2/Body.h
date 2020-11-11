#pragma once
#include <istream>

class Body
{
public:
	Body();
	Body(double lenghtBase);//когда lenghtBase==height
	Body(double lenghtbase, double height);

	double GetHeight() const;
	double GetLenght() const;

	void SetHeight(double const newHeight);
	void SetLenght(double const newLenght);

	virtual int Type() = 0;
	virtual void ShowBody() {};
	virtual double AreaSurface();
	virtual double Volume();
	virtual ~Body()=default;

private:
	double _lenghtBase;//длина основания (== радиус)
	double _height; //для шара=0; радиус для конуса
};

