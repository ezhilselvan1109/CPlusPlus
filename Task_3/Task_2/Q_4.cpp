/*

Make a base class named Item then define its private and public members. Define a constructor with parameters for both data members (Barcode, Item Name).
You should add default values for the parameters to provide a default constructor for the class. In addition to the access methods setCode() and getCode(),
you are also required to define the methods scanner() and printer(). These methods will simply output item data on screen or read the data of an item from
the keyboard.Define two derived classes PackedFood and FreshFood. In addition to the Item class data, the PackedFood class should contain the unit price.
The FreshFood class should contain a weight and a price per kilogram as data members. You are required to define a constructor with parameters providing
default-values for all data members in both classes. Also define the access methods needed for the new data members. Make the main() function then test the
classes in it, that creates two objects each of the types Item, PackedFood and FreshFood. One object of each type should be fully initialized in the object
definition. You can use the default constructor to create the other object. The get() and set() methods and the scanner() method should be well written and
the printer() method should display the items on screen.

*/

#include<iostream>

using namespace std;

class Item{
    int Barcode;
    string Item_Name;
    public :
    Item(int Barcode,string Item_Name){
        this -> Barcode=Barcode;
        this -> Item_Name=Item_Name;
    }

    Item(){
        Barcode=1111;
        Item_Name="pen";
    }

    void setCode(int Barcode){
        this -> Barcode=Barcode;

    }
    void setItem_Name(string Item_Name){
        this -> Item_Name=Item_Name;
    }
    int getCode(){
        return Barcode;
    }
    string getItem_Name(){
        return Item_Name;
    }
    void scanner(){
        cout<<"Enter the Barcode : ";
        cin>>this->Barcode;
        cout<<"Enter the Item_Name : ";
        cin>>this->Item_Name;
    }
    void printer(){
        cout<<"Barcode : ";
        cout<<Barcode<<endl;
        cout<<"Item_Name : ";
        cout<<Item_Name;
    }
};

class PackedFood:public Item {
    int unit_price;
    public:
    int get(){
        return unit_price;
    }
    void setfun(int value){
        unit_price=value;
    }
    void scanner(){
        cout<<"ENTER THE UNIT PRICE :";
        cin>>unit_price;
    }
    void printer(){
        cout<<"UNIT PRICE : ";
        cout<<unit_price;
    }
};
class FreshFood:public Item{
    int weight ,price_per_kilogram;
     public:
    int getweight(){
        return weight;
    }
    int getprice_per_kilogram(){
        return price_per_kilogram;
    }
    void setfun(int weight,int price_per_kilogram){
        this -> price_per_kilogram=price_per_kilogram;
        this -> weight=weight;
    }
    void scanner(){
        cout<<"ENTER THE WEIGHT : ";
        cin>>weight;
        cout<<"ENTER THE PRICE PER KILOGRAM : ";
        cin>>price_per_kilogram;

    }
    void printer(){
        cout<<"WEIGHT : ";
        cout<<weight<<endl;
        cout<<"PRICE PER KILOGRAM : ";
        cout<<price_per_kilogram<<endl;
    }
};
int main(){
        cout<<"Item class :"<<endl;
        Item Itemobj1;
        cout<<"USING DEFAULT CONSTRUCTOR : "<<endl;
        Itemobj1.printer();
        cout<<"\n\nUSING PARAMETERS : "<<endl;
        Item Itemobj2(2222,"BAG");
        Itemobj2.printer();
        cout<<"\n\nUSING SET METHOD : "<<endl;
        cout<<"BARCODE : ";
        Item Itemobj3;
        Itemobj3.setCode(333);
        cout<<Itemobj3.getCode();
        cout<<"\nITEM NAME : ";
        Itemobj3.setItem_Name("LAPTOP");
        cout<<Itemobj3.getItem_Name();
        cout<<"\n\nUSING SCANNER : "<<endl;
        Itemobj3.scanner();
        Itemobj3.printer();

        cout<<"\n\nPackedFood class "<<endl;
        PackedFood PackedFoodobj1;
        cout<<"\n\nUSING GET AND SET METHOD : "<<endl;
        PackedFoodobj1.setfun(5);
        int value=PackedFoodobj1.get();
        cout<<value;
        cout<<"\n\nSCANNER AND PRINTER: "<<endl;
        PackedFoodobj1.scanner();
        PackedFoodobj1.printer();

        cout<<"\n\nFreshFoodobj1 class "<<endl;
        FreshFood FreshFoodobj1;
        cout<<"\n\nUSING GET AND SET METHOD : "<<endl;
        FreshFoodobj1.setfun(5,10);
        value=FreshFoodobj1.getweight();
        cout<<"weight : "<<value<<endl;
        value=FreshFoodobj1.getprice_per_kilogram();
        cout<<"price_per_kilogram : "<<value<<endl;
        cout<<"\n\nSCANNER AND PRINTER: "<<endl;
        FreshFoodobj1.scanner();
        FreshFoodobj1.printer();


}

