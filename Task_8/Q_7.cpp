//To read and write Product details using binary files.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
 
class Product {
    string Name;
    int Price,quantity,noOfProduct;
public:
    void write();
    void read();
};
void Product::write(){
    fstream file;
    file.open("Q7File.bin", ios::out| ios::binary );
    cout<<"Enter the no of Product : ";
    cin>>noOfProduct;
    Product Product_obj[noOfProduct];
    for(int i=0;i<noOfProduct;i++){
        cout<<"Enter the Name : ";
        cin>>Product_obj[i].Name;
        cin.ignore();
        cout<<"Enter the Quantity : ";
        cin>>Product_obj[i].quantity;
        cout<<"Enter the Price : ";
        cin>>Product_obj[i].Price;
        file.write((char*)&Product_obj, sizeof(Product_obj));
    }
    file.close();
}
void Product::read(){
    fstream file;
    file.open("Q7File.bin", ios::in| ios::binary);
    Product Product_obj[noOfProduct];
    cout<<"Name\tQuantity\tPrice"<<endl;
    int i=0;
    while (file.read((char*)&Product_obj, sizeof(Product_obj))) {
        cout<<left<<setw(16)<<Product_obj[i].Name;
        cout<<left<<setw(16)<<Product_obj[i].quantity;
        cout<<left<<setw(16)<<Product_obj[i].Price<<endl;
        i++;
    }
    file.close();
}
int main()
{
    Product object;
    object.write();
    object.read();
    return 0;
}