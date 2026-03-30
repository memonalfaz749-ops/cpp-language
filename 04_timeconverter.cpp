#include<iostream>
using namespace std;

int main(){


    int Total_sec;
    cout<<"Enter Seconds :";
    cin>>Total_sec;

    int hour = Total_sec / 3600;
    int min = ( Total_sec % 3600 ) / 60;
    int sec = Total_sec % 60 ;

    if(hour < 10){
        cout<<"0"<<hour<<":";
    }
    if(min < 10){
        cout<<"0"<<min<<":";
    }
    if(sec < 10){
        cout<<"0"<<sec;
    }






    return 0;
}