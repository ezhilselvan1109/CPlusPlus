#include<iostream>
#include<unordered_set>
using namespace std;

int main() {

  cout<<"uniform initialization : "<<endl;
  unordered_set<int> numbers {1, 100, 10, 70, 100};
  cout << "numbers : ";
  for(int num: numbers) {
    cout<<num<<" ";
  }
  cout<<"inserts an element to the unordered set - insert() ";
  numbers.insert(80);
  cout << "numbers : ";
  for(int num: numbers) {
    cout<<num<<" ";
  }
  cout<<"Remove Elements : "<<endl;
  numbers.erase(100);
  cout << "numbers : ";
  for(int num: numbers) {
    cout<<num<<" ";
  }
  cout<<endl;
  cout<<"Check If a Value Exists in the Unordered Set : "<<endl;
  cout<<"Using find():";
  if(numbers.find(12)!=numbers.end()){
    cout<<"Yes";
  }else{
    cout<<"No";
  }
  cout<<endl;
  cout<<"Using count() : ";
  if(numbers.count(7)){
    cout<<"Yes";
  }else {
    cout<<"No";
  }
  cout<<endl;
  cout << "numbers : ";
  for(int num: numbers) {
    cout<<num<<" ";
  }
  cout<<endl;
  cout<<"Get the Size : ";
  cout<<numbers.size();
}