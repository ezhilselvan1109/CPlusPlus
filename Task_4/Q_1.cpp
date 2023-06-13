/*
Program to create an Abstract class called Animal, where write a pure virtual function area to find the implementation in their derived classes
Cat and Dog.
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Animal{
    virtual void area()=0;
};


class Cat:public Animal{
    public:
        void area(){
            cout<<"Cat Area"<<endl;
        }
};

class Dog:public Animal{
    public:
        void area(){
            cout<<"Dog Area "<<endl;
        }
};

int main(){
    Dog Dogobj;
    Dogobj.area();

    Cat Catobj;
    Catobj.area();
}
