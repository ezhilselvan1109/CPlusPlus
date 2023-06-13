//To convert decimal to binary number system using bitwise operator.

#include<iostream>

using namespace std;

int main(){
    int decimal;
    cout<<"Enter the number : ";
    cin>>decimal;
    int binary=0,temp=1;
    while(decimal!=0){
        binary=binary+(decimal&1) * (temp);
        temp*=10;
        decimal=decimal>>1;
    }
    cout<<binary;

}
