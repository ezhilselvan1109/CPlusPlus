#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream File;
    File.open("MyFileC++",ios::binary);
    cout<<"Console"<<endl;
    File<<"File writing...";
    File.close();

    string ch;
    File.open("MyFileC++",ios::in);
    while(File>>ch){
        cout<<ch<<" ";
    }
}






























// #include<iostream>

// #include<fstream>

// using namespace std;

// int main(){
//     fstream file;
//     file.open("myfile",ios::out);
//     cout<<"Writing to console";
//     file<<"I am writing this to the file";
//     file.close();
// }