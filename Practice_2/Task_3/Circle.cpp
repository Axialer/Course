#include "Triangle.h";
#include "Circle.h";
#include <iostream>
#include <cmath>
using namespace std;

�ircle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void �ircle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float �ircle::square() {
    float s = 3.14 * pow(radius, 2);
    return s;
}

bool �ircle::triangle_around(float a, float b, float c) {
    Triangle triangle;
    triangle.set(a, b, c);
    double tr_s = triangle.square();
    float r = (tr_s) / ((a + b + c) / 2);
    if (r == radius) {
        return true;
    }
    else {
        return false;
    }
}

bool �ircle::triangle_in(float a, float b, float c) {
    Triangle triangle;
    triangle.set(a, b, c);
    double tr_s = triangle.square();
    float r = (a * b * c) / (4 * tr_s);
    if (r == radius) {
        return true;
    }
    else {
        return false;
    }
}

bool �ircle::check_circle(float r, float x_cntr, float y_cntr) {
    float x_dist = abs(x_cntr - x_center);
    float y_dist = abs(y_cntr - y_center);
    float dots_dist = sqrt(pow(x_dist, 2) + pow(y_dist, 2));
    if (dots_dist < (radius + r)) {
        return true;
    }
    else {
        return false;
    }
}

void �ircle::show() {
    cout << "������ �����: " << radius << endl;
    cout << "����� � �����: " << x_center << endl;
    cout << "����� Y �����: " << y_center << endl;
}
