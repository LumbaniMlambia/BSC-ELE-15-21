#include "Shapes.h"
const float PI=3.14;
namespace shapes {

    Square::Square() : sideLength(0.0) {}

    Square::Square(float side) : sideLength(side) {}

    Square::~Square() {}

    void Square::setSideLength(float side) {
        sideLength = side;
    }

    float Square::getSideLength() const {
        return sideLength;
    }

    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }

    Circle::Circle() : radius(0.0) {}

    Circle::Circle(float r) : radius(r) {}

    Circle::~Circle() {}

    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() const {
        return radius;
    }

    float Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    float Area::calculateArea(const Triangle& triangle) {
        return (triangle.getBase() * triangle.getHeight()) / 2.0;
    }

    float Area::calculateArea(const Circle& circle) {
         
        return PI * circle.getRadius() * circle.getRadius();
    }

}
