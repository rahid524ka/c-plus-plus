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
    student operator++(int){
        student duplicate (*this);
        marks += 5;
        return duplicate;

    }
    friend student operator--(student& ,int);
};
student operator--(student &m, int){
    student duplicacte (m);
    m.marks -= 5;
    return duplicacte;

}

int main(){
    student rahid(50);
    rahid.yourmarks();

    rahid++;
    rahid.yourmarks();

    rahid--;
    rahid.yourmarks();
}