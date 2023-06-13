//Program to prepare a message when an exception occurs.

#include <iostream>
using namespace std;
class Exception
{
 string msg;
 public:
 Exception(const string& str){
     msg=str;
 }
 string getMessage() const
 {
 return msg;
 }
};

int main()
{
 int Size;
 try{
 cout<<"\nEnter the Array Size :";
 cin>>Size;
 if(Size<=0)
 throw(Exception("Error ! Array Size must be : >0"));
 else{
    int arr[Size];
     cout<<"\nEnter the Array Element :";
     for(int i=0;i<Size;i++){
        cin>>arr[i];
     }
     cout<<"\nArray Element :";
     for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
     }
 }
 }catch(Exception &e)
 {
 cout<<e.getMessage();
 }
 return 0;
}





























/*
#include <iostream>

using namespace std;

class Exception{
    int number;
    public:
    void input(){
        try{
        cout<<"Enter The Number : ";
        cin>>number;
        if(number<0)
            throw number;
        else
            cout<<"Number is : "<<number;
        }
        catch(int number){
            cout<<"Number is Zero "<<endl;
            input();
        }
    }
};
int main(){
    Exception obj;
    obj.input();
}
*/
