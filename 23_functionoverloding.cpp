#include<iostream>
using namespace std;
class user{

    public:

    void login(string email,string password){
        cout<<"login with email & password.!"<<endl;
    }

    void login(string number,long int otp){
        cout<<"Login with Number & otp"<<endl;
    }

};    
int main (){

    user u;
    
    u.login("alfaz@email.com","1234@alfaz");
    u.login("704289274",126435);


    return 0;
}