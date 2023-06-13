//To encrypt and decrypt Files.

#include<iostream>
#include<fstream>

using namespace std;

class Crypt{
    int key;
    fstream Decrypt,Encrypt,File;
    public:
    void writing(){
        
        string str;
        cout<<"Enter the Content : ";
        getchar();
        getline(cin,str);
        //cin>>str;
        
        //cin.ignore();
        File.open("Q2File",ios::out);
        File<<str;
        File.close();
    }
    void encrypt(){
        cout<<"Enter the Key Value :";
        cin>>key;
        File.open("Q2File",ios::in);
        Encrypt.open("Q2Encrypt",ios::out);
        char ch;
        while (File>>noskipws >>ch)
        {
            int temp=(ch+key);
            Encrypt<<(char)temp;
        }
        cout<<"SuccessFully Encrypt"<<endl;
        File.close();
        Encrypt.close();
    }
    void decrypt(){
        Decrypt.open("Q2Decrypt",ios::out);
        Encrypt.open("Q2Encrypt",ios::in);
        char ch;
        while (Encrypt>>noskipws >>ch)
        {
            int temp=ch-key;
            Decrypt<<(char)temp;
        }
        cout<<"SuccessFully Decrypt"<<endl;
        Decrypt.close();
        Encrypt.close();
    }
};
int main(){
    int choice;
    Crypt obj;
    while(1)
    {
        cout<<"1 - File writing \n2 - Encrypt \n3 - Decrypt \n0 - Exit\nEnter The Choice :";
        cin>>choice;
        switch (choice)
        {
            case 0:
                cout<<"Exit !"<<endl;
                exit(0);
            case 1:
                obj.writing();
                break;
            case 2:
                obj.encrypt();
                break;
            case 3:
                obj.decrypt();
                break;
        }
    }
}