//To count trailing zeros in a binary number.

#include<iostream>

using namespace std;

int main(){
    int num,temp,count=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>num;
    while(num!=0){
        temp=num%2;
        if(temp==1){
            break;
        }
        count++;
        num/=2;
    }
    cout<<"ANS : "<<count;
}
