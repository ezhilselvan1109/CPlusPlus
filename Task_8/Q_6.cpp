//To count the occurrence of specified word

#include<iostream>
#include<fstream>

using namespace std;

class File{
    public:
    void write(){
        int noOfStr,i=0;
        fstream file("Q6File",ios::out);
        cout<<"Enter the String : ";
        //cin>>noOfStr;
        string str;
        getchar();
        getline(cin,str);
        cin.ignore();
        // while(i<noOfStr){
        //     cout<<"Enter the "<<i+1<<" String : ";
        //     cin>>str;
        //     file<<str;
        //     file<<" ";
        //     i++;
        // }
        file<<str;
        cin.ignore();
        file.close();
    }
    void read(){
        string Str;
        int count=0;
        cout<<"Enter The Sting : ";
        cin>>Str;
        fstream file("Q6File",ios::in);
        string str;
        while(file>>str){
            if (Str.compare(str)==0)
            {
                count++;
            }
        }
        cout<<"Count : "<<count;
        file.close();
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
                obj.write();
                break;
            case 2:
                obj.read();
                break;
            case 0:
                exit(0);
        }
        cout<<endl;
    }
}