/*Write a function template that takes a single type parameter (T) and accepts four function arguments: an array of T, a start index, a stop index
(inclusive), and an optional initial value. The function returns the sum of all the array elements in the specified range and the initial value.
Use the default constructor of T for the default initial value.
*/

#include<iostream>

using namespace std;

template <class T>
T fun(T *arr,T start,T stop,T initialV){
    T sum=0;
    cout<<"Enter the "<<stop<<" Array Element : ";
    for(int i=0;i<stop;i++){
            cin>>arr[i];
    }
    for(int i=start;i<=stop;i++){
            sum+=arr[i];
    }
    return sum+initialV;
}

class Class{
    int Default;
    public:
    Class(){
        Default=5;
    }
    int getfun(){
        return Default;
    }
};
int main(){
    int start,stop;
    cout<<"Enter the Start Value : ";
    cin>>start;
    cout<<"Enter the stop Value : ";
    cin>>stop;
    int arr[stop];
    Class obj;
    int sum=fun(arr,start,stop,obj.getfun());
    cout<<"sum : "<<sum;
}
