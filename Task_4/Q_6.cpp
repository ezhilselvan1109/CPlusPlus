// Illustrate an example for friend class.
#include<iostream>

using namespace std;

class ClassA{
    int x=10;
    public:
    friend class ClassB;
};
class ClassB{
    public:
    void output(ClassA &obj){
        cout<<obj.x;
    }
};
int main(){
    ClassA obj1;
    ClassB obj2;
    obj2.output(obj1);
}
