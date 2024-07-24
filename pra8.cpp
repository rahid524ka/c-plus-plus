#include <iostream>
#include <string>
using namespace std;
class student{
    private:
    string name;
    string Class;
    int roll_n;
    double marks;
    public:
    student(string n , string c, int R, double m): name (n), Class(c), roll_n(R), marks(m){}

    string grade(){
        if (marks >= 90){
            return "A+";
        } else if (marks >= 80){
            return "A";
        }else if (marks >= 70){
            return "B";
        }else if (marks >= 60){
            return "C";
        }else{
            return "fail";
        }
    }
    void get_info(){
        cout<< " name : "<< name<<endl; 
        cout<< " class : "<< Class<<endl;
        cout<< " Roll number : "<< roll_n<<endl;
        cout<< " marks : "<< marks<<endl;
        cout<<" grade : "<< grade()<<endl;
    }

};
int main(){
    string s_name;
    string s_class;
    int S_rolln;
    double s_marks;

    cout<< " student details"<<endl;

    cout<< "student name ";
    getline(cin, s_name);

    cout<< "\n class ";
    getline (cin , s_class);

    cout<<"\n Roll number ";
    cin >> S_rolln;

    cout<< "\n marks ";
    cin>> s_marks;

    student Student(s_name, s_class, S_rolln, s_marks);
    Student.get_info();

}