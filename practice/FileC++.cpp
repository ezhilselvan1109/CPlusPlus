#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream File;
    File.open("MyFileCC+++",ios::binary|ios::out);
    cout<<"Console"<<endl;
    File<<"File writingggggggggggg...";
    File.close();

    /*
    string ch;
    File.open("MyFileC++",ios::in);
    while(File>>ch){
    cout<<ch<<" ";
    }
    File.close();
    */
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