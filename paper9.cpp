#include<iostream>
using namespace std;

template <class t, class d>
class paper{
    t marks;
    d cgpa;
    public:
    paper(t ma, d cg){
        marks= ma;
        cgpa = cg;
    }
    void in(){
        cout <<"enter your marks :"<<endl;
        cin>>marks;
        cout<< "enter your cgpa :"<<endl;
        cin>>cgpa;
    }
    void display(){
        cout<< "my total marks is "<< marks << " while cgpa is "<<cgpa<<endl;
    }

};
int main(){
    paper<int,float> term(0,0.0);
    term.in();
    term.display();
}