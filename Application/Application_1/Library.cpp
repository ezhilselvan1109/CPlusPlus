//Create a simple library management application using C++ programming it should contain Inheritance, Encapsulation and Abstraction. use vectors and templates if you need.
#include<iostream>

#include"Fiction.cpp"

using namespace std;
class Libration;

class Fiction{
    int choice,flag=0;
    public:
    void fdetails(){
        cout<<"\t\t\t\tFICTION"<<endl;
        cout<<"\t\t\t\t-------"<<endl;
        cout<<"01 - Adventure stories"<<endl;
        cout<<"02 - Classics"<<endl;
        cout<<"03 - Crime"<<endl;
        cout<<"04 - Fairy tales, fables, and folk tales"<<endl;
        cout<<"05 - Fantasy"<<endl;
        cout<<"06 - Historical fiction"<<endl;
        cout<<"07 - Horror"<<endl;
        cout<<"08 - Humour and satire"<<endl;
        cout<<"09 - Literary fiction"<<endl;
        cout<<"10 - Mystery"<<endl;
        cout<<"11 - Poetry"<<endl;
        cout<<"12 - Plays"<<endl;
        cout<<"13 - Romance"<<endl;
        cout<<"14 - Science fiction"<<endl;
        cout<<"15 - Short stories"<<endl;
        cout<<"16 - Thrillers"<<endl;
        cout<<"17 - War"<<endl;
        cout<<"18 - Women\'s fiction"<<endl;
        cout<<"19 - Young adult"<<endl;
        choiceFun();
    }
    void choiceFun(){
        flag=0;
        while(1){
            cout<<"Enter the Choice : ";
            cin>>choice;
            switch(choice){
                case 1:{
                    Adventurestories obj;
                    obj.choicefun();
                    break;
                }
                case 2:{
                    Classics obj;
                    obj.choicefun();
                    break;
                }
                case 3:{
                    Crime obj;
                    obj.choicefun();
                    break;
                }
                case 4:{
                    Fairy obj;
                    obj.choicefun();
                    break;
                }

                case 5:{
                    Fantasy obj;
                    obj.choicefun();
                    break;
                }

                case 6:{
                    Historicalfiction obj;
                    obj.choicefun();
                    break;
                }
                case 7:{
                    Horror obj;
                    obj.choicefun();
                    break;
                }
                case 8:{
                    Humourandsatire obj;
                    obj.choicefun();
                    break;
                }
                case 9:{
                    Literaryfiction obj;
                    obj.choicefun();
                    break;
                }
                case 10:{
                    Mystery obj;
                    obj.choicefun();
                    break;
                }
                case 11:{
                    Poetry obj;
                    obj.choicefun();
                    break;
                }
                case 12:{
                    Plays obj;
                    obj.choicefun();
                    break;
                }
                case 13:{
                    Romance obj;
                    obj.choicefun();
                    break;
                }
                case 14:{
                    Sciencefiction obj;
                    obj.choicefun();
                    break;
                }
                case 15:{
                    Shortstories obj;
                    obj.choicefun();
                    break;
                }
                case 16:{
                    Thrillers obj;
                    obj.choicefun();
                    break;
                }
                case 17:{
                    War obj;
                    obj.choicefun();
                    break;
                }
                case 18:{
                    Womensfiction obj;
                    obj.choicefun();
                    break;
                }
                case 19:{
                    Youngadult obj;
                    obj.choicefun();
                    break;
                }
                case 0:{
                    flag=1;
                }
            }
            if(flag=1){
                break;
            }
        }
    }
};

class NonFiction{
    int choice,flag=0;
    public:
    void nfdetails(){
        cout<<"\t\t\t\tNON-FICTION"<<endl;
        cout<<"\t\t\t\t-----------"<<endl;
        cout<<"01 - Autobiography and memoir"<<endl;
        cout<<"02 - Biography"<<endl;
        cout<<"03 - Essays"<<endl;
        cout<<"04 - Non-fiction novel"<<endl;
        cout<<"05 - Self-help"<<endl;
        choiceFun();
    }

    void choiceFun(){
        flag=0;
        while(1){
            cout<<"Enter the Choice : ";
            cin>>choice;
            switch(choice){
                case 1:{
                    Aandmemoir obj;
                    obj.choicefun();
                    break;
                }
                case 2:{
                    Biography obj;
                    obj.choicefun();
                    break;
                }
                case 3:{
                    Essays obj;
                    obj.choicefun();
                    break;
                }
                case 4:{
                    Nfnovel obj;
                    obj.choicefun();
                    break;
                }

                case 5:{
                    Selfhelp obj;
                    obj.choicefun();
                    break;
                }
                case 0:{
                    flag=1;
                }
            }
            if(flag=1){
                break;
            }
        }
    }
};

class Main:public NonFiction,public Fiction{
    int cho;
    public:
    void details(){
        int flag=0;
        while(1){
        cout<<"\t\t\t\t1 - Fiction\n\t\t\t\t2 - Non-Fiction\n\t\t\t\t3 - Back\nEnter The Choice : ";
        cin>>cho;
        switch(cho){
            case 1:
            fdetails();
            break;
            case 2:
            nfdetails();
            break;
            case 3:
            flag=1;
            break;
        }
        if(flag==1){
            break;
        }
        }
    }
};

class Libration{
    fstream file1,file2,file3;
    public:
    void MainFunction(){
        int flag=0;
        while(1){
            cout<<"\t\t\t\t1 - User Details"<<endl;
            cout<<"\t\t\t\t2 - Read List"<<endl;
            cout<<"\t\t\t\t3 - Issued List"<<endl;
            cout<<"\t\t\t\t4 - Return List"<<endl;
            cout<<"\t\t\t\t5 - Back"<<endl;
            cout<<"Enter The choice: ";
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                    Userdetails();
                    break;
                case 2:
                    ReadList();
                    break;
                case 3:
                    IssuedList();
                    break;
                case 4:
                    ReturnList();
                    break;
                case 5:
                    flag=1;
                    break;
            }
            if(flag){
                break;
            }
        }
    }

    void Userdetails(){
        file1.open("Login.txt",ios::in);
        cout<<"Name\t\tPhone No\tUser Name"<<endl;
        while(file1.read((char*)&UserDetailsobj, sizeof(UserDetailsobj))){
            UserDetailsobj.Display();
        }
        file1.close();
    }

    void IssuedList(){
        file1.open("IssuedList.txt",ios::in);
        cout<<"User Name\tBook"<<endl;
        while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
            FileDetailsobj.DisplayFile();
            FileDetailsobj.DisplayIssueData();
            cout<<endl;
        }
        file1.close();
    }
    void IssueBookList(string UserName){
        cout<<"UserName : "<<UserName<<endl;
        file1.open("IssuedList.txt",ios::in);
        cout<<"Book"<<endl;
        cout<<"----"<<endl;
        while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
                if(FileDetailsobj.getuserName()==UserName){
                    FileDetailsobj.DisplayBooks();
                }
        }
        file1.close();
        cout<<"Enter The Book Name: ";
        string BookName;
        cin>>BookName;
        int rdate,rmonth,ryear;
        char ch;
        cout<<"Enter The Return Data(DD/MM/YY): ";
        cin>>rdate>>ch>>rmonth>>ch>>ryear;
        cout<<rdate<<":"<<rmonth<<":"<<ryear<<endl;
        FileDetailsobj.SetReturnData(rdate,rmonth,ryear);
        cout<<"Due Amount: ";
        FileDetailsobj.DisplayDue();
        cout<<endl;
        file1.open("IssuedList.txt",ios::in);
        file2.open("ReturnList.txt",ios::out | ios::app);
        file3.open("TempIssuedList.txt",ios::out | ios::app);
        while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
                if(FileDetailsobj.getbookName()==BookName){
                    FileDetailsobj.SetReturnData(rdate,rmonth,ryear);
                    file2.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
                }else{
                    file3.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
                }
        }
        file1.close();
        file2.close();
        file3.close();
        file1.open("IssuedList.txt",ios::out | ios::trunc);
        file2.open("TempIssuedList.txt",ios::in);
        while(file2.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
            file1.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
        }
        file1.close();
        file2.close();
    }
    void ReturnList(){
        file1.open("ReturnList.txt",ios::in);
        cout<<"User Name\tBook"<<endl;
        while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
            FileDetailsobj.DisplayFile();
            FileDetailsobj.DisplayIssueData();
            FileDetailsobj.DisplayReturnData();
            FileDetailsobj.DisplayDue();
        }
        file1.close();
    }
    void ReadList(){
        cout<<"User Name\tBook"<<endl;
        file1.open("ReadList.txt",ios::in);
        while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
        FileDetailsobj.Display();
        }
        file1.close();
    }
};
Libration Librationobj;

class User:public Main{
    fstream file1,file2;
    public:
    void input(){
        while(1){
            int flag=0;
            cout<<"\t\t\t\t1 - Login\n\t\t\t\t2 - Register\n\t\t\t\t3 - Back\n\t\t\t\t4 - Exit\nEnter The Choice : ";
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                    login();
                    break;
                case 2:
                    Register();
                    break;
                case 3:
                    flag=1;
                    break;
                case 4:
                    cout<<"Exit"<<endl;
                    exit(0);
                    break;
            }
            if(flag){
                break;
            }
        }
    }

    void login(){
        int flag=0;
        string userName,passWord;
        file1.open("Login.txt",ios::in);
        cout<<"Enter The User Name : ";
        cin>>userName;
        cout<<"Enter The Password : ";
        cin>>passWord;
        while(file1.read((char*)&UserDetailsobj, sizeof(UserDetailsobj))){
            if(UserDetailsobj.getUserName()==userName && UserDetailsobj.getPassword()==passWord){
                cout<<"\t\t\t\tLogin Succuess Fully !"<<endl<<endl<<endl;
                FileDetailsobj.setUserName(userName);
                LoginEnter(userName);
                flag=1;

            }
        }
        file1.seekp(0,ios::beg);
        file1.close();
        if(!flag){
            cout<<"Please Enter correct USerName and Password "<<endl;
            login();
        }
    }

    void LoginEnter(string UserName){
        cout<<"\t\t\t\t1 - Return Book"<<endl;
        cout<<"\t\t\t\t2 - Read And Issue Books"<<endl;
        cout<<"Enter The Choice: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                ReturnBook(UserName);
                break;
            case 2:
                details();
                break;
        }
    }

    void ReturnBook(string UserName){
        Librationobj.IssueBookList(UserName);
    }
    void Register(){
        file1.open("Login.txt",ios::out | ios::app);
        UserDetailsobj.input();
        file1.write((char*)&UserDetailsobj, sizeof(UserDetailsobj));
        file1.close();
    }
};
User Userobj;


int main(){
    while(1){
        cout<<"\t\t\t\t1 - USER\n\t\t\t\t2 - LIBRARION\n\t\t\t\t3 - EXIT\nEnter The Choice : ";
        int choice;
        cin>>choice;
        switch(choice){
        case 1:{
            Userobj.input();
            break;
        }
        case 2:{
            Librationobj.MainFunction();
            break;
        }
        case 3:{
            cout<<"Exit";
            exit(0);
        }
        }
    }
}
