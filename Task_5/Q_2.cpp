//Write a code to use unnamed namespaces.

#include <iostream>
//using namespace std;

namespace
{
   int x=10;
}

int main()
{
   std::cout<<x<< std::endl;
}
