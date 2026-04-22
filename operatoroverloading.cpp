#include<iostream>
using namespace std;

class BankAccount{

    int balance;

    public :

    BankAccount(int b){
        balance = b;
    }

    void operator ++(){

        balance += 1000;
    }

    void printBalance(){

        cout<<"Account Balance :"<<balance<<endl;
    }
};
int main(){

    BankAccount b(5000);

    b.printBalance();

    cout<<"Balance after incriment "<<endl;
    ++b;

    b.printBalance();


    return 0;
}