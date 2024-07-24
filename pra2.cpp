#include <iostream>
using namespace std;

class person{
    private:
    string name ;
    int age;
    string country_name;

    public:
    person (string Name , int Age, string c_name): name(Name), age(Age), country_name(c_name){}

    void info(){
        cout<< "Myself is " <<name << " I am "<< age << " year old. I belong to "<< country_name <<endl;
    }


};

int main(){
    person *person1 = new person("Rahid", 20 , "Pakistan");

    person1->info();
}