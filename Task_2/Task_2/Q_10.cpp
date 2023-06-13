/*

Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns
the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

*/

#include <iostream>

using namespace std;
class Area{
    int length,breadth;
    public :
    void setDim(int length,int breadth){
        this -> length=length;
        this -> breadth=breadth;
    }

    int getArea(){
        return length*breadth;
    }

};
int main(){
    Area obj;
    int length,breadth;
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breadth;
    obj.setDim(length,breadth);
    cout<<"ANS :"<<obj.getArea();
}
