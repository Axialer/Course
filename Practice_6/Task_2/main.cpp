#include <iostream>
#include "SubCone.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int size;
	cout << "Введите кол-во усечённых конусов\n";
	cin >> size;

	SubCone* Subcone = new SubCone[size];

	cout << "\n";
	cout << "Введите усечённый конус в формате {x y z R H subH}\n";

	for (int i = 0; i < size; i++)
	{
		cout << "Введите данные усечённого конуса номер " << i + 1 << ": ";
		cin >> Subcone[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "\n";
		cout << "Данные конуса номер " << i + 1 << ":\n";
		cout << Subcone[i] << "\n";
		cout << "S = " << Subcone[i].area() << "\n";
		cout << "V = " << Subcone[i].volume() << "\n";
	}

	return 0;
}
