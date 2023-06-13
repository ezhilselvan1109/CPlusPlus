//Write an operator function to find the difference of two date components.

#include<iostream>

using namespace std;

class Date{
    int date,month,year;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    public:
    void input(){
        char ch;
        cout<<"ENTER THE DATE(DD/MM/YY) :";
        cin>>date>>ch>>month>>ch>>year;
    }
    void operator-(Date obj2){

        int d1=year*365+date;
        for(int i=0;i<month;i++){
            d1+=m[i];
        }
        d1+=LeapYears(year);
        cout<<d1<<endl;

        int d2=obj2.year*365+obj2.date;
        for(int i=0;i<obj2.month;i++){
            d2+=m[i];
        }
        d2+=LeapYears(obj2.year);
        cout<<d2<<endl;
        cout<<"ANS : ";
        if(d1>d2){
            cout<<d1-d2;
        }else{
            cout<<d2-d1;
        }
    }

    int LeapYears(int year){
        if(year%4==0&& year%100!=0 && year%400==0){
            return 1;
        }
        return 0;
    }
};
int main(){
    Date obj1,obj2;
    obj1.input();
    obj2.input();
    obj1-obj2;
}
