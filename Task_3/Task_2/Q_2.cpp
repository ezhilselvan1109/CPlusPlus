/*

Construct a base class called twoD contains x and y and methods to read and write the x and y. Create another class called threeD which is derived from twoD and also contains z and write methods to read and write z. Also write a method to
find the distance of two threeD Points.
sqrt((x2-x1)^2+(y2-y1)^2+(z2-z1)^2)
In main:
Create one ThreeD object using the default constructor.
Use the setters to set x, y, and z.
Create the second ThreeD object using the constructor with three arguments.
in the TwoD class:
Add a cout statement to the TwoD default constructor with a message "TwoD default constructor"
Add a cout statement to other TwoD constructor with a message "TwoD constructor with two arguments"

*/


#include<iostream>

using namespace std;


class twoD{
    int x,y;
    public :
        twoD(){
            x=5;
            y=6;
            cout<<"TwoD default constructor";
        }
        twoD(int x,int y){
            this -> x=x;
            this -> y=y;
            cout<<"TwoD constructor with two arguments";
        }

    void read(){
        cout<<"Enter x value : ";
        cin>>x;
        cout<<"Enter y value : ";
        cin>>y;
    }
    void write(){
        cout<<"x value : ";
        cout<<x<<endl;
        cout<<"y value : ";
        cout<<y<<endl;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};

class threeD:public twoD{
    int z;
    public :
    threeD(){
        z=5;
    }
    threeD(int x,int y,int z):twoD(x,y){
        this -> z=z;
    }
    void read(){
        twoD::read();
        cout<<"Enter z value : ";
        cin>>z;

    }
    void write(){
        twoD::write();
        cout<<"z value : ";
        cout<<z<<endl;

    }
    void distance(threeD obj1,threeD obj2){

        cout<<(((obj2.getx()-obj1.getx())*(obj2.getx()-obj1.getx()))+((obj2.gety()-obj1.gety())*(obj2.gety()-obj1.gety()))+((obj2.z-obj1.z)*(obj2.z-obj1.z)));
    }
};
int main(){
    threeD obj1;
    cout<<endl;
    obj1.read();
    cout<<endl;
    obj1.write();

    cout<<endl;
    threeD obj2(2,3,4);
    cout<<endl;
    obj2.read();
    cout<<endl;
    obj2.write();
    threeD obj3;
    cout<<"\ndistance : ";
    obj3.distance(obj1,obj2);

}
