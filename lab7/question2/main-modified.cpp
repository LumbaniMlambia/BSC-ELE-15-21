#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    // Creating rectangle using default constructor and setting values via accessor methods
    Rectangle rect1;
    float length1, width1;

    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    rect1.setLength(length1);

    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    rect1.setWidth(width1);

    cout << "Area of the first rectangle: " << rect1.calculateArea() <<endl;

    // Creating rectangle using overloaded constructor
    float length2, width2;

    cout << "Enter the length of the second rectangle: ";
    cin >> length2;

    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
