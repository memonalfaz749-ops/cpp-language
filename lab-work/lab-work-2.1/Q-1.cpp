#include<iostream>
using namespace std;

class employee{

   private :
   int emp_id;
   string emp_name;
   int emp_age;
   string emp_role;
   int emp_salary;
   string emp_city;
   string emp_experience;
   string emp_company_name;

   public :
   void getDATA(){

     cout<<"Enter employee Id :";
     cin>>emp_id;
    
     cin.ignore();
     cout<<"Enter employee name :";
     getline(cin,emp_name);

     cout<<"Enter employee age :";
     cin>>emp_age;

     cout<<"Enter employee role :";
     cin>>emp_role;

     cout<<"Enter employee salary :";
     cin>>emp_salary;

     cout<<"Enter employee city :";
     cin>>emp_city;

     
     cout<<"Enter employee experience :";
     getline(cin,emp_experience);

     
     cout<<"Enter employee company name : ";
     getline(cin,emp_company_name);


   }
    
   void printDATA(){

    cout<<"emp Id :"<<emp_id<<endl;
    cout<<"emp name :"<<emp_name<<endl;
    cout<<"emp age :"<<emp_age<<endl;
    cout<<"emp role :"<<emp_role<<endl;
    cout<<"emp salary:"<<emp_salary<<endl;
    cout<<"emp city :"<<emp_city<<endl;
    cout<<"emp experience :"<<emp_experience<<endl;
    cout<<"emp company name :"<<emp_company_name<<endl;
   }


};
int main(){
    
    employee e[2];

    for(int i=0;i<2;i++){

        cout<<"\n\n===||Enter Employee "<<i+1<<" Details||===\n\n";
        e[i].getDATA();
    }

    for(int i=0;i<2;i++){

        cout<<"\n\n===|| Employee "<<i+1<<" Details||===\n\n";
        e[i].printDATA();
    }


    return 0;
}