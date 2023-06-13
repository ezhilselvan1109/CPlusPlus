//C++ program to manipulate file pointers.

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream File;
    File.open("Q8File",ios::out);
    int position;
    File<<"//C++ program to manipulate file pointers.";
    cout<<"Returns the position of put pointer Using tellp() : ";
    cout<<File.tellp()<<endl;
    cout<<"move the pointer 5 bytes backward from current position Using seekp() :";
    File.seekp(-5,ios::cur);
    cout<<File.tellp()<<endl;
    cout<<"move the pointer 7 bytes forward from beginning of the file Using seekp() :";
    File.seekp(7,ios::beg);
    cout<<File.tellp()<<endl;
    cout<<"Moves the get pointer to a specific location in the file Using seekg() :";
    File.seekg(5);
    cout<<File.tellg()<<endl;
}