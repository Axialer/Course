#include "Figure.h";
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

    Figure figures[3]{
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0)
    };

    float x1, x2, x3, x4, y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {
        cout << "Введите (x1, y1), (x2, y2), (x3, y3), (x4, y4)" << i + 1 << "через пробел: " << endl;
        cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

        figures[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
    }

    for (int i = 0; i < 3; i++) {
        figures[i].show();

        cout << "Находится в круге:" << figures[i].is_in_circle() << ", " << "Находится вне круга:" << figures[i].is_out_circle() << endl;
        cout << "Прямоугольный четырёхугольник: " << figures[i].is_prug() << endl;
        cout << "Ромб: " << figures[i].is_romb() << endl;
        cout << "Квадат: " << figures[i].is_square() << endl;
    }
    return 0;
}
