/*
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/


#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int roll_no;
    public :
    student(string name,int roll_no){
        this ->name=name;
        this ->roll_no=roll_no;
    }
    void print(){
        cout << "Name: " << name << endl;
        cout << "Roll No : " << roll_no << endl;
    }
};

int main() {
    student st1("john",2);
    st1.print();
}
