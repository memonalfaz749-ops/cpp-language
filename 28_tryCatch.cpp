#include<iostream>
using namespace std;

int main (){

    int num;
    
    try{

        cout<<"Enter Number :";
        cin>>num;

        if(num < 0){
            throw "Negative Number is not Allowed";
        }
        else{
            cout<<"Square of Numbver is :"<<num*num<<endl;
        }


    }
    catch(const char *msg){

        cout<<"Error:"<<msg<<endl;
        
    }


    return 0;
}