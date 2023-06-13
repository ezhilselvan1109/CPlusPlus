//Program to do the read and display Array items using a class template.

#include <iostream>

using namespace std;

template <class T>

class Array{
    public:
        void read(T *arr,int Size){
            cout<<"Enter the Array Element : ";
            for(int i=0;i<Size;i++){
                cin>>arr[i];
            }
        }
        void display(T *arr,int Size){
            cout<<"The Array Element : ";
            for(int i=0;i<Size;i++){
                cout<<arr[i]<<" ";
            }
        }
};
int main(){
    while(1){
    int num;
    cout<<"1 - INT \n2 - CHAR \n3 - STRING \n0 - EXIT\nENTER THE CHOICE :";
    cin>>num;
    int Size;
    if(num==1){
            cout<<"Enter the Array Size : ";
            cin>>Size;
            Array<int> obj1;
            int arr[Size];
            obj1.read(arr,Size);
            obj1.display(arr,Size);
    }else if(num==2){
            cout<<"Enter the Array Size : ";
            cin>>Size;
            Array<char> obj2;
            char arr[Size];
            obj2.read(arr,Size);
            obj2.display(arr,Size);
    }else if(num==3){
            cout<<"Enter the Array Size : ";
            cin>>Size;
            Array<string> obj3;
            string arr[Size];
            obj3.read(arr,Size);
            obj3.display(arr,Size);
    }else if(num==0){
            cout<<"Exit";
            exit(0);
    }
    cout<<endl;
    }
}
