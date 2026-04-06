#include<iostream>
using namespace std;
class Train{

    private :
    int TrainNumber;
    string TrainName;
    string Source;
    string Destination;
    string TrainTime;


    public :
    static int TrainCount;

    void inputTrainDetails(){

        cout<<"\n\nEnter Train Number :";
        cin>>TrainNumber;

        cin.ignore();
        cout<<"Enter Train Name :";
        getline(cin,TrainName);

        
        cout<<"Enter Source :";
        getline(cin,Source);

        cout<<"Enter Destination :";
        getline(cin,Destination);

        cout<<"Enter TrainTime :";
        getline(cin,TrainTime);

        TrainCount++;
        
    }

    void displayTrainDetails(){
        cout<<"\n\nTrain Number :"<<TrainNumber<<endl;
        cout<<"Train Name :"<<TrainName<<endl;
        cout<<"Source :"<<Source<<endl;
        cout<<"Destination :"<<Destination<<endl;
        cout<<"Train Time :"<<TrainTime<<endl;
    }

     int TrainNo(){
        return TrainNumber;
    }
};
int Train::TrainCount = 0;
int main (){

    Train T[100];

    int choice,i,SearchNo;

    do{

        cout<<"\n\n--- Railway Reservation System Menu ---\n\n";
        cout<<"1. Add New Train Record"<<endl;
        cout<<"2. Display All Train Records"<<endl;
        cout<<"3. Search Train by Number"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"\n\nEnter Your Choice :";
        cin>>choice;

        switch (choice)

        
        {
        case 1:
            if(Train::TrainCount < 100){
                T[Train::TrainCount].inputTrainDetails();
            }
            else{
                cout<<"Record system is full.!"<<endl;
            }
            break;

        case 2:
            if(Train::TrainCount == 0){

                cout<<"No Train Record Found.!!"<<endl;
            }
            else{
                for(i=0;i<Train::TrainCount;i++){
                    cout<<"\n\nTrain "<<i+1<<" Details"<<endl;
                    T[i].displayTrainDetails();
                }
            }
            break;
        
        case 3:
            if(Train::TrainCount == 0){

                cout<<"No Train Record Found.!!"<<endl;
            }

            else{
                cout<<"Enter Train Number to Search :";
                cin>>SearchNo;
                for(i=0;i<Train::TrainCount;i++){
                    if(T[i].TrainNo() == SearchNo){
                        T[i].displayTrainDetails();
                    }
              
                    else{
                    cout<<"No Train Record Found.!!"<<endl;
                    }
                }
                break;
            }
        
        case 4:
           cout<<"Exiting the system. Goodbye!"<<endl;
           break;    

        
        default:
           cout<<"Invalid choice.!!";
            break;
        }
    }
    while(choice != 4);

}