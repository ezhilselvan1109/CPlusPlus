//Illustrate with an example using the same print().


#include<iostream>
using namespace std;
namespace A
{
    void print()
    {
        cout<<"namespace print fun...."<<endl;
    }
}
void print()
{
    cout<<"Outer print fun...."<<endl;
}

int main()
{
    print();
    A::print();
}
