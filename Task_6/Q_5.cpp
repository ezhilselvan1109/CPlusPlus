//Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.

#include<iostream>

using namespace std;

class Exception{
    string email;
    public:
    void input()throw(string){
        try{
            cout<<"Enter the Email : ";
            cin>>email;
            if(check()){
                cout<<"Correct Form"<<endl;
            }else{
                throw email;
            }
        }catch(string email){
            cout<<"It does not contain @ symbol "<<endl;
            input();
        }
    }
    int check(){
        for(int i=0;i<email.length();i++){
            if(email[i]=='@'){
                return 1;
            }
        }
        return 0;
    }
};
int main(){
        Exception obj;
        obj.input();
}
