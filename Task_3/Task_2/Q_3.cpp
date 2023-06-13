/*
A class Point is declared as follows:

class Point{

public:

Point(int=0;int=0);  //default constructor

void setPoint(int,int); //set coordinates

int getX() const {return x;} //get x coordinates

int getY() const {return y;} //get y coordinates

void printPoint(); // print (x,y) coordinates

private:

int x,y;

};

Write the implementation of the class Point in the same file.

Then, declare a class called Circle that is derived from the class Point. The class Circle has public member functions Circle (constructor), setRadius(),
getRadius() and area() and one private data member radius. The class Circle indirectly uses private member x and y of class Point to store the coordinate
of the center of the circle. The class Circle also checks to make sure the radius value is a positive number, otherwise it is set to default value 1.

Note: The private members of class Point can only be indirectly accessed by class Circle using public methods of class point.

Implement the class Circle and write a driver program to test the class Circle. An example of the output of the driver program is.

Enter x: 2

Enter y: 2

Enter radius: 1

Circle center is (2,2)

Radius is 1

Area is 3.14
*/

#include<iostream>
#include <iomanip>
#include <ios>

using namespace std;

class Point{
public:

    Point(){
        x=5;
        y=5;
    }
    void setPoint(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getX() const {return x;}
    int getY() const {return y;}
    void printPoint(){
        cout<<x<<" "<<y;
    }
    private:
    int x,y;

};


class Circle:public Point{
    int radius;
    public:
        Circle(){
            radius=4;
        }
        void setRadius(int value){
            if(value>=0){
                radius=value;
            }else{
                radius=1;
            }

        }
        int getRadius(){
            return radius;
        }
        float area(){
            return (22/(float)7*radius*radius);

        }
};
int main(){

    int x,y,r;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Enter r :";
    cin>>r;
    Circle Circleobj;
    Point Pointobj;
    Pointobj.setPoint(x,y);
    Circleobj.setRadius(r);
    cout<<"Circle center is ("<<Pointobj.getX()<<","<<Pointobj.getY()<<")"<<endl;
    cout<<"Radius is : "<<Circleobj.getRadius()<<endl;
    cout<<"Area is : "<<setprecision(3)<<Circleobj.area()<<endl;




    /*
    Circle Circleobj;
    cout<<Circleobj.getRadius()<<endl;
    Circleobj.setRadius(1);
    Circleobj.area();

    Point Pointobj;
    cout<<endl<<Pointobj.getX()<<endl;
    cout<<Pointobj.getY()<<endl;
    Pointobj.setPoint(2,2);
    Pointobj.printPoint();
    */
}

//22/7
