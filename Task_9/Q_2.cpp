//Find the maximum of all integers that you read using vector.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int size,num;
    vector<int> arr;
    cout<<"Enter the Size : ";
    cin>>size;
    cout<<"Enter the Element :";
    for(int i=0;i<size;i++){
        cin>>num;
        arr.push_back(num);
    }
    cout<<"maximum : "<<*max_element(arr.begin(), arr.end());
}