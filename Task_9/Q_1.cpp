//Sort the set of integers read using vector.

#include <bits/stdc++.h>

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
    sort(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
}
