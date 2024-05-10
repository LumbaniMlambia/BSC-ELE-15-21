#include<iostream>

using namespace std;
double l,h,w,b;
int choice;
double areaOfTriangle(double base,double hieght){
    double area=base*hieght/2;
    return area;
}

double areaOfSquare(double length){
    double area=length*length;

    return area;
}

double areaOfRectangle(double length,double width){
    double area=length*width;

    return area;
}

int main(){
    cout<<"select the shape to calculate area:"<<endl<<"    1. square."<<endl<<"    2. rectangle."<<endl<<"    3. triangle."<<endl<<"    4. quit program."<<endl; 
cout<<"your choice: ";
cin>>choice;

if(choice==1){
    cout<<"enter the length:    ";
    cin>>l;
    double result=areaOfSquare(l);
cout<<"the area of a square is "<<result<<"Cm2";
}

else if(choice==2){
    cout<<"enter the length:    ";
    cin>>l;
    cout<<"enter the width:    ";
    cin>>w;
    double result=areaOfRectangle(l,w);
cout<<"the area of a rectangle is "<<result<<"Cm2";
}

else if(choice==3){
    cout<<"enter the base:    ";
    cin>>b;
    cout<<"enter the hieght:    ";
    cin>>h;
    double result=areaOfTriangle(b,h);
cout<<"the area of a triange is "<<result<<"Cm2";
}

else if (choice==4){
    cout<<" you have chosen to quit the program";
    exit(0);
}
    else
    {
    cout<<" you have entered an invalid input please select a valid response!!";
    }
return 0;
}
