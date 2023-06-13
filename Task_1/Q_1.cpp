//Write a program in C++ to input a single digit number and print a rectangular form of 5 columns and 5 rows.

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<"ANS :\n";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || i==4 || j==0 || j==4){
                cout<<n;
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
