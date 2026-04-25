#include <iostream>
using namespace std;

class Vehicle
{

    int VehicleID;
    string manufacturer;
    string model;
    int year;

    protected:
     static int TotalVehicles;

public:

    Vehicle(){

    }
     void getVehicle()
    {

    
        
        cout << "Enter Vehicle Manufecturer :";
        cin.ignore();
        getline(cin, manufacturer);

        cout << "Enter Vehicle Model :";
        getline(cin, model);

        cout << "Enter Vehicle Year :";
        cin >> year;
    }

     void printVehicle(){

        // cout<<"Vehicle Id :"<<VehicleID<<endl;
        cout<<"Vehicle Manufecturer :"<<manufacturer<<endl;
        cout<<"Vehicle Model :"<<model<<endl;
        cout<<"Vehicle Year :"<<year<<endl;


    }

    ~Vehicle(){
        cout<<"-==End==-"<<endl;
    }

};
int Vehicle ::TotalVehicles = 0;

class Car:public Vehicle{


    string fueltype;

    public :

    void getCar(){
        getVehicle();
        cout<<"Enter Vehicle fuel type :";
        cin>>fueltype;

        TotalVehicles++;
        
    }

    void printCar(){
        printVehicle();
        cout<<"Vehicle fuel type :"<<fueltype<<endl;
    }
};
class ElectricCar:public Car{
     int BatteryCapacity;

    protected : 
     int ElcId = 0;

     public:

     void getElectric(){

        cout<<"\n||==-You selected Electric Car-==||"<<endl;
        cout<<"\nEnter Vehicle Id :";
        cin>>ElcId;
        getCar();
        
        cout<<"Enter Car Battery Capacity :";
        cin>>BatteryCapacity;
        

     }

     void printElectic(){
        cout<<"\n||==-ElectricCar Details-==||"<<endl;
        cout<<"Vehicle Id :"<<ElcId<<endl;
        printCar();
        cout<<"Car Battery Capacity :"<<BatteryCapacity<<"km"<<endl;
     }

};

class Aircraft{

    int flightRange;

    public :

    void getair(){
        cout<<"Enter flightRange :";
        cin>>flightRange;
    }

    void printAir(){
        cout<<"Flight Range :"<<flightRange<<"KM"<<endl;
    }
};

class FlyingCar:public Car,public Aircraft{

   protected : 
    int flyId = 0;


   public :

    void getFlyingCar(){

        cout<<"\n||==-You selected Flying Car-==||"<<endl;
        cout<<"\nEnter Vehicle Id :";
        cin>>flyId;
        getCar();
        getair();
        
    }

    void printFlyingCar(){
        cout<<"\n||==-FlyingCar Details-==||\n"<<endl;
        cout<<" Vehicle Id :"<<flyId<<endl;
        printCar();
        printAir();
        
    }

};

class SportsCar:public ElectricCar{
    int topSpeed;

   protected : 
    int sportId = 0;

    public:
    void getSportsCar(){
       cout<<"\n||==-You selected Sports Car-==||"<<endl;
        cout<<"\nEnter Vehicle Id :";
         cin>>sportId;
        cout<<"Enter Car Top Speed :";
        cin>>topSpeed;
        
    }

    void printSportsCar(){
        cout<<"\n||==-SportsCar Details-==||\n"<<endl;
        cout<<" Vehicle Id :"<<sportId<<endl;
        cout<<"Car top Speed :"<<topSpeed<<"km/hour"<<endl;

    }

};

class sedan:public Car{

    protected :
     int sedanId = 0;

    public :

    
     void getSedan(){
        cout<<"\n||==-You selected Sedan Car-==||"<<endl;
        cout<<"\nEnter Vehicle Id :";
        cin>>sedanId;
        getCar();
     }

     void printSedan(){
        cout<<"\n||==-SedanCar Details-==||\n"<<endl;
        cout<<" Vehicle Id :" <<sedanId<<endl;

        printCar();
     }
};

class SUV:public Car{

    protected :
     int SuvId=0;

    public :

     void getSUV(){
        cout<<"\n||==-You selected SUV Car-==||"<<endl;
        cout<<"\nEnter Vehicle Id :";
        cin>>SuvId;
        getCar();
     }

     void printSUV(){

        cout<<"\n||==-SUVCar Details-==||\n"<<endl;

        cout<<"Vehicle Id :"<<SuvId<<endl;
        printCar();
     }
};


class VehicleRegistry:public SUV,public sedan,public SportsCar,public FlyingCar{

    public :

    void DisplayAll(){
        bool found = false;

        if ( ElcId > 0){
            printElectic();
            found = true;

        }

        if ( flyId > 0){
            printFlyingCar();
            found = true;
        }

        if (sportId > 0){
            printSportsCar();
            found = true;
        }
        
        if ( sedanId > 0){
            printSedan();
            found = true;
        }

        if ( SuvId > 0){
            printSUV();
            found = true;
        }
        
        if(!found){
            cout<<"No Vehicle Data found.!!"<<endl;
        }
    }

    void search(int id){

        bool found = false;

       if(id == ElcId){

        printElectic();
        found = true
        ;
       }

       if(id == flyId){

        printFlyingCar();
        found = true
        ;
       }

       if(id == sportId){

        printSportsCar();
        found = true
        ;
       }

       if(id == sedanId){

        printSedan();
        found = true
        ;
       }

       if(id == SuvId){

        printSUV();
        found = true
        ;
       }
    }





};

int main()
{
    VehicleRegistry vr;
    int choice = 0;

    do
    {

        cout << "\n||==-Welcome to Vehicle Registry System-==||\n"<< endl;
        cout << "Press 1 for Electric Car" << endl;
        cout << "Press 2 for Flying Car." << endl;
        cout << "Press 3 for Sports Car." << endl;
        cout << "Press 4 for Sedan Car." << endl;
        cout << "Press 5 for SUV Car." << endl;
        cout<<"Press 6 for Display All Vehicles"<<endl;
        cout<<"Press 7 for Search By Id"<<endl;
        cout << "Press 8 for Exit." << endl;
        cout << "\nEnter Your choice :";
        cin >> choice;

        
        switch(choice){

    case 1:
        vr.getElectric();
        break;

    case 2:
        vr.getFlyingCar();   
        break;

    case 3:
        vr.getSportsCar();   
        break;

    case 4:
        vr.getSedan();       
        break;

    case 5:
        vr.getSUV();         
        break; 

    case 6:
        vr.DisplayAll();        
        break;
    
    case 7:
    int SearchId;
        cout<<"\nEnter Id to Search vehicle :";
        cin>>SearchId;
        
        vr.search(SearchId);
        break;
    case 8:
        cout<<"Exiting...\n";  
        break;    

    default:
        cout<<"Invalid choice!\n";
}



        

    } while (choice != 8);

    return 0;
}