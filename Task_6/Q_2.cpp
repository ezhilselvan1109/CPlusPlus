//Write a program that can throw integer and double exceptions in the same try block. Implement the exception handling blocks for both exceptions.

#include <iostream>
using namespace std;

class Exception{
    int number;
    public:
    void input(){
        try
        {
            cout<<"1 - Integer\n2 - Double\nEnter the Value : ";
            cin>>number;
            fun(number);
        }
        catch(int value)
        {
        cout<<"Caught an Integer-Type Exception!!! Value = "<<value;
        }
        catch(double value)
        {
        cout<<"Caught an Double-Type Exception!!! Value = "<<value;
        }
    }
    void fun(int value)throw(int, double)
    {
    if(value==1)
    throw 10;

    if(value==2)
    throw 20.21;
    }
};

int main()
{
    Exception obj;
    obj.input();
}
