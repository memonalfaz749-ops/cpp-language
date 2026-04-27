#include<iostream>
using namespace std;

int main(){

    int num[5] = {20,40,10,50,30};
    int index;


    try{

        cout<<"Enter Index Number :";
        cin>>index;

        if(index > 4 || index < 0){
          throw "No Data found at this Index Number";
        }

        else{
            cout<<"Number :"<<num[index]<<endl;
        }
        
    }
    catch(const char *msg){
            cout<<"Error:"<<msg<<endl;
        }

        return 0;
}