#include<iostream>

using namespace std;

class Shape{
public:
    double base,height;
    Shape(double a,double b){
        base=a;
        height=b;
    }
    virtual double area(){
        cout <<"Base class area In";
        return 0;
    }
};

class Triangle :public Shape{
    public :
    Triangle(double a,double b):Shape(a,b){}
    double area(){
        cout<<"Triangle area ";
        return base*height/2;
    }
};

class Rectangle:public Shape{
    public:
    Rectangle (double a,double b):Shape(a,b){}
    double area(){
        cout<<"Rectangle area ";
        return base*height;
    }
};


int main(){
    Shape *s;
    Triangle t(10.0,20.0);
    s = &t;
    cout<< s->area()<<" "<<endl;
    Rectangle r(10.0,20.0);
    //s = &r;
    cout<<r.area();
}
