#include "Triangle.h";
#include "Circle.h";
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle triangles[3];
    double a, b, c;

    for (int i = 0; i < 3; i++) {
        cout << "Введите стороны A, B, C для треугольника №" << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        triangles[i].set(a, b, c);
        if (!(triangles[i].exst_tr())) {
            triangles[i].show();
            cout << "Треугольника с такими сторонами не существует, попробуйте еще раз!" << endl;
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        triangles[i].show();
        cout << "Периметр треугольника: " << triangles[i].perimetr() << endl;
        cout << "Площадь треугольника: " << triangles[i].square() << endl;
    }

    Сircle circles[3]{
        Сircle(0, 0, 0),
        Сircle(0, 0, 0),
        Сircle(0, 0, 0)
    };

    float r, x_center, y_center;

    for (int i = 0; i < 3; i++) {
        cout << "Введите радиус, центр X, центр Y для окружности №" << i + 1 << " через пробел: " << endl;
        cin >> r >> x_center >> y_center;
        circles[i].set_circle(r, x_center, y_center);
    }

    for (int i = 0; i < 3; i++) {
        circles[i].show();
        cout << "Площадь круга: " << circles[i].square() << endl;
        cout << "Введите A, B, C для треугольника, который находится внутри или снаружи круга №" << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        cout << "Есть ли ABC внутри? - " << circles[i].triangle_in(a, b, c) << endl;
        cout << "ABC находится снаружи? - " << circles[i].triangle_around(a, b, c) << endl;
        float r2, x2, y2;
        cout << "Введите данные круга, чтобы проверить, пересекается ли он между (R, Xc, Yc):" << endl;
        cin >> r2 >> x2 >> y2;
        cout << "Круги пересекаются? - " << circles[i].check_circle(r2, x2, y2) << endl;
    }
    return 0;
}