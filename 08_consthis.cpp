#include <iostream>
using namespace std;

class student
{

    int student_id;
    string student_name;
    int student_std;
    int student_age;

public:

   //Constructor = class name 

    student(int student_Id, string student_name, int student_std, int student_age)
    {

        this->student_id = student_Id;
        this->student_name = student_name;
        this->student_std = student_std;
        this->student_age = student_age;
    }

    void printData()
    {

        cout << "\n\n||==-Student Details-==||\n\n";
        cout << "Student Id :" << student_id << endl;
        cout << "Student Name :" << student_name << endl;
        cout << "Student STD :" << student_std << endl;
        cout << "Student Age :" << student_age << endl;
    }

    //Destructor = class name but start with ~ 

    ~student(){
        cout<<"\n\n||==-Student Data Over-==||";
    }
};
int main(){

    student s(10,"Alfaz",12,18);
    s.printData();

    return 0;
}