//To swap two numbers using bitwise operator
#include<iostream>

using namespace std;

int main(){
    int first,second;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>first;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>second;
    first=first^second;
    second=first^second;
    first=first^second;
    cout<<"AFTER : "<<"\nTHE FIRST NUMBER : ";
    cout<<first;
    cout<<"\nTHE SECOND NUMBER : ";
    cout<<second;


}
