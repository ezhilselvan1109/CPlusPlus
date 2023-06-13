//To count words, lines and total size.

#include<iostream>
#include<fstream>

using namespace std;

class File{
    public:
    void read(){
        fstream file;
        file.open("Q5File",ios::out);
        int Line,i=0;
        cout<<"Enter the  No of Line : ";
        cin>>Line;
        string str;
        while(i<Line){
            cout<<"Enter The "<<i+1<<" Line :"<<endl;
            cin.ignore();
            getline(cin,str);
            file<<str;
            file<<endl;
            i++;
        }
        file.close();
    }
    void write(){
        fstream file;
        int wordscount=0,linescount=0,totalsize=0;
        file.open("Q5File",ios::in);
        char ch;
        while(file>>noskipws>>ch){
            if(ch==' ' || ch=='\n')
                wordscount++;
            if(ch=='\n')
                linescount++;
            totalsize++;
        }
        file.close();
        cout<<"Words Count : "<<wordscount<<endl;
        cout<<"Lines Count : "<<linescount<<endl;
        cout<<"Total Size : "<<totalsize<<endl;
    }
};
int main(){
    int choice;
    File obj;
    while(1){
        cout<<"1 - File Writing \n2 - File Reading \n0 - Exit \nEnter the choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                obj.read();
                break;
            case 2:
                obj.write();
                break;
            case 0:
                exit(0);
        }
        cout<<endl;
    }
}