//Program to create alias name for the namespace.

#include<iostream>
using namespace std;
namespace A
{
    namespace B
    {
    void print()
    {
        cout<<"print()....";
    }
    }
}
int main()
{
    using namespace A;
    namespace C=A::B;
    C::print();
}
