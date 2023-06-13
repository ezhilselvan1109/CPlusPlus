#include<set>
#include<string>
#include<iostream>

using namespace std;

int main() {
  set<string> str{
    {"order"},
    {"unorder"},
    {"vetor"},
    {"set"},
    {"map"},
    {"map"}
  };
  cout<<"Ans : ";
  for(auto& i:str){
    cout<<i<<" ";
  }
}