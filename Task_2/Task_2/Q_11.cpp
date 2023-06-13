/*
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters
of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle
are entered through keyboard
*/

#include<iostream>

using namespace std;

class Area{
    int length,breadth;
    public :
    Area(int length,int breadth){
        this -> length=length;
        this -> breadth=breadth;
    }
    returnArea(){
        return length*breadth;
    }
};
int main(){
    int length,breadth;
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breadth;
     Area obj(length,breadth);
    cout<<"ANS :"<<obj.returnArea();
}
