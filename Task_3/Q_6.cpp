/*

All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed,
maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account
to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it.

Write a program to implement bank functionality in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few
derived classes (SBI,ICICI, PNB etc). Assume and implement required member variables and functions in each class.

Class Customer
{
//Personal Details ...
// Few functions ...
}
Class Account
{
// Account Detail ...
// Few functions ...
}
Class RBI
{
Customer c; //hasA relationship
Account a; //hasA relationship
..
Public double GetInterestRate() { }
Public double GetWithdrawalLimit() { }
}
Class SBI: public RBI
{
//Use RBI functionality or define own functionality.
}
Class ICICI: public RBI
{
//Use RBI functionality or define own functionality.
}


*/





#include<iostream>

using namespace std;

class Customer
{
    string name,address;
    long long int age,phone;
    public:
    void getdetails(){
        cin.ignore();
        cout<<"ENTER THE NAME : ";
        getline(cin,name);
        cout<<"ENTER THE AGE : ";
        cin>>age;
        cout<<"ENTER THE PHINE NO : ";
        cin>>phone;
        cin.ignore();
        cout<<"ENTER THE ADDRESS : ";
        getline(cin,address);
    }
    display(){
        cout<<"NAME : ";
        cout<<name<<endl;
        cout<<"AGE : ";
        cout<<age<<endl;
        cout<<"PHINE NO : ";
        cout<<phone<<endl;
        cout<<"ADDRESS : ";
        cout<<address<<endl;
    }
};


class Account
{
    string accType,branchName;
    public :
    void getdetails(){
        cout<<"ENTER THE ACCOUNT TYPE : ";
        cin>>accType;
        cout<<"ENTER THE BRANCHNAME : ";
        cin>>branchName;

    }
    display(){
        cout<<"ENTER THE ACCOUNT TYPE : ";
        cout<<accType<<endl;
        cout<<"ENTER THE BRANCHNAME : ";
        cout<<branchName<<endl;
    }
};


class RBI
{
Customer c;
Account a;
int minimum_interest_rate=4, minimum_balance_allowed=1000, maximum_withdrawal_limit=2000;
public:
    double GetInterestRate() {
        return minimum_interest_rate;
    }
    double GetWithdrawalLimit() {
        return maximum_withdrawal_limit;
    }
    get1(){
        c.getdetails();
        a.getdetails();
        c.display();
        a.display();
    }
};
class SBI: public RBI
{
    int minimum_interest_rate=5, minimum_balance_allowed=1000, maximum_withdrawal_limit=2000;
    public :
    void get(){
        get1();
    }
    double GetInterestRate(){
        return minimum_interest_rate;
    }
    double GetWithdrawalLimit() {
        return maximum_withdrawal_limit;
    }
    double Getminimum_balance() {
        return minimum_balance_allowed;
    }

};
class ICICI: public RBI
{
    int minimum_interest_rate=5, minimum_balance_allowed=1000, maximum_withdrawal_limit=2000;
    public :
    void get(){
        get1();
    }
    double GetInterestRate(){
        return minimum_interest_rate;
    }
    double GetWithdrawalLimit() {
        return maximum_withdrawal_limit;
    }
    double Getminimum_balance() {
        return minimum_balance_allowed;
    }

};

int main(){
    cout<<"1 - SBI\n2 - ICICI"<<endl<<"ENTER THE NUMBER : ";
    int choice;
    cin>>choice;
    SBI SBIobj;
    ICICI ICICIobj;
    switch(choice){
        case 1:
            SBIobj.get();
            int getchoice;
            while(1){
            cout<<"\n1 - GetInterestRate\n2 - GetWithdrawalLimit\n3 - minimum balance\n4 - exit"<<endl<<"ENTER THE NUMBER : ";

            cin>>getchoice;
            switch(getchoice){
                case 1:
                    cout<<"INTERESTRATE : "<<SBIobj.GetInterestRate();
                break;
                case 2:
                    cout<<"WITHDRAWALLIMIT : "<<SBIobj.GetWithdrawalLimit();
                break;
                case 3:
                    cout<<"MINIMUM BALANCE : "<<SBIobj.Getminimum_balance();
                break;
                case 4:
                    exit(0);
            }
            }
        break;
        case 2:
            ICICIobj.get();
            while(1){
            cout<<"\n1 - GetInterestRate\n2 - GetWithdrawalLimit\n3 - minimum balance\n4 - exit"<<endl<<"ENTER THE NUMBER : ";
            cin>>getchoice;
            switch(getchoice){
                case 1:
                    cout<<"INTERESTRATE : "<<ICICIobj.GetInterestRate();
                break;
                case 2:
                    cout<<"WITHDRAWALLIMIT : "<<ICICIobj.GetWithdrawalLimit();
                break;
                case 3:
                    cout<<"MINIMUM BALANCE : "<<ICICIobj.Getminimum_balance();
                break;
                case 4:
                    exit(0);
            }
            }
        break;
    }


}
