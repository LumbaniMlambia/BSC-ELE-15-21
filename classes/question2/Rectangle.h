
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    Rectangle(float len,float wid);
    ~Rectangle(); // Destructor
    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;
    float calculateArea() const;
};
