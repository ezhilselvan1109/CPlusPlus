//Program to find the Fibonacci series till the given number of terms.

#include<iostream>

using namespace std;

int main(){
    int endn;
    cout<<"ENTER THE NUMBER : ";
    cin>>endn;
    int start=0;
    int second=1;

    cout<<"ANS : "<<start<<" "<<second<<" ";
    int third;
    for(int i=2;i<endn;i++){
        third=start+second;
        cout<<third<<" ";
        start=second;
        second=third;
    }
}
