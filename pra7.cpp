#include<iostream>
using namespace std;
class date{
    private:
    int day;
    int month;
    int year;
    public:
    date(int d, int m, int y): day(d), month(m), year(y){}

    void set_date(int d, int m, int y){
        day = d;
        month = m,
        year = y;
    }
    int set_day()const{
        return day;
    }
    int set_month()const{
        return month;
    }
    int set_year()const{
        return year;
    }
    bool validate(){
        if (month <=0 && month >12){
            return false;
        }
        if (day <1 && day > 31){
            return false;
        }
        if (month == 4 || month == 6 || month == 9|| month ==11 && day > 30){
            return false;
        }
        if (month == 2){
            if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0 )){
                if (day > 29){
                    return false;
                }
                else {
                    if (day > 28){
                        return false;
                    }
                }

            }
        
        }
        return true;
    }

};


int main(){
    date tarekh(31,3,2004);
    cout<<" day : "<<tarekh.set_day()<<endl<<" month : "<<tarekh.set_month()<<endl<<" year : "<<tarekh.set_year()<<endl;

    if (tarekh.validate()){
        cout<< " the date is valid"<<endl;

    }
    else{
        cout<<" the date is invalid "<<endl;
    }
}