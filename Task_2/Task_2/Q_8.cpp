/*
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the
constructor having the three sides as its parameters.
*/

#include <iostream>

using namespace std;

class Triangle{
    int base,height,side;
    public :
    Triangle(int base,int height,int side){
        this -> base=base;
        this -> height=height;
        this -> side=side;
    }

    int Area(){
        return (base*height)/2;
    }
    int perimeter(){
        return base+(2*side);
    }


};
int main(){
    Triangle obj(3,4,5);
    cout<<"Area : "<<obj.Area()<<endl;
    cout<<"perimeter : "<<obj.perimeter();
}
