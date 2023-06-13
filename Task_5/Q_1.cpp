//Write a code to use fully-qualified namespaces.

#include<iostream>

using namespace std;

namespace A
{
    namespace B
    {
    inline void print()
    {
        cout<<"print()....";
    }
    }
}

int main()
{
    A::B::print();
}
