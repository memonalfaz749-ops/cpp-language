#include<iostream>
using namespace std;

class cafe{

    int cafe_id;
    string cafe_name;
    float cafe_rating;
    string cafe_location;
    int cafe_establish_year;

    public:

    void getData(){
    cout<<"Enter cafe Id :";
    cin>>cafe_id;

    cin.ignore();
    cout<<"Enter cafe Name :";
    getline(cin,cafe_name);

    cout<<"Enter cafe rating :";
    cin>>cafe_rating;

    cin.ignore();
    cout<<"Enter cafe location :";
    getline(cin,cafe_location);

    cout<<"Enter cafe establish year :";
    cin>>cafe_establish_year;

    }

    void printData(){


        cout<<"||==-cafe Details-==||"<<endl;
        cout<<"Cafe Id :"<<cafe_id<<endl;
        cout<<"Cafe Name :"<<cafe_name<<endl;
        cout<<"Cafe Ratings :"<<cafe_rating<<" Stars"<<endl;
        cout<<"Cafe Location :"<<cafe_location<<endl;
        cout<<"Cafe Establish Year :"<<cafe_establish_year<<endl;
    }



};
int main(){

    int i,numb;

    cout<<"Enter cafe Numbers :";
    cin>>numb;

    cafe c[100];

    for(i=0;i<numb;i++){

        cout<<"\n\nEnter cafe details\n\n";
        c[i].getData();
    }

    for(i=0;i<numb;i++){

        cout<<"\n\ncafe details\n\n";
        c[i].printData();
    }




    return 0;
}