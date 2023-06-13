/*

Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named
'Area' which returns the area. Length and breadth are passed as parameters to its constructor

*/

#include<iostream>

using namespace std;

class Rectangle{
    int Length , breadth;
    public :
    Rectangle(int Length ,int  breadth ){
        this -> Length=Length;
        this -> breadth=breadth;
    }
    int Area(){
        return Length*breadth;
    }
};
int main(){
    Rectangle obj1(4,5);
    cout<<obj1.Area()<<endl;
    Rectangle obj2(5,8);
    cout<<obj2.Area();

}
