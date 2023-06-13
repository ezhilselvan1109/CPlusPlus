//Write an operator function to add and subtract the two complex objects using friend functions.

#include<iostream>

using namespace std;

class Complex{
    int real,img;
public:
    void input(){
        cout<<"ENTER THE REAL NUMBER : ";
        cin>>real;
        cout<<"ENTER THE IMG NUMBER : ";
        cin>>img;
    }
    friend void operator+(Complex obj1,Complex obj2);
    friend void operator-(Complex obj1,Complex obj2);
};
void operator+(Complex obj1,Complex obj2){
    cout<<"add : "<<obj1.real+obj2.real<<"+"<<obj1.img+obj2.img<<"i"<<endl;
}

void operator-(Complex obj1,Complex obj2){
    cout<<"subtract : ";
    if(obj1.img<obj2.img){
        cout<<obj1.real-obj2.real<<obj1.img-obj2.img<<"i"<<endl;
    }else{
        cout<<obj1.real-obj2.real<<"+"<<obj1.img-obj2.img<<"i"<<endl;
    }
}
int main(){
    Complex obj1,obj2;
    cout<<"Enter The First Complex Number : "<<endl;
    obj1.input();
    cout<<"Enter The Second Complex Number : "<<endl;
    obj2.input();
    obj1+obj2;
    obj1-obj2;
}
