//Write an operator function to add and convert the distance object into feet and inches

#include<iostream>

using namespace std;

class Distance{
    int feet,inches;
    public:
    void input(){
        cout<<"Enter the feet : ";
        cin>>feet;
        cout<<"Enter the inches : ";
        cin>>inches;
    }
   void operator-(Distance obj2){
        cout<<"BEfore : "<<endl<<feet<< " "<<inches<<endl<<obj2.feet<< " "<<obj2.inches<<endl;
        while(obj2.inches>12){
            obj2.feet++;
            obj2.inches-=12;
        }
        while(inches>12){
            feet++;
            inches-=12;
        }
        cout<<"Aftore : "<<endl<<feet<< " "<<inches<<endl<<obj2.feet<< " "<<obj2.inches<<endl;
        cout<<"FEET : ";
        if(feet>obj2.feet){
            cout<<feet-obj2.feet<<endl;
        }else{
            cout<<obj2.feet-feet<<endl;
        }
        cout<<"INCHES : ";
        if(inches>obj2.inches){
            cout<<inches-obj2.inches<<endl;
        }else{
            cout<<obj2.inches-inches<<endl;
        }
    }
};
int main(){
    Distance obj1,obj2;
    obj1.input();
    obj2.input();
    obj1-obj2;
}
