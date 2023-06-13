/*
Program to check whether the characters b and d are separated by exactly 3 places anywhere in a given string at least once.

Input: bold
Output: bold -> 1
*/

#include<iostream>

using namespace std;

class Characters{
    string word;
    public:
    void input(){
        cout<<"Enter the String :";
        cin>>word;
    }
    bool check(){
        for(int i=0;i<word.length();i++){
            if(word[i]=='b'){
                if(i+2<word.length() && word[i+3]=='d'){
                    return true;
                }
            }
            if(word[i]=='d'){
                if(i+2<word.length() && word[i+3]=='b'){
                    return true;
                }
            }
            return false;
        }
    }
    string get(){
        return word;
    }
};
int main(){
    Characters obj;
    obj.input();
    if(obj.check()){
        cout<<obj.get()<<" -> 1";
    }else{
        cout<<obj.get()<<" -> 0";
    }
}
