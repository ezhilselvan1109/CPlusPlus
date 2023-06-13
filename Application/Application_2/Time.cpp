#include<iostream>
#include<unistd.h>
#include <conio.h>
using namespace std;
int main(){
    int hr=0,min=0,sec=0;
    char ch;
    while(1){
            if(kbhit()){
                break;
            }
        system("cls");
            if(min<10)
                cout<<'0'<<hr<<" : ";
            else
                cout<<hr<<" : ";
            if(hr<10)
                cout<<'0'<<hr<<" : ";
            else
                cout<<min<<" : ";
            if(sec<10)
                cout<<'0'<<sec<<endl;
            else
                cout<<sec<<endl;
        sec++;
        if(sec==60){
            min++;
            sec=00;
            if(min==60){
                hr++;
                min=00;
                if(hr==12){
                    hr=00;
                }
            }
        }
        sleep(1);
    }
    system("cls");
    cout<<hr<<":"<<min<<":"<<sec;
    getch();
    return 0;
}




/*

        int hr=0,min=0,sec=0;
        char ch;
        while(1){
                if(kbhit()){
                    break;
                }
            system("cls");
            cout<<"\t\t\t\t"<<ph_no<<endl<<endl<<endl;
            cout<<"\t\t\t\t";
                if(min<10)
                    cout<<'0'<<hr<<" : ";
                else
                    cout<<hr<<" : ";
                if(hr<10)
                    cout<<'0'<<hr<<" : ";
                else
                    cout<<min<<" : ";
                if(sec<10)
                    cout<<'0'<<sec<<endl;
                else
                    cout<<sec<<endl;
            sec++;
            if(sec==60){
                min++;
                sec=00;
                if(min==60){
                    hr++;
                    min=00;
                    if(hr==12){
                        hr=00;
                    }
                }
            }
            sleep(1);
        }
*/
