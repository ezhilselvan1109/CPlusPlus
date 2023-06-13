//To count leading zeros in a binary number.


#include<iostream>

using namespace std;

int main(){
    int n,temp,count1=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    int total=sizeof(int)*8;
    while(n!=0){
        temp=n%2;
            count1++;
        n/=2;
    }
    cout<<"ANS :"<<total-count1;
}

