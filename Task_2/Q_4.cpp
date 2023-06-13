//To search an element from an array by linear search method


#include <iostream>

using namespace std;

bool linear_search(int* ,int,int);

int main(){
    int n;
    cout<<"ENTER THE ARRAY SIZE :";
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENT :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int found;
    cout<<"ENTER THE NUMBER FOR FOUND :";
    cin>>found;
    int flag=linear_search(arr,n,found);
    if(flag){
        cout<<"FOUND";
    }else{
        cout<<"NOT FOUND";
    }
}

bool linear_search(int *arr,int n,int found){
    for(int i=0;i<n;i++){
        if(arr[i]==found){
            return true;
        }
    }
    return false;
}
