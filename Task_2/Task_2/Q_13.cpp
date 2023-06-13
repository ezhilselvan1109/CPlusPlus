/*
Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and
imaginary parts are entered by the user.
*/


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
    void product(Complex obj1,Complex obj2){
        Real=obj1.Real*obj2.Real;
        Imaginary=obj1.Imaginary*obj2.Imaginary;
        cout<<"product : "<<Real<<"*"<<Imaginary<<"i"<<endl;
    }
};

int main(){

    Complex obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3.add(obj1,obj2);
    obj3.sub(obj1,obj2);
    obj3.product(obj1,obj2);
}
