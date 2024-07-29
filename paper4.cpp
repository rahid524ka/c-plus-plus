#include<iostream>
using namespace  std;
class stay{
    int subjet[3];
    public:
    stay(int sub1, int sub2, int sub3){
        subjet[0] = sub1;
        subjet[1] = sub2;
        subjet[2] = sub3;
    }

    int operator[](int position){
        return subjet[position];
    }
};


int main(){
    stay marks(56,67,89);
    cout<< marks[0]<<endl;
    cout<< marks[1]<<endl;
    cout<< marks[2]<<endl;

}