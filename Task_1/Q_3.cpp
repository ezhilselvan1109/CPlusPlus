//Write a program in C++ to print the following pattern
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1|| i==j || i==n ){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<"\n";
    }
}
