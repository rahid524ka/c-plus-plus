#include<iostream>
using namespace std;
class Bank_account{
    private:
    double Account_num;
    int Balane;
    public:
    Bank_account(double A_num, int Bal) : Account_num(A_num), Balane(Bal){}

    void deposit(int amount){
        Balane += amount;

        cout << " the totatl balance in the accout is = "<<Balane<<endl;

    }
    void withdraw(int amout){
        
        if (amout <= Balane){
            Balane -= amout;
            cout << "withdraw succful. current balance = "<< Balane<<endl;
        }
        else{
            cout << " insufficent balance "<<endl;
        }
    }

};



int main(){
    Bank_account nbp(1234432556, 4500);
    nbp.deposit(1500);
    nbp.withdraw(30000);

}