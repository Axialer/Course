#include <iostream>
#include "SubCone.h"

using namespace std;

void SubCone::setCoordinate(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void SubCone::setRadius(double rad)
{
	r = r;
}
void SubCone::setHeight(double height, double subheight)
{
	h = height;
	subh = subheight;
}

void SubCone::getCoordinate(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double SubCone::getRadius()
{
	return R;
}
double SubCone::getHeight(double& height, double& subheight)
{
	height = h;
	subheight = subh;
	return 0;
}

double SubCone::area()
{
	return (pi * r * (r + sqrt(h * h + r * r)) - pi * r * (r + sqrt((h - subh) * (h - subh) + r * r)));
}
double SubCone::volume()
{
	return (pi * r * r * h / 3) - (pi * r * r * (h - subh) / 3);
}

ostream& operator<< (ostream& stream, const SubCone& obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.r << " ";
	stream << "H = " << obj.h << " ";
	stream << "h = " << obj.subh << " ";
	return stream;
}
istream& operator>> (istream& stream, SubCone& obj)
{
	stream >> obj.x;
	stream >> obj.y;
	stream >> obj.z;
	stream >> obj.r;
	stream >> obj.h;
	stream >> obj.subh;
	return stream;
}