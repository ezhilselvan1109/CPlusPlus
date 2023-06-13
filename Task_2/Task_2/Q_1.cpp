//Create a class called Arithmetic which contains two operands and perform all arithmetic operations on it.


#include <iostream>

using namespace std;

class Arithmetic{
    int firstvalue;
    int secondvalue;
    public :
    void input(){
    cout<<"ENTER THE FIRST VALUE :";
    cin>>firstvalue;
    cout<<"ENTER THE SECOND VALUE :";
    cin>>secondvalue;
    }
    int Addition(){
        return firstvalue+secondvalue;
    }
    int Subtraction(){
        return firstvalue-secondvalue;
    }
    int Multiplication(){
        return firstvalue*secondvalue;
    }
    int Division(){
        return firstvalue/secondvalue;
    }
    int Modulo_Operation(){
        return firstvalue%secondvalue;
    }

};
int main(){
    Arithmetic obj;
    obj.input();
    cout<<"Addition : "<<obj.Addition()<<endl;
    cout<<"Subtraction : "<<obj.Subtraction()<<endl;
    cout<<"Multiplication : "<<obj.Multiplication()<<endl;
    cout<<"Division : "<<obj.Division()<<endl;
    cout<<"Modulo_Operation : "<<obj.Modulo_Operation()<<endl;

}
