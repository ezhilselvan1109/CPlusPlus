//To merge two files to third File.

#include<iostream>
#include<fstream>

using namespace std;

class File{
    fstream file1,file2,file3;
    public:
    void write(){
        file1.open("Q1file1",ios::out);
        file2.open("Q1file2",ios::out);
        string str;
        cout<<"Enter the Content for File1 :";
        getline(cin,str);
        file1<<str;
        cout<<"Enter the Content for File2 :";
        getline(cin,str);
        file2<<str;
        file1.close();
        file2.close();
    }
    void read(){
        file1.open("Q1file1",ios::in);
        file2.open("Q1file2",ios::in);
        file3.open("Q1file3",ios::out);
        char ch;
        while (file1>>noskipws>>ch)
        {
            file3<<ch;
        }
        file3<<endl;
        while (file2>>noskipws>>ch)
        {
            file3<<ch;
        }
        
        file1.close();
        file2.close();
        file3.close();
    }
};
int main(){
    File obj;
    obj.write();
    obj.read();
}
