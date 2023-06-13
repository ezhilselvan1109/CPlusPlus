/*
Write a C++ program that accepts sales unit price and sales quantity of various items and computes total sales amount and the average sales quantity.
All input values must be greater than or equal to 0 and less than or equal to 1,000, and the number of pairs of sales unit and sales quantity does
not exceed 100. If a fraction occurs in the average of the sales quantity, round the first decimal place.
*/

#include<iostream>

using namespace std;

int main(){
    int pairs;
    cout<<"Entet the pairs :";
    while(1){
        cin>>pairs;
            if(pairs>=0 && pairs<=100){
                break;
            }else{
                cout<<"Re-enter the pairs : ";
        }
    }
    cout<<endl<<endl;
    int i=1;
    float total=0;
    while(i<=pairs){
        float price;
        int quantity;
        cout<<"Enter the price :";
        while(1){
        cin>>price;
            if(price>=0 && price<=1000){
                break;
            }else{
                cout<<"Re-enter the price : ";
            }
        }
        cout<<"Entet the quantity :";
        while(1){
        cin>>quantity;
            if(quantity>=0 && quantity<=1000){
                break;
            }else{
                cout<<"Re-enter the quantity : ";
            }
        }
        total=total+(price*quantity);
        i++;
        cout<<endl;
    }
    cout<<"Average Sales Amount : "<<total/pairs;
}


/*
Entet the pairs :2


Entet the price :5.5
Entet the quantity :15

Entet the price :11.25
Entet the quantity :8

Average Sales Amount : 86.25

*/
