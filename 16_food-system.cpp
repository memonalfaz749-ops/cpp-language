#include<iostream>
using namespace std;
class User{

    string Username;
    string number;
    string Location;

    public :

    void getUserData(){

        
        cout<<"Enter User Name :";
        getline(cin,Username);

        cout<<"Enter Phone Number :";
        getline(cin,number);

        cout<<"Enter Your Location :";
        getline(cin,Location);
    }

    void printUserData(){

        cout<<"\n\n||==- User Info -==||"<<endl;

        cout<<"UserName :"<<Username<<endl;
        cout<<"Phone Number :"<<number<<endl;
        cout<<"Location :"<<Location<<endl;
    }

};

class Food{

    string FoodName;
    int foodQuntity;
    int price;
    int totalprice;
    int totalBill=0;

    public :

    void Pizza(){
        price = 300;

        FoodName = "Pizza";
        cout<<"Food Name : Pizza"<<endl;
        cout<<"Enter Quntity :";
        cin>>foodQuntity;

        totalprice = price * foodQuntity;

        totalBill = totalBill + totalprice;

        cout<<"Total price of pizza :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

     void Burger(){
        price = 150;

        FoodName = "Burger";
        cout<<"Food Name : Burger"<<endl;
        cout<<"Enter Quntity :";
        cin>>foodQuntity;

        totalprice = price * foodQuntity;


        totalBill = totalBill + totalprice;
        cout<<"Total price of Burger :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

    void Pasta(){
        price = 250;

        FoodName = "Pasta";
        cout<<"Food Name : Pasta"<<endl;
        cout<<"Enter Quntity :";
        cin>>foodQuntity;

        totalprice = price * foodQuntity;


        totalBill = totalBill + totalprice;
        cout<<"Total price of Burger :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

    void Dosa(){
        price = 180;

        FoodName = "Dosa";
        cout<<"Food Name : Dosa"<<endl;
        cout<<"Enter Quntity :";
        cin>>foodQuntity;

        totalprice = price * foodQuntity;


        totalBill = totalBill + totalprice;
        cout<<"Total price of Dosa :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }
    
};

class delivery{

    int Id;
    string deliveryBoyName;
    string phone;
 public:
    void getDelivery(){

        cout<<"Enter Delivery Id :";
        cin>>Id;

        cout<<"Enter Delivery Boy Name :";
        cin>>deliveryBoyName;

        cout<<"Enter phone no :";
        cin>>phone;
    }

    void DisplayDelivery(){
        cout<<"\n\n||-== Delivery Boy Details ==-||"<<endl;
        cout<<"Delivery Id :"<<Id<<endl;
        cout<<"Delivery Boy Name :"<<deliveryBoyName<<endl;
        cout<<"Phone no :"<<phone<<endl;

    }

};

class system:public User,public delivery{

    public:

    void server(){
        cout<<"Welcome To Food Zone"<<endl;
        printUserData();
        DisplayDelivery();

    }
    
};
class final:public Food,public system{





};
int main (){


    User u;
    Food f;
    delivery d;
    int choice;
    final f1;
    

    u.getUserData();

    do{
        cout<<"\n\n||----FOOD MENU----||"<<endl;
        cout<<"Press 1 for Pizza \nPress 2 for Burger \nPress 3 for Pasta \nPress 4 for Dosa\nPress 5 for Exit"<<endl;
        cout<<"Enter Your choice :";
        cin>>choice;

        switch (choice)
        {
        case  1:
             f.Pizza();
            break;
        case  2:
            f.Burger();
            break;
        case 3:
            f.Pasta();
            break;  
        case 4:
            f.Dosa();      
        default:
            break;
        }
    }
    while(choice !=5 );
    d.getDelivery();
    f1.server();
    


}