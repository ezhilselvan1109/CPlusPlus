/*
Create a contact management system using C++ programming. It must follow the below conditions,

Clear a screen and make an option on the screen like call, search contact,delete contact, update contact etc.

Add the validation for the mobile number, if it goes beyond 10 digits throw an exception.

Also create stack to store the history of calls for 5 contacts.

Once you choose to call,

Next it should ask for the mobile number and you have to enter it.

If the particular contact number exists you can able to make a call and print a message called "Speaking to the contact number"

Here use time structure of ctime(available in C) to note the calling time and the call end time, find the duration of the call and display.

After completing the call make a count respect to the contact number in the structure or an array.

Once you choose to edit the details,

Change the contact number or company name and store in a structure or an array.

Once you choose get the phone call history it should display the count details of the particular phone number.

Once you choose to delete a number it must delete the number and company details and prints a message on screen called "contact number deleted".
*/

#include<iostream>
#include<unistd.h>
#include <conio.h>
#include<fstream>
#include <iomanip>

using namespace std;
class CallInterface{
    protected:
    fstream file1,file2,file3;
    public:
    void callingFun(int ph_no){
        int flag=0;
        while(1){
            for(int i=1;i<2;i++){
            system("cls");
            cout<<"\t\t\t\t+91 "<<ph_no<<endl;
            cout<<"\n\n\t\t\t\tCalling ";
            for(int i=0;i<=2;i++){
                sleep(1);
                cout<<"."<<" ";
              }
            }
            cout<<endl<<endl<<endl<<"\t  \t  \t   ( 1 ) Back \t ( 2 ) Exit "<<endl;
            int choice;
            cin>>choice;
            switch(choice){
                case 1 :
                    flag=1;
                    break;
                case 2 :
                    cout<<"EXIT"<<endl;
                    exit(0);
            }
            if(flag){
                break;
            }
        }
    }
};
class Contact:public CallInterface{
    long long int phone_no;
    string name;
    public:
        void callFun(){
            cout<<"Enter The Phone No : ";
            cin>>phone_no;
            if(valitate(phone_no)){
                callingFun(phone_no);
            }else{
                callFun();
            }
        }
        void searchFun(){
            while(1){
                string Name;
                int flag=0;
                long long int P_no;
                cout<<"Enter the Name : ";
                cin>>Name;
                Contact obj;
                file1.open("Contant.bin",ios::in |ios::binary);
                while (file1.read((char*)&obj, sizeof(obj))){
                        if(obj.name.compare(Name)){
                            flag=1;
                            P_no=obj.phone_no;
                        }
                }
                file1.close();
                if(flag){
                    int choice;
                    cout<<"\t\t\t\tThe Number Is : "<<P_no<<endl;
                    cout<<"\t\t\t\t(1) - Call\t(2) - Back"<<endl<<"Enter The Choice : ";
                    cin>>choice;
                    if(choice==1)
                    callingFun(P_no);
                    if(choice==2)
                        flag=2;
                }else{
                    int choice;
                    cout<<"There is no contant "<<endl;
                    cout<<"\t\t\t\t(1) - Call\t(2) - Back"<<endl<<"Enter The Choice : ";
                    cin>>choice;
                    if(choice==1)
                        exit(0);
                    if(choice==2)
                        flag=2;
                }
                if(flag==2){
                    break;
                }
            }
        }
        void addFun(){
            Contact obj;
            file1.open("Contant.bin",ios::app |ios::binary);
            cout<<"Enter The Number : ";
            cin>>obj.phone_no;
            if(!valitate(phone_no)){
               addFun();
            }
            cout<<"Enter the Name : ";
            cin>>obj.name;
            file1.write((char*)&obj, sizeof(obj));
            file1.close();
        }
        void DeleteFun(){
            string Name;
            Contact obj;
            cout<<"Enter The Name : ";
            cin>>Name;
            file1.open("Contant.bin",ios::in |ios::binary);
            file2.open("TEMP.bin",ios::out |ios::binary);
            file3.open("TRUSHBIN.bin",ios::out |ios::binary);
            while (file1.read((char*)&obj, sizeof(obj))){
                if(!(Name==obj.name)){
                    //file3.write((char*)&obj, sizeof(obj));
                //}else{
                    file2.write((char*)&obj, sizeof(obj));
                }
            }
            file1.close();
            file2.close();
            file3.close();
            file1.open("Contant.bin",ios::out |ios::binary);
            file2.open("TEMP.bin",ios::in |ios::binary);
            while(file2.read((char*)&obj, sizeof(obj))){
                cout<<"\t\t\t\t"<<left<<setw(10)<<obj.name;
                cout<<obj.phone_no;
                cout<<endl;
                file1.write((char*)&obj, sizeof(obj));
            }
            file1.close();
            file2.close();
        }
        void  UpdateFun(){

        }
        void listFun(){
            Contact obj;
            file1.open("Contant.bin",ios::in |ios::binary);
            cout<<"\t\t\t\tNAME\t  NUMBER"<<endl;
            while (file1.read((char*)&obj, sizeof(obj))){
                cout<<"\t\t\t\t"<<left<<setw(10)<<obj.name;
                cout<<obj.phone_no;
                cout<<endl;
            }
            file1.close();
        }
        void deletedFun(){
            Contact obj;
            file1.open("TEMP.bin",ios::in |ios::binary);
            while(file1.read((char*)&obj, sizeof(obj))){
                cout<<"\t\t\t\t"<<left<<setw(10)<<obj.name;
                cout<<obj.phone_no;
                cout<<endl;
            }
            file1.close();
        }
        int valitate(long long int temp){
            long long int ph_no=temp;
            try{
            int num=0;
            while(ph_no>0){
                ++num;
                ph_no/=10;
            }
            if(num==10){
                return 1;
            }else{
                throw(num);
            }
            }catch(int no){
                cout<<"x Phone Number "<<endl;
                return 0;

            }
        }
};

class Option:public Contact{
    public:
    void choiceFun(){
        int cho;
        cout<<"\t\t\t\t   Contact Management System"<<endl;
        cout<<"\t\t\t\t   -------------------------"<<endl<<endl;
        while(1){
            cout<<"\t\t\t\t\t1 - CALL "<<endl;
            cout<<"\t\t\t\t\t2 - SEARCH CONTACT"<<endl;
            cout<<"\t\t\t\t\t3 - ADD CONTACT"<<endl;
            cout<<"\t\t\t\t\t4 - DELETE CONTACT"<<endl;
            cout<<"\t\t\t\t\t5 - UPDATE CONTACT"<<endl;
            cout<<"\t\t\t\t\t6 - CONTANT LIST"<<endl;
            cout<<"\t\t\t\t\t7 - DELETED LIST"<<endl;
            cout<<"\t\t\t\t\t0 - EXIT"<<endl;
            cout<<"Enter the Choice : ";
            cin>>cho;
            switch(cho){
            case 1:
                callFun();
                break;
            case 2:
                searchFun();
                break;
            case 3:
                addFun();
                break;
            case 4:
                DeleteFun();
                break;
            case 5:
                UpdateFun();
                break;
            case 6:
                listFun();
                break;
            case 7:
                deletedFun();
                break;
            case 0:
                cout<<"Exit"<<endl;
                exit(0);
                break;
            }
        }
    }
};
int main(){
    Option obj;
    obj.choiceFun();
}
