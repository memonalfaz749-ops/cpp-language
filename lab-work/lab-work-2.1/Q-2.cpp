#include<iostream>
#include<string>
using namespace std;

class Car{
    
    int carId;
    string carCompanyName;
    string carColor;
    string carModal;
    int carReleaseYear;

    public:
    void getData(){

        cout<<"Enter Car Id :";
        cin>>carId;

        cin.ignore();
        cout<<"Enter car Company Name :";
        getline(cin,carCompanyName);

        cout<<"Enter  Car Color :";
        cin>>carColor;

        cout<<"Enter Car modal :";
        cin>>carModal;

        cout<<"Enter Car release Year :";
        cin>>carReleaseYear;



    }

    void printData(){


        cout<<"Car Id :"<<carId<<endl;
        cout<<"Car Company Name :"<<carCompanyName<<endl;
        cout<<"Car Color :"<<carColor<<endl;
        cout<<"Car Modal :"<<carModal<<endl;
        cout<<"Car Release Year :"<<carReleaseYear<<endl;
    }



};

int main (){


    Car c[4];

    for(int i=0;i<4;i++){
        cout<<"\n\n||==-Enter Car "<<i+1<<" Details-==||\n\n"; 
        c[i].getData();
    }

    for(int i=0;i<4;i++){
        cout<<"\n\n||==-Car "<<i+1<<" Details-==||\n\n"; 
        c[i].printData();
    }




    return 0;
}