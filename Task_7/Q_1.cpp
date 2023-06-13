//Program to do the arithmetic operations using a class template.

#include <iostream>
using namespace std;

template<class T1, class T2>
class Type{
    T1 value1;
    T2 value2;
    public:
    void setfun(T1 value1,T2 value2)
    {
        this->value1=value1;
        this->value2=value2;
    }
    void add()
    {
        cout<<"Addition of two numbers: "<<value1+value2<<endl;
    }
    void mul()
    {
        cout<<"Multiplication of two numbers: "<<value1*value2<<endl;
    }
    void div()
    {
        cout<<"Division of two numbers: "<<value1/value2<<endl;
    }
    void sub()
    {
        cout<<"Subtraction of two numbers : "<<value1-value2<<endl;
    }
    void mod()
    {
        cout<<"Modulus of two numbers : "<<value1%value2<<endl;
    }
};

int main()
{
    Type<int,int> obj;
    obj.setfun(4,6);
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.mod();
    Type<char,char> obj1;
    obj1.setfun('a','b');
    obj1.add();
    obj1.sub();
    obj1.mul();
    obj1.div();
    obj1.mod();
    Type<int,char> obj2;
    obj2.setfun(4,6);
    obj2.add();
    obj2.sub();
    obj2.mul();
    obj2.div();
    obj2.mod();
    return 0;
}
