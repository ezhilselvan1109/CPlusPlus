/*

The multiply-derived class MotorHome needs to be fully implemented and tested.
Define an enumeration type CATEGORY that represents the categories “Luxury,” “First Class,” “Middle Class,” and “Economy”.
Develop a class called Home with two data members used to store the number of rooms and the size in square meters. Supply default values for your
constructor definition to create a default constructor.In addition to access methods, also define the method display(), which outputs the data members
of an apartment.Define a class derived from the Car and Home classes called MotorHome, which is used to represent motorhomes. Inheritance of public base
classes is used.The MotorHome class contains a new data member used to store one value of the CATEGORY type. In addition to defining a constructor with
default values, also define appropriate access methods and a display() method for output.
Write a main function that first fully initializes a MotorHome type object and then outputs the object.
Then create a second instance of the MotorHome type without initial values and display the object on screen.
Call all the set methods in the MotorHome class and its base classes to set your own values for the objects.Then output the object once more.

*/


#include<iostream>

using namespace std;

enum CATEGORY{Luxury=1,First_Class,Middle_Class,Economy};


class Home{
     int number_of_rooms,size_in_square_meters;
    public :
        Home(){
             number_of_rooms=2;
             size_in_square_meters=4;
         }
         int getsetnumber_of_rooms(){
             return number_of_rooms;
         }
         int getsetsize_in_square_meters(){
             return size_in_square_meters;
         }
         void settsetnumber_of_rooms(int value){
             number_of_rooms=value;

         }
         void setsetsize_in_square_meters(int value){
             size_in_square_meters=value;
         }
         void display(){
             cout<<"number_of_rooms : "<<number_of_rooms<<"\nsize_in_square_meters : "<<size_in_square_meters;
         }
};

class Car{
    int no_Of_Seat;
    public:
    Car(){
        no_Of_Seat=5;
    }
    int geter(){
        return no_Of_Seat;
    }
    void seter(int value){
        no_Of_Seat=value;
    }
    void display(){
        cout<<no_Of_Seat;
    }
};

class MotorHome:public Home,public Car{
    CATEGORY type;
    public :
    MotorHome(){
        type=Luxury;
    }
    int geter(){
        return type;
    }
    void seter(CATEGORY value){
        type=value;
    }
    void display(){
        cout<<type;
    }
};

int main(){
    cout<<"MotorHome class :"<<endl;
    MotorHome MotorHomeobj;
    cout<<"USING GETER METHOD : "<<MotorHomeobj.geter()<<endl;
    MotorHomeobj.seter(First_Class);
    cout<<"USING DISPLAY METHOD : ";
    MotorHomeobj.display();
    cout<<endl;

    Home Homeobj;
    cout<<"\nHome class :"<<endl;
    cout<<"USING GETER METHOD : "<<endl;
    cout<<"number_of_rooms : "<<Homeobj.getsetnumber_of_rooms()<<endl;
    cout<<"size_in_square_meters : "<<Homeobj.getsetsize_in_square_meters()<<endl;
    Homeobj.settsetnumber_of_rooms(4);
    Homeobj.setsetsize_in_square_meters(4);
    cout<<"\nUSING DISPLAY METHOD : "<<endl;
    Homeobj.display();

    Car Carobj;
    cout<<"\nCar class :"<<endl;
    cout<<"USING GETER METHOD : ";
    cout<<Carobj.geter()<<endl;
    Carobj.seter(4);
    cout<<"USING DISPLAY METHOD : ";
    Carobj.display();
}
