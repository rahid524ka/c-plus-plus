#include<iostream>
using namespace std;
class simple{
    protected:
    int num1, num2;
    public:
    simple(){
        num1 = num2 = 0;
    }
    void in(){
        cout<< "enter the first number :"<<endl;
        cin>>num1;
        cout<< "enter the second number :"<<endl;
        cin>>num2;
    }
    void add(){
        cout<< "the addition of the two number is = "<< num1 + num2 <<endl;
    }
    void sub(){
        cout<< "the substraction of the two number is = "<< num1- num2<<endl;
    }
    void mul(){
        cout<< "the multiplication of the two number is = "<< num1*num2<<endl;
    }
    void div(){
        cout<< "the division of the two number is = "<<num1/num2<<endl;
    }
};

class derived : public simple{
    public:
    void add(){
        if(num1<=0|| num2<=0){
            cout << "invalid number"<<endl;
        }else{
            simple::add();
        }

    }
    void sub(){
        if(num1<=0|| num2<=0){
            cout << "invalid number"<<endl;
        }else{
            simple::sub();
        }

    }
    void mul(){
        if(num1<=0|| num2<=0){
            cout << "invalid number"<<endl;
        }else{
            simple::mul();
        }

    }
    void div(){
        if(num1<=0|| num2<=0){
            cout << "invalid number"<<endl;
        }else{
            simple::div();
        }
    }
};


int main(){
    derived cal;
    cal.in();
    cal.add();
    cal.sub();
    cal.mul();
    cal.div();

}