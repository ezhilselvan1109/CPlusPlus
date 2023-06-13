//Illustrate with an example using an inline namespace.

#include<iostream>
using namespace std;
namespace A
{
    inline namespace B
    {
     void print()
    {
        cout<<"print....";
    }
    }
}

int main()
{
    A::print();
}
