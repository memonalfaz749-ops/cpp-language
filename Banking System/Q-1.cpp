#include<iostream>
using namespace std;

class BankAccount{

    protected:

    string AccountNumber;
    string accountHolderName;
    double balance;
    double amount;

    public:


    //getter

    BankAccount(){

        cout<<"\nEnter Account Number :";
        cin>>AccountNumber;

        cin.ignore();
        cout<<"Enter Account Holder Name :";
        getline(cin,accountHolderName);

        cout<<"Enter Account Balance :";
        cin>>balance;

    }

    virtual void deposit(){

        cout<<"Enter Amount to Deposite :";
        cin>>amount;

        balance += amount;

        cout<<"Deposited Successfully"<<endl;
        cout<<"Now corrent Balance is :"<<balance<<endl;
    }

    virtual void Withdraw(){

        cout<<"\nEnter Amount to Withdraw :";
        cin>>amount;

        if(amount <= balance){
            balance -= amount;

            cout<<"\nWithdrawn successfully.!!"<<endl;
            cout<<"Now corrent Balance is :"<<balance<<endl;
        }
        else{
            cout<<"\nYour account does not have enough Balance to withdraw.!!"<<endl;
        }
    }

    double getBalance(){
        return balance;
    }

     virtual void calculateInterest() {
        cout << "No interest for base account\n";
    }

    virtual void DisplayAccountInfo(){
        cout<<"\n||==-Account Details-==||\n"<<endl;
        cout<<"Account Number :"<<AccountNumber<<endl;
        cout<<"Account Holder Name :"<<accountHolderName<<endl;
        cout<<"Account BAlance :"<<balance<<endl;
    }

    ~BankAccount(){

        cout<<"\n||==-Thanks for Vising-==||"<<endl;
    }



};

class SavingAccount:public BankAccount{

    double interestRate;
    

    public:

     SavingAccount():BankAccount(){
        
        cout<<"\nEnter Interest Rate :";
        cin>>interestRate;

     }

    void calculateInterest() override{
        
        double intrest = balance * interestRate / 100;
        cout<<"\nSaving Interest :"<<intrest<<endl; 
    }

};

class CheckingAccount:public BankAccount{

    double overdraftlimit;

  public:
    
  CheckingAccount(): BankAccount() {

    cout<<"\nEnter Over Draft Limit :";
    cin>>overdraftlimit;
  }

  void Withdraw() override{

    

    cout<<"\nEnter Withdraw Amount :";
    cin>>amount;

    if(amount <= balance + overdraftlimit){
        balance -= amount ;

        cout<<"\nWithdraw (overdraft Allowed).!!"<<endl;
        cout<<"Now corrent Balance is :"<<balance<<endl;

    }

    else{
         cout << "\nOverdraft Limit Exceeded"<<endl;
    }

  }
};

class FixedDepositAccount: public BankAccount{

    int term;
    int rate;
   public:

    FixedDepositAccount() :BankAccount(){

        cout<<"\nEnter Terms (Months) :";
        cin>>term;

        cout<<"Enter Interest Rate :";
        cin>>rate;

    }

    void calculateInterest() override{
        double intrest = (balance * term * rate) / (100 * 12) ; 

        cout<<"\nFD Intrest :"<<intrest<<endl;
    }
};

int main (){

    BankAccount *acc ;
    int choice,option;

    

        cout<<"\n||==-Welcome to Banking System-==||"<<endl;
        cout<<"   ||==-Select Account Type-==||"<<endl;
        
        cout<<"press 1 for SavingAccount"<<endl;
        cout<<"press 2 for CheckingAccount"<<endl;
        cout<<"press 3 for FixedDepositAccount"<<endl;
        cout<<"press 4 for Exit"<<endl;

        cout<<"\nEnter  your Choice :";
        cin>>choice;

        switch(choice){

            case 1: acc = new SavingAccount(); break;

            case 2: acc = new CheckingAccount(); break;

            case 3: acc = new FixedDepositAccount(); break;

            case 4: cout<<"Exiting.!!";return 0;

            default: cout<<"Enter a valid choice.!!"<<endl;


        }

    

    do{

        cout<<"\n||==-Select an Option-==||\n"<<endl;
        cout<<"Press 1 for Deposit"<<endl;
        cout<<"Press 2 for withdraw"<<endl;
        cout<<"Press 3 Display"<<endl;
        cout<<"Press 4 for Intrest"<<endl;
        cout<<"Press 5 for Exit"<<endl;

        cout<<"\nEnter your Option :";
        cin>>option;

        switch(option){
            case 1:
            acc -> deposit();
            break;

            case 2:
            acc -> Withdraw();
            break;

            case 3:
            acc -> DisplayAccountInfo();
            break;

            case 4:
            acc -> calculateInterest();
            break;

            case 5:
            cout<<"Exiting"<<endl;
            break;

            default:
            cout<<"Enter Valid option.!!"<<endl;

        }
    }while(option != 5);

    delete acc;

    return 0;
}