#include<iostream>
#include<string>
using namespace std;


class Course{

  private :
   int courseId;
   string courseName;
   int courseDuration;
   long int courseFees;
   string FacultyName;

  public :

  void getData(){

  
   cout<<"Enter course Id :";
   cin>>courseId;

   cin.ignore();
   cout<<"Enter course Name :";
   getline(cin,courseName);

   cout<<"Enter course Duration :";
   cin>>courseDuration;

   cout<<"Enter course Fees :";
   cin>>courseFees;

   cin.ignore();
   cout<<"Enter Faculty Name :";
   getline(cin,FacultyName);
  }

   void printData();


};

void Course::printData(){
  
    cout<<"\n\n||==-Course Details-==||\n\n";
    cout<<"Course Id :"<<courseId<<endl;
    cout<<"Course Name :"<<courseName<<endl;
    cout<<"Course Duration :"<<courseDuration<<"Month"<<endl;
    cout<<"Course Fees :"<<courseFees<<endl;
    cout<<"Faculty Name :"<<FacultyName<<endl;

}
int main() {


    Course c1;


    c1.getData();
    c1.printData();

    return 0;
}