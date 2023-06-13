/*

Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height.
(just to make you familiar with initialization lists)

*/

#include<iostream>

using namespace std;

class Volume{
    int length, breadth, height;
    public :
    Volume(int l,int b,int h):length(l),breadth(b),height(h){}
    int returnVolume(){
        return length*breadth*height;
    }
};
int main(){
    int length, breadth, height;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the breadth : ";
    cin>>breadth;
    cout<<"Enter the height: ";
    cin>>height;
    Volume obj(length,breadth,height);
    cout<<"Volume : "<< obj.returnVolume();
}
