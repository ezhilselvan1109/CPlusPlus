/*
Write a C++ program to check whether the sequence of the numbers in a given array is a "Arithmetic" or "Geometric" sequence.
Return -1 if the sequence is not "Arithmetic" or "Geometric".  In mathematics, an arithmetic
progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
The difference here means the second minus the first.
For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with common difference of 2.
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each
term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3.
Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
Example:
Sample Input: int nums1[] = { 1, 3, 5, 7 }
Sample Output: Arithmetic sequence
*/

#include<iostream>

using namespace std;

int main(){
    int arraysize;
    cout<<"Enter the array size :";
    cin>>arraysize;
    int arr[arraysize],i;
    cout<<"Enter the array element :";
    for(i=0;i<arraysize;i++){
        cin>>arr[i];
    }
    int Arithmetic=arr[1]-arr[0];
    int Geometric=arr[1]/arr[0];
    int flag=0;
    for(i=0;i<arraysize-1;i++){
        int temp=arr[i+1]-arr[i];
        if(temp==Arithmetic){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==0){
        for(i=0;i<arraysize-1;i++){
            int temp=arr[i+1]/arr[i];
            if(temp==Geometric){
                flag=2;
            }else{
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"Arithmetic";
    }else if(flag==2){
        cout<<"Geometric";
    }else{
        cout<<"-1";
    }
}
