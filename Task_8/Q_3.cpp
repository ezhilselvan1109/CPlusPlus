//To read and write values through Book object.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
 
class Book {
    string Name;
    int id,Rating,Price,noOfBook;
public:
    void write();
    void read();
};
void Book::write(){
    fstream file;
    file.open("Q3File", ios::out);
    cout<<"Enter the no of Books : ";
    cin>>noOfBook;
    Book Book_obj[noOfBook];
    for(int i=0;i<noOfBook;i++){
        cout<<"Enter the Book Name : ";
        cin>>Book_obj[i].Name;
        cin.ignore();
        cout<<"Enter the Book Id : ";
        cin>>Book_obj[i].id;
        cout<<"Enter the Book Rating : ";
        cin>>Book_obj[i].Rating;
        cout<<"Enter the Book Price : ";
        cin>>Book_obj[i].Price;
        file.write((char*)&Book_obj, sizeof(Book_obj));
    }
    file.close();
}
void Book::read(){
    fstream file;
    file.open("Q3File", ios::in);
    Book Book_obj[noOfBook];
    cout<<"Book Name\tBook Id\t\tBook Rating\tBook Price"<<endl;
    int i=0;
    while (file.read((char*)&Book_obj, sizeof(Book_obj))) {
        cout<<left<<setw(16)<<Book_obj[i].Name;
        cout<<left<<setw(16)<<Book_obj[i].id;
        cout<<left<<setw(16)<<Book_obj[i].Rating;
        cout<<left<<setw(10)<<Book_obj[i].Price<<endl;
        i++;
    }
    file.close();
}
int main()
{
    Book object;
    object.write();
    object.read();
    return 0;
}