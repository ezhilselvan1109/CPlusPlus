/*
Program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).

Input: Lazy

Output: Mbaz
*/

#include<iostream>

using namespace std;

class letter{
    string alphabet;
    public:
    void input(){
        cout<<"Enter the String :" ;
        cin>>alphabet;
    }
    void changeFun(){
        int character;
        for(int i=0;i<alphabet.length();i++){
                character=alphabet[i];
            if(character==90){
                alphabet[i]=char(65);
            }else if(character==122){
                alphabet[i]=char(97);
            }else if((character>=65 && character<=90) || (character>=97 && character<=122)){
                alphabet[i]=char (character+1);
            }
        }
    }
    void output(){
        cout<<"OUTPUT : "<<alphabet;
    }
};
int main(){
    letter obj;
    obj.input();
    obj.changeFun();
    obj.output();
}
