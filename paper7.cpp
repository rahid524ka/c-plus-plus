#include<iostream>
using namespace std;
class mid{
    public:
    int marks;
    mid(int m){
        marks = m;
    }
    virtual void fun(){
        cout<< "the total marks in mid term exam is = "<< marks << endl; 
    }
};
class final: public mid{
    public:
    final(int m) : mid(m){}
    void fun(){
        cout<< "the total marks in final term is = "<< marks <<endl;
    }

};



int main(){
    mid ma(34);
    ma.fun();
   final re(89);
   re.fun(); 

}