#include "Cone.h"

void cone::setCoordinate(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void cone::setRadius(double rad)
{
	r = rad;
}
void cone::setHeight(double hegiht)
{
	h = height;
}
void cone::getCoordinate(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double cone::getRadius()
{
	return r;
}
double cone::getHeight()
{
	return h;
}

double cone::area()
{
	return pi * r * (r + sqrt(h * h + r * r));
}
double cone::volume()
{
	return pi * r * r * h / 3;
}

ostream& operator<<(ostream& stream, Cone obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.r << " ";
	stream << "h = " << obj.h << "";

	return stream;
}