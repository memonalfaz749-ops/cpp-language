#include<iostream>
using namespace std;

int main (){

    string student_name = "Alfaz Memon";

    cout<<"Student Name :"<<student_name<<endl;

    string &s_name = student_name;

    cout<<"Student Name :"<<s_name<<endl;

    s_name = "ankush ";

    cout<<"Student Name :"<<student_name<<endl;





    return 0;
}