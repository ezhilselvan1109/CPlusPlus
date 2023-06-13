/*
There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4). Write a C++ program to check whether two straight lines AB and CD are orthogonal or not.
Input:
0 6
5 6
3 8
3 2
Output:
yes
*/

#include<iostream>

using namespace std;

int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;

    cout<<"A POINT : \nENTER X VALUE : ";
    cin>>x1;
    cout<<"ENTER Y VALUE : ";
    cin>>y1;
    cout<<"B POINT : \nENTER X VALUE : ";
    cin>>x2;
    cout<<"ENTER Y VALUE : ";
    cin>>y2;
    cout<<"C POINT : \nENTER X VALUE : ";
    cin>>x3;
    cout<<"ENTER Y VALUE : ";
    cin>>y3;
    cout<<"C POINT : \nENTER X VALUE : ";
    cin>>x4;
    cout<<"ENTER Y VALUE : ";
    cin>>y4;

    cout<<"ANS : ";
    if(((y2-y1)*(y4-y3)+(x4-x3)*(x3-x1))==0)
        cout<<"yes";
    else
        cout<<"no";

}
