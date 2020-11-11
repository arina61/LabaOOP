#pragma once
#include "Body.h"
#include <istream>

class Cone :public Body
{
public:
	Cone();
	Cone(double radius, double height);//lenghtBase = radius

	double GetInclined() const;

	friend std::istream& operator>> (std::istream& is, Cone& date);
	friend std::ostream& operator<< (std::ostream& os, Cone& date);
	
	void ShowBody() override;
	int Type() override;
	double AreaSurface() override;
	double Volume() override;

private:
	double _inclined;
	const double _pi = 3.1415;

	double Sqrt();
};

