/*

Use function pointer to find the following
1. Cube of a number
2. Power of a number x^n

*/

#include<iostream>

using namespace std;

int Cube(int );
int Power(int ,int );


int Cube(int num){
    return num*num*num;
}

int Power(int base,int pow){
    int i=1,sum=1;
    for(i=1;i<=pow;i++){
        sum*=base;
    }
    return sum;
}


int main(){
    int num;
    int (*Cube_ptr)(int)=&Cube;
    int (*Power_ptr)(int ,int )=&Power;
    cout<<"CUBE :\n"<<"ENTER THE NUMBER : ";
    cin>>num;
    cout<<"Cube : "<<obj.Cube_ptr(num)<<endl;

    int base,power;
    cout<<"POWER :\n"<<"ENTER THE BASE VALUE  : ";
    cin>>base;
    cout<<"ENTER THE POWER VALUE  : ";
    cin>>power;
    cout<<"Power : "<<obj.Power_ptr(base,power);
}
