#include <cmath>
#include <iostream>

using namespace std;

class Cone
{
private:
	const double pi = 3.14;
	double x, y, z;
	double r;
	double h;
public:
	Cone()
	{
		x = 0;
		y = 0;
		z = 0;
		r = 0;
		h = 0;
	}
	Cone(double rad, double height)
	{
		x = 0;
		y = 0;
		z = 0;
		r = rad;
		h = height;
	}
	Cone(double X, double Y, double Z, double rad, double height)
	{
		x = X;
		y = Y;
		z = Z;
		r = rad;
		h = height;
	}

	void setCoordinate(double X, double Y, double Z);
	void setRadius(double rad);
	void setHeight(double height);
	void getCoordinate(double& X, double& Y, double& Z);
	double getRadius();
	double getHeight();

	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, cone obj);
};
