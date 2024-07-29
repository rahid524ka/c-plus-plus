#include <iostream>
using namespace std;
template<typename T>
T add(T a, T b){
    return a+b;
}
template <class H>
H add(H a, H b, H c){
    return (a+b)*c;
}
int main(){
    cout<< add(34,45)<<endl;
    cout<< add (4.5 ,5.6)<<endl;
    cout<< add(4,6,9)<<endl;

}