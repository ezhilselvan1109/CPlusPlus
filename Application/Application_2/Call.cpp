#include<iostream>
#include<unistd.h>

using namespace std;

int main(){

    while(true){
        system("cls");
        cout<<"Calling ";
        for(int i=0;i<=2;i++){
            sleep(1);
            cout<<"."<<" ";
        }
    }
}
