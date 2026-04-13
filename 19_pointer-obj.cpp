#include<iostream>
using namespace std;
int main (){

    int *ptr;

    ptr = new int;

    cout<<"Enter Number :";
    cin>>*ptr;

    cout<<"Number is :"<<*ptr<<endl;
    
    delete ptr;

    cout<<"\n Number Is :"<<*ptr<<endl;


}