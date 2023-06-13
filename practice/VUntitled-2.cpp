#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> groceryList;
    string grocery;
    cout<<"Enter the grocery List : ";
    while(cin>>grocery){
        groceryList.push_back(grocery);
    }
    cout<<"Output : ";
    for(auto i:groceryList)
        cout<<i;
}