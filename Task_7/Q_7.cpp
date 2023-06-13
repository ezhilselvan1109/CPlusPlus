//Program to sum up all the numbers or characters (stored as string) using a function template.


#include<iostream>

using namespace std;

template <typename S>

void numberscal(S arr,int len){
    int nsum=0,csum=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=48 && arr[i]<=57)
            nsum+=arr[i]-48;
        if(arr[i]>=97 && arr[i]<=122)
            csum+=arr[i]-96;
        if(arr[i]>=65 && arr[i]<=90)
            csum+=arr[i]-64;
    }
    cout<<"numbers sum : "<<nsum<<endl;
    cout<<"characters sum : "<<csum<<endl;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int len=str.length();
    numberscal(str,len);
}
