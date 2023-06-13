












//Create a class "Complex" and perform add and sub operations on two complex numbers and display them.

#include<iostream>

using namespace std;

class Complex{
    int Real,Imaginary;
    public :
    void input(){
        cout<<"ENTER THE REALNUMBER : ";
        cin>>Real;
        cout<<"ENTER THE IMAGINARY : ";
        cin>>Imaginary;
    }
    void add(Complex obj1,Complex obj2){
        Real=obj1.Real+obj2.Real;
        Imaginary=obj1.Imaginary+obj2.Imaginary;
        cout<<"ADD : "<<Real<<"+"<<Imaginary<<"i"<<endl;
    }
    void sub(Complex obj1,Complex obj2){
        Real=obj1.Real-obj2.Real;
        Imaginary=obj1.Imaginary-obj2.Imaginary;
        if(0<=Imaginary)
            cout<<"SUB : "<<Real<<"+"<<Imaginary<<"i"<<endl;
        else
            cout<<"SUB : "<<Real<<Imaginary<<"i"<<endl;
    }
};

int main(){

    Complex obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3.add(obj1,obj2);
    obj3.sub(obj1,obj2);
}










