#include<iostream>
#include "Box.h"

int main(){
    Box Box1;
    Box Box2;
    Box Box3;

    double volume=0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume=Box1.getVolume();
    cout<<"volume of box1 is "<<volume<<endl;

    volume=Box2.getVolume();
    cout<<"volume of box2 is "<<volume<<endl;

    Box3=Box1+Box2;

    volume=Box3.getVolume();
    cout<<"volume of box3 is "<<volume<<endl;

    return 0;
}