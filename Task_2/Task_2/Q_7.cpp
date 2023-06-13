/*
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a
function to print the area and perimeter.
*/

#include<iostream>

using namespace std;

class Triangle{
    int base;
    int height;
    int side;
    public :
    int Area(int base,int height){
        return (base*height)/2;
    }
    int perimeter(int base,int side){
        return base+(2*side);
    }
};
int main(){
    Triangle obj;
    cout<<"Area : "<<obj.Area(3,4)<<endl;
    cout<<"perimeter : "<<obj.perimeter(3,5);
}
