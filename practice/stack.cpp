#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> value;
    value.push(1);
    value.push(2);
    value.push(3);
    
    cout<<"print top element : "<<endl;
    cout<<value.top();
    cout<<"stack element : "<<endl;
    while(!value.empty()) {
    cout<<value.top()<<" ";
    value.pop();
    }
    cout<<"adds an element into the stack : push() : "<<endl;
    value.push(10);
    value.push(9);
    value.push(8);
    value.push(7);
    value.push(6);
    value.push(5);
    cout<<"returns the element at the top of the stack : top() : ";
    cout<<value.top()<<endl;
    cout<<"returns the number of elements in the stack : size() : ";
    cout<<value.size()<<endl;
    cout<<"returns true if the stack is empty :empty() : ";
    cout<<value.empty()<<endl;
    while(!value.empty()) {
    cout<<value.top()<<" ";
    value.pop();
    }
    cout<<endl;
    cout<<"returns true if the stack is empty :empty() : ";
    cout<<value.empty()<<endl;
}