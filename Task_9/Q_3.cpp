//Find the summation of all vector elements.

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
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout<<"Summation : "<<sum;
}