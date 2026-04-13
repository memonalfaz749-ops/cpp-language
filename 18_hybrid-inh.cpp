#include<iostream>
using namespace std;
class user{

    protected :
    string name;

    public:
    void getUser(string username){
        name = username;
    }
};
class Buyer:public user{
    protected :
    int qty;

    public:
    void getBuyer(int q){
        qty = q;

    }

};
class Seller{

    protected:
    int price;

    public :
    void getSeller(int p){
        price = p;
    }

};
class FinalClass:public Buyer,public Seller{

    int totalprice;
    public :

    void displayOrderInfo(){

        totalprice = price * qty;

        cout<<"\n\n||===--- ORDER INFO ---===||"<<endl;
        cout<<"Custumer Name :"<<Buyer::name<<endl;
        cout<<"Total Qty :"<<qty<<endl;
        cout<<"price :"<<price<<endl;
        cout<<"Total price :"<<totalprice<<endl;
    }
};
int main (){

    FinalClass f;

    f.Buyer::getUser("Alfaz");
    f.getBuyer(10);
    f.getSeller(700);
    f.displayOrderInfo();

    return 0;
}