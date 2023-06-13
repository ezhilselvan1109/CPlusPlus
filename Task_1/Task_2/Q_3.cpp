/*
Create a calculator that takes a number, a basic math operator (+,-,*,/,^), and a second number all from user input, and
have it print the result of the mathematical operation. The mathematical operations should be wrapped inside of functions.
*/

#include <bits/stdc++.h>

using namespace std;

int plusoperation(int,int);
int minusoperation(int,int);
int muliplicationoperation(int,int);
int divideoperation(int,int);
int poweroperation(int,int);

int main(){
    char ch;;
    int first,second;
    int ex;
    while(1){
    cout<<"ENTER THE NUMBER 0 - EXIT ANS 1 - CONTINUE "<<endl;
    cin>>ex;
    cout<<"Enter the First Number :";
    cin>>first;
    cout<<"Enter the Operator :";
    cin>>ch;
    cout<<"Enter the Second Number:";

    cin>>second;
    switch(ch){
    case '+':
        cout<<"+ Operator : "<<plusoperation(first,second)<<endl;
        break;
    case '-':
        cout<<"- Operator : "<<minusoperation(first,second)<<endl;
        break;
    case '*':
        cout<<"* Operator : "<<muliplicationoperation(first,second)<<endl;
        break;
    case '/':
        cout<<"/ Operator : "<<divideoperation(first,second)<<endl;
        break;
    case '^':
        cout<<"^ Operator : "<<poweroperation(first,second)<<endl;
        break;
    }
    if(ex==0){
        //exit(0);
        break;
    }
    }
}
int plusoperation(int first,int second){
    return first+second;
}
int minusoperation(int first,int second){
    return first-second;
}
int muliplicationoperation(int first,int second){
    return first*second;
}
int divideoperation(int first,int second){
    return first/second;
}
int poweroperation(int base,int power){
    int sum=1;
    for(int i=1;i<=power;i++){
        sum*=base;
    }
    return sum;
}
