#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Initializer list : "<<endl;
    vector<int> vector1 = {1, 2, 3, 4, 5};
    for (int i : vector1) 
    cout << i << "  ";
    cout<<endl;
    cout<<"Uniform initialization : "<<endl;
    vector<int> vector2 {1, 2, 3, 4, 5};
    for (int i : vector2) 
    cout << i << "  ";
    cout<<endl;
    vector<int> vector3(10,5);
    for (int i : vector3) 
    cout << i << "  ";
    cout<<endl;
    cout<<"Vector Operations : ";
    vector<int> vector4;
    cout<<endl<<"Add Elements : ";
    vector4.push_back(1);
    vector4.push_back(2);
    vector4.push_back(3);
    vector4.push_back(4);
    vector4.push_back(5);
    for (int i : vector4) 
    cout << i << "  ";
    cout<<"Access Elements :"<<endl;
    cout<<"Index 0: "<<vector4.at(0)<<endl;
    cout<<"Index 1: "<<vector4.at(1)<<endl;
    cout<<"Index 2: "<<vector4.at(2)<<endl;
    cout<<"Index 3: "<<vector4[3]<<endl;
    cout<<"Change Vector Element : "<<endl;
    vector4.at(0)=10;
    vector4.at(1)=9;
    vector4.at(2)=8;
    vector4.at(3)=7;
    vector4.at(4)=6;
    for(int i:vector4)
    cout<<i<<" ";
    cout<<endl;
    cout<<"Delete Elements : ";
    vector4.pop_back();
    for(int i:vector4)
    cout<<i<<" ";
    cout<<endl;
    cout<<"Delete Elements : ";
    vector4.pop_back();
    for(int i:vector4)
    cout<<i<<" ";
    cout<<endl;
    cout<<"Functions : "<<endl;
    cout<<"returns the number of elements present in the vector : size() :";
    cout<<vector4.size()<<endl;
    cout<<"returns the first element of the vector : front() : ";
    cout<<vector4.front()<<endl;
    cout<<"returns the last element of the vector : back() : ";
    cout<<vector4.back()<<endl;
    cout<<"returns 1 (true) if the vector is empty : empty() : ";
    cout<<vector4.empty()<<endl;
    cout<<"iterator : "<<endl;
    vector<int>::iterator i;
    for (i = vector4.begin(); i!= vector4.end(); ++i) 
    cout << *i << "  ";
    cout<<endl;
    cout<<"removes all the elements of the vector :remove() : ";
    vector4.clear();
    cout<<endl;
    cout<<"returns 1 (true) if the vector is empty : empty() : ";
    cout<<vector4.empty()<<endl;
}