#include<iostream>
using namespace std;
class triangle{
    private:
    int side1;
    int side2;
    int side3;
    public:
    triangle(int sid1,int sid2,int sid3): side1(sid1), side2(sid2), side3(sid3){}
    void shape(){
        if (side1 == side2 && side2 == side3){
            cout<< " the given triangle is equliterla"<<endl;
        }
        else if ( side1 == side2 || side1 == side3  || side2 ==side3)
        {
            cout<<" the given triangle is isosceles"<<endl;
        }
        else{
            cout<< "the given triangle is iscelene"<<endl;
        }
    }
};



int main(){
    triangle shape(12,12,12);
    shape.shape();

}