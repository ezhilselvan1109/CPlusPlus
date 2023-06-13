//Read log file from our system and display it.

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream File;
    File.open("Logfile.log",ios::in);
    char ch;
    while(File>>noskipws>>ch){
        cout<<ch;
    }
}