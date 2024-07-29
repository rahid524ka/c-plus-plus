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
    void operator++(){
        marks += 5;
    } 
     friend void operator--(student&);
};
void operator--(student &m){
    m.marks -= 5;

}
int main(){
    student rahid (46);
    rahid.yourmarks();

    ++rahid;
    rahid.yourmarks();

    --rahid;
    rahid.yourmarks();
}