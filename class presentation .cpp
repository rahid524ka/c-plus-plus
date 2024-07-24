#include <iostream>
using namespace std;
class Teacher{
public:
void teach(){
    cout<<"Teaching ..."<<endl;
}
};
class Reasearch{
    public:
    void Research(){
        cout<<"Researching...."<<endl;
    }
};
class Professor:public Teacher,public Reasearch{
public:
 void publish()
 {
   cout<<"publishing paper" <<endl;
 }
};
int main(){
    Professor myProfessor;
    myProfessor.teach();
    myProfessor.Research();
    myProfessor.publish();
    return 0;
}