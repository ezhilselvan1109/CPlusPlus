//Write a program that throws and catches an integer exception. Handle the exception and print its value.

#include<iostream>

using namespace std;
class Exception{
    int Numerator,Denominator;
    public:
    void input(){
        cout<<"Enter the Numerator : ";
        cin>>Numerator;
        cout<<"Enter the Denominator : ";
        cin>>Denominator;
    }
    void output(){
        try{
        if(Denominator!=0){
        float Quotient =Numerator/Denominator;
        cout<<"The Quotient = "<< Quotient<<endl;
        }else{
        throw Denominator;
        }
        }
        catch(int Denominator)
        {
        cout<<"Denominator Is Zero"<<endl;
        cout<<"x="<<Denominator<<endl;
        }
    }
};
int main(){
    Exception obj;
    obj.input();
    obj.output();
}
