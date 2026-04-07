//multi-level inharitance

#include<iostream>
using namespace std;

class Employee{

    int empId;
    string empName;
    int CompletedTask;
    int pendingTask;

    public:
    void getEmployeeInfo(int id,string name,int c_task,int p_task){
        empId = id;
        empName = empName;
        CompletedTask = c_task;
        pendingTask = p_task;
    }
    void EmployeeReport(){
        cout<<"\n\n||--== Employee Report ==--||\n\n";
        cout<<"Employee Id :"<<empId<<endl;
        cout<<"Employee Name :"<<empName<<endl;
        cout<<"Completed Task :"<<CompletedTask<<endl;
        cout<<"Pending Task :"<<pendingTask<<endl;
    }
};

class Manager:public Employee{
    int managerId;
    string managerName;

    public:
    
    void getMAnagerInfo(int id,string m_name){
        managerId = id;
        managerName = m_name;
    }

    void ManagerInfo(){

        cout<<"\n\n||--== Manager Info ==--||\n\n";
        cout<<"Manager Id :"<<managerId<<endl;
        cout<<"Manager Name :"<<managerName<<endl;

    }
};

class CEO:public Manager{

    string CEOName;

    public:
    
     void getceo(string c_name){
        CEOName = c_name;
        
     }

     void ceoINfo(){
        cout<<"CEO Name :"<<CEOName<<endl;
     }

};
int main(){

    CEO c;
    c.getceo("Alfaz");
    c.getMAnagerInfo(111,"Alfaz");
    c.getEmployeeInfo(111,"Alfaz memon",10,8);

    c.ceoINfo();
    c.ManagerInfo();
    c.EmployeeReport();
    
    return 0;
}