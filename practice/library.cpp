#include<iostream>
#include<fstream>

using namespace std;
class UserDetails{
    int phoneno;
    char userName[10],passWord[10],name[10],username[10],password[10];
    public:
    void read(){
        cout<<"Enter The Name : ";
        cin>>name;
        cout<<"Enter The Phone No : ";
        cin>>phoneno;
        cout<<"Enter The User Name : ";
        cin>>username;
        cout<<"Enter The Password : ";
        cin>>password;
    }
    void display(){
        cout<<"Name : ";
        cout<<name;
        cout<<"Phone No : ";
        cout<<phoneno;
        cout<<"User Name : ";
        cout<<username;
    }
};
class User{

    public:

    void input(){
        while(1){
            cout<<"\t\t\t\t1 - Login\n\t\t\t\t2 - Register\n\t\t\t\t3 - Exit\nEnter The Choice : ";
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                    login();
                    break;
                case 2:
                    Register();
                    break;
                case 0:
                    exit(0);
                    break;
            }
        }
    }

    void login(){
        UserDetails obj1;
        ifstream loginfile("Login.txt",ios::in);
        while(loginfile.read((char *)&obj1,sizeof(obj1))){
            obj1.display();
        }
        loginfile.close();
        cout<<endl;
    }

    void Register(){
        ofstream file("Login.txt",ios::out|ios::app);
        UserDetails user_obj;
        user_obj.read();
        file.write((char *)&user_obj,sizeof(user_obj));
        file.close();
    }
};

int main(){
    User obj;
    obj.input();
}
