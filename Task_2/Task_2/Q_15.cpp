/*

Program to write 10  details using array of objects and display them based on the type (packed, fresh) of the product.
Update stock when it reaches below or 5. Note: PNo, PName, Type, Quantity, CostperUnit as  fields of a Product structure.
*/

#include<iostream>
#include<iomanip>

using namespace std;

class Product{
    int PNo,Quantity, CostperUnit;
    string PName, Type;
    public :
    void read(){
        cout<<"Enter the product No : ";
        cin>>PNo;
        cout<<"Enter the PName : ";
        cin>>PName;
        cout<<"Enter the Quantity : ";
        cin>>Quantity;
        cout<<"Enter the CostperUnit : ";
        cin>>CostperUnit;
        cout<<"Enter the product Type (F/P): ";
        cin>>Type;
    }
    void print(){
        cout<<left<<setw(12)<<PNo<<left<<setw(14)<<PName<<left<<setw(9)<<Quantity<<" "<<CostperUnit<<endl;
    }

    void packed(){
        if(Type=="P"){
            print();
        }
    }
    void fresh(){
        if(Type=="F"){
            print();
        }
    }
    void sales(int proQuan,string proN){
        if(PName==proN){
            Quantity-=proQuan;
            if(Quantity<=5){
                cout<<"Quantity reaches below or 5"<<endl;
            }
        }
    }
};

int main(){
    int choice;
    Product pro[10];
    while(1){
        cout<<"\t\t\t\t1 - ENTER THE PRODUCT DETAILS\n\t\t\t\t2 - SALES THE PRODUCT\n\t\t\t\t3 - PACKED DETAILS\n\t\t\t\t4 - FRESH DETAILS\n\t\t\t\t5 - EXIT\nENTER THE NUMBER : ";

        cin>>choice;
        if(choice==1){
            for(int i=0;i<2;i++){
                cout<<"ENTER THE "<<i+1<<" PRODUCT DETAILS"<<endl;
                pro[i].read();
            }
        }else if(choice==2){
            cout<<"ENTER THE PRODUCT NAME : ";
            string proN;
            cin>>proN;
            cout<<"ENTER THE QUANTITY : ";
            int proQuan;
            cin>>proQuan;
            for(int i=0;i<2;i++){
                pro[i].sales(proQuan,proN);
            }
        }else if(choice==3){
            cout<<"PACKED"<<endl;
            cout<<"PRODUCT NO  PRODUCT NAME  QUANTITY  COSTPERUNIT"<<endl;
            for(int i=0;i<2;i++){
                pro[i].packed();
            }
            cout<<endl;
        }else if(choice==4){
            cout<<"FRESH"<<endl;
            cout<<"PRODUCT NO  PRODUCT NAME  QUANTITY  COSTPERUNIT"<<endl;
            for(int i=0;i<2;i++){
                pro[i].fresh();
            }
        }else if(choice==5){
            exit(0);
        }
    }
}

