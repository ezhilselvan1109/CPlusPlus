/*

#include <iostream>

#include <string>

using namespace std;

class Vehicle

{

public:

void print() { cout << "Print: I am a vehicle. \n"; }

void display() { cout << "Display: I am a vehicle. \n"; }

};

class Car: public Vehicle {

public:

void print() { cout << "Print: I am a car.\n"; }

void display() { cout << "Display: I am a car. \n"; }

};

int main()

{

Vehicle *v;

Car c; V = &c;

c.print();

c.display();

v->print();

v->display();

return 0;

}


Next, change the public member function print() in class Vehicle to virtual using the following statement:

virtual void print() { cout << "print: I am a vehicle. \n"; }

Observe the output and explain the difference between the outputs of virtual function and non-virtual function. Explain the difference in the outputs.

*/



#include <iostream>

#include <string>

using namespace std;

class Vehicle

{

public:

void print() { cout << "Print: I am a vehicle. \n"; }

virtual void display() { cout << "Display: I am a vehicle. \n"; }

};

class Car: public Vehicle {

public:

void print() { cout << "Print: I am a car.\n"; }

void display() { cout << "Display: I am a car. \n"; }

};

int main()

{

Vehicle *v;

Car c;

v = &c;
c.print();

c.display();

v->print();

v->display();

return 0;

}
