//To count digits, alphabets & spaces and display all the count.

#include<iostream>
#include<fstream>

using namespace std;
class Count{
    string str;
    public:
    void write(){
        fstream file;
        cout<<"Enter the String : ";
        getline(cin,str);
        file.open("Q4File",ios::out);
        file<<str;
        file.close();
    }
    void read(){
        fstream file;
        file.open("Q4File",ios::in);
        char ch;
        int digitsCount=0,alphabetsCount=0,spacesCount=0;
        while (file>>noskipws>>ch)
        {
            if(ch==' ')
                spacesCount++;
            else if(ch>=48 && ch<=57)
                digitsCount++;
            else if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
                alphabetsCount++;
        }
        cout<<"Digits Count : "<<digitsCount<<endl;
        cout<<"Alphabets Count : "<<alphabetsCount<<endl;
        cout<<"Spaces Count : "<<spacesCount<<endl;
        file.close();
    }
};

int main(){
    Count obj;
    obj.write();
    obj.read();
}

