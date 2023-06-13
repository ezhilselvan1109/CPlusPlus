/*Create an application for reading books using files. It has two interfaces 1. User 2. Admin. Take 3 books as a separate text file.
If the user want to read the books, then he/she needs to register and the registration needs their name,userId, emailId , mob no.
Once the registration is completed, you need to send the access request to the admin and he may approve by giving a password,
then the user can enter the password and read the book or he may reject his/her approval
*/

#include<iostream>
#include<fstream>
#include <iomanip>

using namespace std;

class Book{
    public:
        void List(){
            while(1){
               // system("cls");
                int choice,flag=0;
                cout<<"\t\t\t\t\tBooks"<<endl<<endl;
                cout<<"\t\t\t\t1 - The God father"<<endl;
                cout<<"\t\t\t\t2 - Little Prince"<<endl;
                cout<<"\t\t\t\t3 - Harry Potter"<<endl<<endl;
                cout<<"\t\t\t(4) - BACK\t\t(0) - EXIT"<<endl;
                cout<<"Enter The Choice : ";
                cin>>choice;
                switch(choice){
                    case 1:
                        read("TheGodfather");
                        break;
                    case 2:
                        read("LittlePrince");
                        break;
                    case 3:
                        read("HarryPotter");
                        break;
                    case 4:
                        flag=1;
                        break;
                    case 0:
                        cout<<endl<<endl<<"\t\t\t\t\tExit"<<endl;
                        exit(0);
                }
                if(flag){
                break;
            }
            }
        }
        void read(string name){
            //system("cls");
            cout<<"\t\t\t\t\tStOrY"<<endl<<endl;
            fstream file;
            file.open("D:\\C++\\Application\\Application_1\\Story\\"+name+".txt",ios::in);\
            char ch;
            while(file>>noskipws>>ch){
                cout<<ch;
            }
            cout<<endl<<endl<<endl;
            file.close();
            cout<<"\t\t\t(1) - BACK \t(2) - EXIT"<<endl;
            int choice;
            cin>>choice;
            if(choice==2){
                exit(0);
            }
        }
};
class userDetails{
    string name, userId, emailId ;
    int password;
    long long int mob_no;
    public:
    void input(){
        cout<<"Enter The Name : ";
        cin>>name;
        cout<<"Enter The emailId : ";
        cin>>emailId;
        cout<<"Enter The mob no : ";
        cin>>mob_no;
        cout<<"Enter The userId : ";
        cin>>userId;
        password=0;
    }
    void display(){
        cout<<left<<setw(16);
        cout<<name;
        cout<<left<<setw(16);
        cout<<emailId;
        cout<<left<<setw(16);
        cout<<mob_no;
        cout<<left<<setw(16);
        cout<<userId<<endl;
    }
    string getUserid(){
    	return userId;
	}
	void setpassword(int password){
	    this->password=password;
	}
	int getpassword(){
    	return password;
	}
};
userDetails obj;
class User:public Book{
    fstream file1,file2;
    public:
    void DashBoard(){
        while(1){
            int choice,flag=0;
            system("cls");
            cout<<"\t\t\t\tUser Dashboard"<<endl<<endl;
            cout<<"\t\t\t\t1 - LOGIN"<<endl;
            cout<<"\t\t\t\t2 - REGISTER"<<endl;
            cout<<"\t\t\t\t3 - Check Approve"<<endl;
            cout<<"\t\t\t\t4 - BACK"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            cout<<endl;
            switch(choice){
                case 1:
                    login();
                    break;
                case 2:
                    Register();
                    break;
                case 3:
                    CheckApprove();
                    break;
                case 4:
                    flag=1;
                    break;
            }
            if(flag){
                break;
            }

        }
    }
    void login(){
    	string USerNAme;
    	int PAssWord;
    	cout<<"Enter The UserName: ";
    	cin>>USerNAme;
    	cout<<"Enter The PassWord: ";
    	cin>>PAssWord;
    	file1.open("Login.txt",ios::in);
        file1.seekg(0, ios::beg);
        while(file1.read((char*)&obj, sizeof(obj))){
            if(obj.getpassword()==PAssWord && obj.getUserid()==USerNAme){
            	cout<<"Login Successful!"<<endl;
            	List();
			}
        }
        file1.close();

    }
    void Register(){
        file1.open("Register.txt",ios::out| ios::app);
        obj.input();
        file1.write((char *)&obj,sizeof(obj));
        file1.close();
    }

    void CheckApprove(){

        file1.open("Login.txt",ios::in);
        string UserName;
        cout<<"Enter The UserName: ";
        cin>>UserName;
        file1.seekg(0, ios::beg);
        while(file1.read((char*)&obj, sizeof(obj))){
                 if(obj.getUserid()==UserName){
                    while(1){
                    cout<<"\t\t\t\tPassWord Is: "<<obj.getpassword()<<endl<<endl;
                    cout<<"\t\t\t (1) - Back\t(2) - Exit"<<endl;
                    cout<<"Enter The choice: ";
                    int choice;
                    cin>>choice;
                    if(choice==1)
                        break;
                    if(choice==2){
                        cout<<"\t\t\t\t\n\n\nExit"<<endl;
                        exit(0);
                    }
                    }
                }

        }
        file1.close();
    }


};
class Admin{
    string name, userId, emailId ;
    long long int mob_no;
    fstream file1,file2,file3;
    public:
    void AdminPage(){
        int choice,flag=0;
    	cout<<"\t\t\t\t1 - Approve"<<endl;
    	cout<<"\t\t\t\t2 - Rejected List"<<endl;
    	cout<<"\t\t\t\t3 - Approve List"<<endl;
    	cout<<"\t\t\t\t4 - Register List"<<endl;
    	cout<<"\t\t\t\t5 - Back"<<endl;
    	cout<<"\t\t\t\t6 - Exit"<<endl;
    	cout<<"Enter The Choice: ";
    	cin>>choice;
    	switch(choice){
    		case 1:
    			Approve();
    			break;
    		case 2:
    			RejectedList();
    			break;
    		case 3:
    			ApproveList();
    			break;
    		case 4:
    			RegisterList();
    			break;
    		case 5:
    			flag=1;
    			break;
    		case 6:
    			cout<<"Exit"<<endl;
    			exit(0);
    			break;
		}
    }

    void Approve(){
    	file1.open("Register.txt",ios::in);
    	file2.open("Login.txt",ios::out|ios::app);
    	file3.open("Reject.txt",ios::out|ios::app);
    	file1.seekg(0, ios::beg);
    	cout<<"Name\t\tEmailId\t\tMoblie No\tUserId"<<endl;
        while(file1.read((char*)&obj, sizeof(obj))){
        	obj.display();
        	int choice;
        	cout<<"\t\t\t\t1 - Approve"<<endl;
        	cout<<"\t\t\t\t2 - Reject"<<endl;
        	cout<<"Enter The Choice: ";
        	cin>>choice;
        	if(choice==1){
                obj.setpassword(1000 + (rand() % 9000));
        		file2.write((char*)&obj, sizeof(obj));
			}else{
				file3.write((char*)&obj, sizeof(obj));
			}
		}
    	file1.close();
        file2.close();
        file3.close();


        file1.open("Register.txt",ios::out);
        file2.open("Reject.txt",ios::in);
        file2.seekg(0, ios::beg);
        while(file2.read((char*)&obj, sizeof(obj))){
        	file1.write((char*)&obj, sizeof(obj));
		}
		file1.close();
        file2.close();
	}


	void RejectedList(){
		file1.open("Reject.txt",ios::in);
        file1.seekg(0, ios::beg);
        cout<<"Name\t\tEmailId\t\tMoblie No\tUserId"<<endl;
        while(file1.read((char*)&obj, sizeof(obj))){
            obj.display();
            }
        file1.close();
	}


	void ApproveList(){
		file1.open("Login.txt",ios::in);
        file1.seekg(0, ios::beg);
        cout<<"Name\t\tEmailId\t\tMoblie No\tUserId"<<endl;
        while(file1.read((char*)&obj, sizeof(obj))){
            obj.display();
            }
        file1.close();
	}


    void RegisterList(){
		file1.open("Register.txt",ios::in);
        file1.seekg(0, ios::beg);
        cout<<"Name\t\tEmailId\t\tMoblie No\tUserId"<<endl;
        while(file1.read((char*)&obj, sizeof(obj))){
            obj.display();
            }
        file1.close();
    }
};

int main(){
    int choice;
    while(1){
        cout<<"\t\t\t\tInterfaces"<<endl<<endl;
        cout<<"\t\t\t\t1 - USER"<<endl;
        cout<<"\t\t\t\t2 - ADMIN"<<endl;
        cout<<"\t\t\t\t0 - EXIT"<<endl;
        cout<<"Enter The Choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:{
                User Userobj;
                Userobj.DashBoard();
                break;
            }
            case 2:{
                Admin Adminobj;
                Adminobj.AdminPage();
                break;
            }
            case 0:{
                cout<<"Exit"<<endl;
                exit(0);
            }
        }
    }
}
