#include<iostream>
using namespace std;
class BankAccount{

    string AccountNo;
    string customerName;
    int AccountBalance;

    static int TotalAccount;
    static int TotalBalance;

    public :
    void CreateAccount(string Ac_no,string cs_name,int balance){

        AccountNo = Ac_no;
        customerName = cs_name;
        AccountBalance = balance;

        TotalAccount++;
        TotalBalance = TotalBalance + AccountBalance; 

    }

    void AccountDetails(){

        cout<<"\n\n||-==Account Details==-||\n\n";
        cout<<"Customer Name :"<<customerName<<endl;
        cout<<"Account no :"<<AccountNo<<endl;
        cout<<"Account Balance :"<<AccountBalance<<endl;
    }

    static void BankDetails(){

        cout<<"\n\nBank Details\n\n";
        cout<<"Total Account :"<<TotalAccount<<endl;
        cout<<"Total Balance :"<<TotalBalance<<endl;
    }



};

int BankAccount :: TotalAccount = 0;
int BankAccount :: TotalBalance = 0;
int main (){

    BankAccount b1,b2;

    b1.CreateAccount("25432000087","Alfaz memon",2300);
    b1.CreateAccount("25432000088","Adnan memon",23000);

    b1.AccountDetails();
    b2.AccountDetails();

    BankAccount :: BankDetails();

    return 0;
}