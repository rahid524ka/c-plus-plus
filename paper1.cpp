#include<iostream>
using namespace std;
class student{
    int marks;
    public:
    student(){
        marks = 0;
    }
    student (int ma){
        marks  = ma;
    }
    void yourmarks(){
        cout<< "your marks is = "<< marks <<endl; 
    }
    void operator+=(int m){
        marks = marks +m;

    }
    friend void operator-=(student &myobj, int redmarks);

};

void operator-=(student &myobj, int redmarks){
    myobj.marks -= redmarks;
}




int main(){
    student rahid(50);
    rahid.yourmarks();

    rahid += 30;
    rahid.yourmarks();

    rahid -= 20;
    rahid.yourmarks();

}