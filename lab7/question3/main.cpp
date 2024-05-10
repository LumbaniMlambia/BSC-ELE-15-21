#include <iostream>
#include "Shapes.h"

using namespace std;
int main() {
    using namespace shapes;

    Square square;
    float sideLength;

    cout << "Enter the side length of the square: ";
    cin >> sideLength;
    square.setSideLength(sideLength);

    Triangle triangle;
    float base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;
    triangle.setBase(base);

    cout << "Enter the height of the triangle: ";
    cin >> height;
    triangle.setHeight(height);

    Circle circle;
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circle.setRadius(radius);

    cout << "Area of the square: " << Area::calculateArea(square) << endl;
    cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
    cout << "Area of the circle: " << Area::calculateArea(circle) << endl;

    return 0;
}
