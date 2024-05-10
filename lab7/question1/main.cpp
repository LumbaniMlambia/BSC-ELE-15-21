#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    rect.setLength(length);

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Area of the rectangle: " << rect.calculateArea() <<endl;

    return 0;
}
