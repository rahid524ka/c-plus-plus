#include <iostream>
using namespace std;

class employee{
    private:
    string name ;
    int emp_id;
    double salary;
    public:
    employee(string e_name, int em_id, double e_salary): name(e_name), emp_id(em_id), salary(e_salary){}

    double set_salary(double performence){
        salary *= performence;
        return salary;
    }
    string set_name() const{
        return name;
    }
    int set_id()const{
        return emp_id;
    }

};

int main(){
    employee first("khan", 123, 3000);
    cout<< "name : "<<first.set_name()<<endl;
    cout<<" id no. : "<<first.set_id()<<endl;
    cout<<"salary: "<<first.set_salary(1.2)<<endl;
}