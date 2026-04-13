#include<iostream>
using namespace std;
class RBI{

    public:
    void intrest_rate(){

        cout<<"Intrest Rate : 8%"<<endl;
    }

};
class BOB:public RBI{

    public:

    void BOB_bank(){

        cout<<"\nWelcome to Bank of Baroda"<<endl;
        intrest_rate();
        
    };
};
class HDFC:public RBI{

    public:
    void HDFC_bank(){
        cout<<"\nWelcome to HDFC Bank"<<endl;
        intrest_rate();
    }
};
class SBI:public RBI{

    public:
    void SBI_bank(){
        cout<<"\nWelcome to SBI Bank"<<endl;
        intrest_rate();
    }
};
int main (){

    BOB b;
    b.BOB_bank();

    HDFC h;
    h.HDFC_bank();

    SBI s;
    s.SBI_bank();

    return 0;
}