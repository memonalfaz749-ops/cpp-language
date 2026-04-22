#include<iostream>
using namespace std;

class demo{

    int num;

    public:

    demo(int n){
        num = n;
    }

    void operator ++(){
        num += 5;
    }

    void print(){
        cout<<"number is  :"<<num<<endl;
    }


};
int main (){

    demo d(5);

    d.print();

    ++d;

    d.print();


    return 0;
}