#include<iostream>
using namespace std;

class Cricket{

  public:  
    virtual void over(){

        cout<<"Cricket Match Start .!!"<<endl;
    }

};

class T20Match:public Cricket{

public :
    void over(){

        cout<<"T20 Match Total Over : 20"<<endl;
    }
};

class TestMatch:public Cricket{

public :
     void over(){

        cout<<"Test Match Total Over : 90"<<endl;
    }
};
int main (){

    Cricket *c;
    T20Match t20;

    c = &t20;

    c->over();

    TestMatch test;

    c = &test;

    c->over();

    return 0;
}