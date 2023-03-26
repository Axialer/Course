#pragma once
#include "Cone.h"
class SubCone :
	public Cone
{
private:
	const double pi = 3.14;
	double x, y, z;
	double r;
	double h;
	double subh;
public:
	SubCone()
	{
		x = 0;
		y = 0;
		z = 0;
		r = 0;
		h = 0;
		subh = 0;
	}
	SubCone(double rad, double height, double subheight)
	{
		x = 0;
		y = 0;
		z = 0;
		r = rad;
		h = height;
		subh = subheight;
	}
	SubCone(double X, double Y, double Z, double rad, double height, double subheight)
	{
		x = X;
		y = Y;
		z = Z;
		r = r;
		h = h;
		subh = subh;
	}

	void setCoordinate(double X, double Y, double Z);
	void setRadius(double rad);
	void setHeight(double height, double subheight);
	void getCoordinate(double& X, double& Y, double& Z);

	double getRadius();
	double getHeight(double& h, double& subh);

	double area();
	double volume();

	friend ostream& operator<< (ostream& stream, const SubCone& obj);
	friend istream& operator>> (istream& stream, SubCone& obj);
}; 
