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
    int totalprice;

   protected :
    int pizzaqty=0;
    int pizzaprice;
    int bgqty=0;
    int bgprice;
    int dosaqty=0;
    int dosaprice;
    int pastaqty=0;
    int pastaprice; 
    int totalBill=0;
    int pizzatotal=0;
    int bgtotal=0;
    int pastatotal=0;
    int dosatotal=0;

    public :

    void Pizza(){
        pizzaprice = 300;

        FoodName = "Pizza";
        cout<<"Food Name : Pizza"<<endl;
        cout<<"Enter Quntity :";
        cin>>pizzaqty;

        totalprice = pizzaprice * pizzaqty;
        pizzatotal = totalprice;

        totalBill = totalBill + totalprice;

        cout<<"Total price of pizza :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

     void Burger(){
        bgprice = 150;

        FoodName = "Burger";
        cout<<"Food Name : Burger"<<endl;
        cout<<"Enter Quntity :";
        cin>>bgqty;

        totalprice = bgprice * bgqty;
        bgtotal = totalprice;


        totalBill = totalBill + totalprice;
        cout<<"Total price of Burger :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

    void Pasta(){
        pastaprice = 250;

        FoodName = "Pasta";
        cout<<"Food Name : Pasta"<<endl;
        cout<<"Enter Quntity :";
        cin>>pastaqty;

        totalprice = pastaprice * pastaqty;
        pastatotal = totalprice;


        totalBill = totalBill + totalprice;
        cout<<"Total price of Burger :"<<totalprice<<endl;
        cout<<"Total Bill :"<<totalBill<<endl;
    }

    void Dosa(){
        dosaprice = 180;

        FoodName = "Dosa";
        cout<<"Food Name : Dosa"<<endl;
        cout<<"Enter Quntity :";
        cin>>dosaqty;

        totalprice = dosaprice * dosaqty;
        dosatotal = totalprice;


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

        cin.ignore();
        cout<<"Enter Delivery Boy Name :";
        getline(cin,deliveryBoyName);

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

class system:public User,public Food,public delivery{

    public:

    void server(){
        cout<<"Welcome To Food Zone"<<endl;
        printUserData();
        DisplayDelivery();

    }
    
};
class final:public system{


    public :

    void bill(){
      if (pizzaqty > 0){

        cout<<"Pizza\t"<<pizzaprice<<"\t"<<pizzaqty<<"\t"<<pizzatotal<<endl;

      } 

      if (bgqty > 0){

        cout<<"Burger\t"<<bgprice<<"\t"<<bgqty<<"\t"<<bgtotal<<endl;

      } 

      if(pastaqty > 0){

        cout<<"Pasta\t"<<pastaprice<<"\t"<<pastaqty<<"\t"<<pastatotal<<endl;

      }

      if(dosaqty > 0){

        cout<<"Dosa\t"<<dosaprice<<"\t"<<dosaqty<<"\t"<<dosaprice<<endl;

      }
        
        cout<<"Total Bill :\t\t"<<totalBill<<endl;
    }




};
int main (){


    
    int choice;
    final f;
    

    f.getUserData();

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
            break;    
        default:
            break;
        }
    }
    while(choice !=5 );
    f.getDelivery();
    f.server();
    f.bill();
    


}