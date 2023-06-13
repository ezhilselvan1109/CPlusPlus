/*

Write a C++ program to sum of all positive integers in a sentence.
Sample string: There are 12 chairs, 15 desks, 1 blackboard and 2 fans.
Output: 30

*/

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    int sum=0,i=0;
    char str[20];
    cout<<"\nEnter some sentence here:\n(Enter Cntrl+C to stop the process:) ";
    while(cin>>str){
        sum+=atoi(str);
        i++;
    }
    cout<<"ANS : "<<sum;
}
