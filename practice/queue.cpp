#include<iostream>
#include<queue>

using namespace std;

int main() {
  queue<int> value;
  value.push(5);
  value.push(4);
  cout << "Queue: ";
  while(!value.empty()) {
    cout<<value.front()<<" ";
    value.pop();
  }
  cout << endl;
  cout<<"inserts an element at the back of the queue - push() ";
  value.push(1);
  value.push(2);
  value.push(3);
  value.push(4);
  value.push(5);
  value.push(6);
  value.push(7);
  cout << endl;
  cout<<"returns the first element of the queue - front() : ";
  cout<<value.front()<<endl;
  cout<<"returns the last element of the queue - back() : ";
  cout<<value.back()<<endl;
  cout<<"returns the number of elements in the queue - size(): ";
  cout<<value.size()<<endl;
  cout<<"returns (true) if the queue is empty - empty() : ";
  cout<<value.empty()<<endl;
  cout<<"Queue Element : "<<endl;
    while(!value.empty()) {
        cout<<value.front()<<" ";
        value.pop();
    }
    cout<<endl;
   cout<<"returns (true) if the queue is empty - empty() : ";
   cout<<value.empty()<<endl;
}