//To find the second largest number.

#include<iostream>

using namespace std;

int second_largest(int *,int );

int main(){
    int arraysize;
    cout<<"ENTER THE ARRAY SIZE :";
    cin>>arraysize;
    int arr[arraysize];
    cout<<"ENTER THE ARRAY ELEMENTS :";
    for(int i=0;i<arraysize;i++){
        cin>>arr[i];
    }
    int ans=second_largest(arr,arraysize);
    cout<<"\nSECOND LARGEST : "<<ans;
}
int second_largest(int *arr,int n){
    int maxmum=INT_MIN,second_largest=INT_MIN;
    for(int i=0;i<n;i++){
            if(maxmum<arr[i]){
                maxmum=arr[i];
            }
    }
    for(int i=0;i<n;i++){
            if(arr[i]==maxmum){
                continue;
            }
            if(second_largest<arr[i]){
                second_largest=arr[i];
            }
    }
    return second_largest;
}



/*

for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

*/
