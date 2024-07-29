#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    student(int m){
        marks = m;
    }
    void display(){
        cout<< " I got "<< marks << " marks"<<endl;
    }
    student operator()(int mar){
        marks = mar;
        return *this;
    }

};
int main(){
    student rahid(90);
    rahid.display();

    rahid(67);
    rahid.display();
}