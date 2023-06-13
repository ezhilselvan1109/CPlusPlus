//To rotate bits of a given number

#include<iostream>

using namespace std;

int main(){
    int decimal;
    cout<<"Enter the number : ";
    cin>>decimal;
    int rotatenum;
    cout<<"Enter the number for rotate : ";
    cin>>rotatenum;

    cout<<"ANS : ";
    cout<<((decimal >> rotatenum)|(decimal << ((sizeof(int)*8) - rotatenum)));
}
