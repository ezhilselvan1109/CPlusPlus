#include<iostream>

#include<vector>

using namespace std;

int main(){
    vector<int> Vector;
    Vector.push_back(4);
    Vector.push_back(5);
    Vector.push_back(6);
    for(auto i:Vector)
        cout<<i<<" ";
}