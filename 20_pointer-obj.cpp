#include<iostream>
using namespace std;
class Array{
    int *arr;
    int size;

    public :
    Array (int n){
        size = n;
        arr = new int [n];

        cout<<size<<"Number of bites memory allocated"<<endl;
    }

    void getElement(){
        for(int i=0;i<size;i++){
            cout<<"Enter number :";
            cin>>arr[i];
        }

        
    }
    void printElement(){

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" |";
        }
        cout<<endl;
    }

    ~Array(){
        delete [] arr;

        cout<<"\nMemory deallocated succesfully."<<endl;
    }
};


int main (){

    Array obj(5);

    obj.getElement();
    obj.printElement();

    return 0;
}