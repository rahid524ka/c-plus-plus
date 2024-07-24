#include <iostream>
#include <math.h>
using namespace std;
class circle{
    double rad;
    public:
    void area(double radi){
        double pi = M_PI ;
        rad = radi;
        cout <<" the area of the circle is equal to = "<< pi * rad*rad<<endl;
    }
    void circuf(double radi){
        double pi = M_PI;
        rad = radi;
        cout<< " the circumference of the circle is = "<< 2* pi *rad<<endl;
    }


    

};
int main(){
    circle cir1;
    cir1.area(3.4);
    cir1.circuf(3.4);

}