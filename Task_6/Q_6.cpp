//Write a C++ program to accept user name and password and throw an exception if the password has less than 8 characters or does not contain a digit.

#include<iostream>

using namespace std;

class Exception{
    string user_Name,password;
    public:
    void input(){
        cout<<"Enter the User Name : ";
        cin>>user_Name;
        cout<<"Enter the password : ";
        passWord();
    }
    void passWord()throw(string){
        try{
            cin>>password;
            if(check()){
                cout<<"Login Successfully!";
            }else{
                throw password;
            }
        }catch(string password){
            cout<<"InCorrect Password \nPlease Reenter the Password : ";
            passWord();
        }
    }
    int check(){
        if(password.length()<8){
            return 0;
        }
        for(int i=0;i<password.length();i++){
            if(password[i]>=48 && password[i]<=57){
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
