/*
Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by
creating two objects of the class 'Student'.
*/

#include<iostream>

using namespace std;

class Student{
    int roll_number,phone_number ;
    string  name,address;
public :
    void input(string stname,int rollno,int ph_no,string add){
        name=stname;
        roll_number=rollno;
        phone_number=ph_no;
        address=add;
    }
    void print(){
        cout<<name<<" "<<roll_number<<" "<<phone_number<<" "<<address<<endl;
    }
};
int main(){
    Student obj1;
    Student obj2;
    obj1.input("Sam",111,123456789,"Guduvancheri");
    obj2.input("John",222,987654321,"Guduvancheri");
    obj1.print();
    obj2.print();
}
