#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

fstream file1,file2;

class FileDetails{
    string userName,bookName;
    public:
        void setUserName(string username){
            this->userName=username;
        }
        void setBookName(string bookName){
            this->bookName=bookName;
        }
        string getuserName(){
            return userName;
        }
        string getbookName(){
            return bookName;
        }
        void Display(){
            cout<<left<<setw(16);
            cout<<userName;
            cout<<bookName<<endl;
        }
        void SetDetails(){
            this->userName="UserName";
            this->bookName="bookName";
        }
};
FileDetails FileDetailsobj;
class File{
    public:
        void ReadFunction(){
            file1.open("ReadList.txt",ios::out | ios::app);
            FileDetailsobj.SetDetails();
            cout<<"Wirite....."<<endl;
            file1.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
            file1.close();
        }
        void read(){
            file1.open("ReadList.txt",ios::in);
            while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
            FileDetailsobj.Display();
            }
            file1.close();
        }
        void IssuedFunction(){
            file1.open("IssuedList.txt",ios::out | ios::app);
            FileDetailsobj.SetDetails();
            file1.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
            file1.close();
        }
};

int main(){
    File obj;
    obj.ReadFunction();
    obj.read();
}
