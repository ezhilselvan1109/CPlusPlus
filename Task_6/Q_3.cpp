//Program to throw the size and handle the exception when the user reads the size of an array as a negative value.

#include<iostream>

using namespace std;

class Exception{
    int Size;
    public:
    void input(){
        try{
            cout<<"Enter the size : ";
            cin>>Size;
            if(Size>0){
                output();
            }else{
                throw Size;
            }
        }catch(int Size){
            cerr<<"The size of an array as a negative value "<<endl;
            input();
        }
    }
    void output(){
        cout<<"Enter The Array Element : "<<endl;
        int arr[Size];
        for(int i=0;i<Size;i++){
            cin>>arr[i];
        }
        cout<<"The Array Element : "<<endl;
        for(int i=0;i<Size;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(){
    Exception obj;
    obj.input();
}
