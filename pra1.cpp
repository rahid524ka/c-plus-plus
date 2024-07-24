#include <iostream>
using namespace std;

class rect{
    private:
    double length;
    double width;
    

    public:
    rect (double len, double wid) : length(len), width(wid) {}

    double area(){
        return length *width;

    }
    double pari(){
        return 2* length *width;
    }

}; 
int main(){
    rect recta(4.5,5);
    double Area = recta.area();
    double parimeter = recta.pari();
    cout<< "the area of the rectangle is = "<< Area<<endl;
    cout<< " the parimeter of the rectangle is = "<<parimeter<<endl;
}