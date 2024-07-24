#include<iostream>
using namespace std;

//base class
class base{

public:

// constructor
 base(bool print = true){
    if(print){
    cout<< " calling from base class"<<endl;
}
 }

 virtual void area(){
    cout<< " we are going to find the area of different shapes to better explain the polymorphism\n"<<endl;
}
};


class circle : public base {

    public:

    circle(bool print = true) : base(false){
        if(print){
        cout<< " calling from circle class"<<endl;
        }
    }

    virtual void area(float radius){
        cout<< " the area of the circle is = "<< 2*3.14*radius*radius<<endl<<endl;
    }

};

class rectangle : public circle{

    public:

    rectangle (bool print = true) : circle(false) { 
        if(print){
        cout<< " calling form rectangle class"<<endl;
    }
    }

    virtual void area(float width, float height){
        cout<< " the area of the rectangle is = "<< width*height<<endl<<endl;
    }

};

class triangle :public rectangle{

    public:

    triangle (bool print = true) : rectangle(false){
        if(print){
        cout<< " calling from triangle class"<<endl;
    }
    }

    void area(float base , float height){
        cout<< " the area of the triangle is = "<< 0.5 *base *height<<endl<<endl;
    }

};

int main (){

    base Class;
    Class.area();

    circle cir;
    cir.area(4.5);

    rectangle rect;
    rect.area(5.6, 6.6);

    triangle tri;
    tri.area(6.5, 6.6);
}