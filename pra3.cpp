
#include<iostream>
using namespace std;
class car {
    private:
    string company;
    string model;
    int year;
    public :
    car (string comp, string mod, int year) : company (comp) , model(mod), year (year){}

    string setcomp(){
        return company;


    } 
    string set_model (){
        return model;
    }
    int getyear(){
        return year;
    }

};
int main(){
    car alto("Audi", "Audi x ", 2020);
    
    cout<< "the company name is "<<alto.setcomp() <<" model is " << alto.set_model() << " year " << alto.getyear()<<endl;
}
