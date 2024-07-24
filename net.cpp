#include<iostream>
using namespace std;

class base {
public:
    base(bool print = true) {
        if (print) {
            cout << "Calling from base class" << endl;
        }
    }
    virtual void area() {
        cout << "We are going to find the area of different shapes to better explain polymorphism" << endl;
    }
};

class circle : public base {
public:
    circle(bool print = true) : base(false) {
        if (print) {
            cout << "Calling from circle class" << endl;
        }
    }
    virtual void area(float radius) {
        cout << "The area of the circle is " << 3.14 * radius * radius << endl;
    }
};

class rectangle : public circle {
public:
    rectangle(bool print = true) : circle(false) {
        if (print) {
            cout << "Calling from rectangle class" << endl;
        }
    }
    virtual void area(float width, float height) {
        cout << "The area of the rectangle is " << width * height << endl;
    }
};

class triangle : public rectangle {
public:
    triangle(bool print = true) : rectangle(false) {
        if (print) {
            cout << "Calling from triangle class" << endl;
        }
    }
    virtual void area(int base, float height) {
        cout << "The area of the triangle is " << 0.5 * base * height << endl;
    }
};

int main() {
    circle sho;
    sho.area(4.5);

    rectangle shape;
    shape.area(5.6, 6.6);

    triangle hello;
    hello.area(6, 6.6);

    return 0;
}
