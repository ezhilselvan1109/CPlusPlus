/*
Use call by reference to print character for 8 times(change the formal argument by adding 3), actual argument value is 5.
Also show up the reference variable value after changing the value, in main().
*/

#include<iostream>

using namespace std;

void print(int &decimal){
    decimal+=3;
    for(int i=1;i<=8;i++){
        cout<<i<<" "<<decimal<<endl;
    }
}
int main(){
    int decimal=5;
    cout<<"Before :"<<decimal<<endl;
    print(decimal);
    cout<<"After :"<<decimal;
}


