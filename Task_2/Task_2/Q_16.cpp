/*

Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'.
The output should be as follows:

*/

#include<iostream>
#include <iomanip>
using namespace std;

class Employee{
    string name,address;
    int yearofjoining,salary;
    public:
    void print()
    {
        cout <<left<<setw(9);
        cout<<name;
        cout <<left<<setw(17);
        cout<<yearofjoining;
        cout <<left<<setw(10);
        cout<<address;
    }
    void read();
};
void Employee::read()
{
    cout<<"Enter name :  ";
    cin>>name;
    cout<<"Enter year of joining :  ";
    cin>>yearofjoining;
    cout<<"Enter salary:  ";
    cin>>salary;
    cout<<"Enter address :  ";
    cin>>address;
}
int main(){
    Employee obj[3];
    for(int i=0;i<2;i++)
    {
        cout<<"EMPLOYEE DETAILS "<<i+1<<" : \n";
        obj[i].read();
        cout<<endl;
    }
    cout<<endl;
    cout<<"name \t year of joining  address "<<endl;
    for(int i=0;i<2;i++){
        obj[i].print();
        cout<<endl;
    }
}
