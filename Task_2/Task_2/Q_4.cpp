//Create a class "Distance" and add two Distance object and also convert the inches into feet if inches>12

#include<iostream>

using namespace std;

class Distance{
    public :
    int inches,feet;

    void input(){
        cout<<"ENTER THE FEET : ";
        cin>>feet;
        cout<<"ENTER THE INCHES : ";
        cin>>inches;
    }
    void calculate(Distance obj1,Distance obj2){
        int inchess,feett;
        inchess=obj1.inches+obj2.inches;
        feett=obj1.feet+obj2.feet;
        while(inchess>=12){
            inchess-=12;
            feett++;
        }
        cout<<"FEET : "<<feett<<" INCHES : "<<inchess;
    }

};
int main(){
    Distance obj1,obj2,obj3;
    cout<<"ENTER THE FIRST VALUES : "<<endl;
    obj1.input();
    cout<<"ENTER THE SECOND VALUES : "<<endl;
    obj2.input();
    obj3.calculate(obj1,obj2);
}



