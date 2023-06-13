/*
Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
*/



#include<iostream>
using namespace std;
int main()
{
int factorial(int);
int fact,value;
cout<<"Enter any number: ";
cin>>value;
fact=factorial(value);
cout<<"Factorial of a number is: "<<fact<<endl;
return 0;
}
int factorial(int n)
{

if(n==0)
return(1);
else
{
return(n*factorial(n-1));
}
}























/*
#include<iostream>

using namespace std;

int Factorial(int);

int main(){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    cout<<"ANS : "<<Factorial(number);
}

int Factorial(int number){
    if(number==0){
        return 0;
    }
    int sum=1;
    for(int i=1;i<=number;i++){
        sum*=i;
    }
    return sum;
}

*/
