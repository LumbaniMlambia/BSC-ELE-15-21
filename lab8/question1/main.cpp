#define BOX_H

class Box {
public:
    // Constructors
    Box();
    Box(double length, double breadth, double height);

    // Destructor
    ~Box();

    // Setters
    void setLength(double length);
    void setBreadth(double breadth);
    void setHeight(double height);

    // Getters
    double getLength() const;
    double getBreadth() const;
    double getHeight() const;
    double getVolume() const;

    // Operator Overloading
    Box operator+(const Box& otherBox) const;

private:
    double mLength;
    double mBreadth;
    double mHeight;
};