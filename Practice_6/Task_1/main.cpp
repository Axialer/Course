#include <iostream>
#include "Cone.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	Cone c1(3, 7);
	Cone c2(1, 2, 3, 5, 10);

	cout << "Площадь первого конуса: " << c1.area() << "\n";
	cout << "Объём первого конуса: " << c1.volume() << "\n";
	cout << "Площадь второго конуса: " << c2.area() << "\n";
	cout << "Объём второго конуса: " << c2.volume() << "\n";

	cout << "\n";
	int size;
	double x, y, z, r, h;
	cout << "Введите кол-во конусов ->";
	cin >> size;
	Cone* Cones = new Cone[size];
	cout << "\n";
	cout << "Вводите данные в формате {x,y,z,r,h}";
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Введите данные конуса номер " << i + 1 << " : ";
		cin >> x >> y >> z >> r >> h;
		Cones[i].setCoordinate(x, y, z);
		Cones[i].setRadius(r);
		Cones[i].setHeight(h);
	}

	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Данные конуса номер " << i + 1 << " : \n";
		cout << Cones[i] << "\n";
		cout << "	S = " << Cones[i].area() << "\n";
		cout << "	V = " << Cones[i].volume() << "\n";
	}

	Cone Cones2[3];
	Cones2[0].setCoordinate(0, 0, 0); 
  Cones2[0].setRadius(18); 
  Cones2[0].setHeight(20);
	Cones2[1].setCoordinate(0, 1, 0); 
  Cones2[1].setRadius(0.0059); 
  Cones2[1].setHeight(10);
	Cones2[2].setCoordinate(1, 0, 0); 
  Cones2[2].setRadius(2.71); 
  Cones2[2].setHeight(3.14);

	cout << "\n";
	cout << "Статический массив: ";
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Данные конуса номер " << i + 1 << " : \n";
		cout << Cones[i] << "\n";
		cout << "	S = " << Cones2[i].area() << "\n";
		cout << "	V = " << Cones2[i].volume() << "\n";
	}

	return 0;
}
