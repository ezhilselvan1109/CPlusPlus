/*

Program to change the case of the character when the characters are same.

Input: 1. Happy

           2. Program

Output: 1. HaPPy

             2. PRogRam
*/

#include<iostream>

using namespace std;

class String{
    string str;
    public:
    void input(){
        cout<<"Enter the string : ";
        cin>>str;
    }
    void convert(){
        for(int i=0;i<str.length();i++){
            for(int j=i+1;j<str.length();j++){
                if(toupper(str[i])==toupper(str[j])){
                    str[i]=char(toupper(str[i]));
                    str[j]=char(toupper(str[j]));
                }
            }
        }
    }
    void output(){
        cout<<"Ans :"<<str<<endl;
    }
};
int main(){
    String obj;
    cout<<"Enter the no of String : ";
    int noOfStr,i=0;
    cin>>noOfStr;
    while(i++<noOfStr){
    obj.input();
    obj.convert();
    obj.output();
    }
}
