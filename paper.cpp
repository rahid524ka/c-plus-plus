#include <iostream>
using namespace std;

class mark{
    int intmark;
    int extmarks;

    public:
    mark(){
        intmark = 0;
        extmarks = 0;
    }
    mark(int in, int ext){
        intmark = in;
        extmarks = ext;
    }
    void display(){
        cout<< intmark <<endl<< extmarks <<endl;
    }
    mark operator+(mark m){
        mark temp;
        temp.intmark = intmark + m.intmark;
        temp.extmarks = extmarks + m.extmarks;
        return temp;
    }

};
int main(){
    mark s1(10,21),s2(2,3);
    mark s3 = s1 + s2;
    s3.display();

}