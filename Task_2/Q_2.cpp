//Find the Sum of two operands with various datatypes using function overloading.

#include<iostream>

using namespace std;

int sum(int first,int second);
float sum(float first,float second);
int sum(int first,char ch);


int main(){
    int intfirst,intsecond;
    float floatfirst,floatsecond;
    cout<<"INT VALUE : "<<endl;
    cout<<"FIRST VALUE : ";
    cin>>intfirst;
    cout<<"SECOND VALUE : ";
    cin>>intsecond;
    cout<<"FLOAT VALUE : "<<endl;
    cout<<"FIRST VALUE : ";
    cin>>floatfirst;
    cout<<"SECOND VALUE : ";
    cin>>floatsecond;

    int first;
    char ch;
    cout<<"DIFFERENT DATA TYPE : "<<endl;
    cout<<"FIRST VALUE : ";
    cin>>first;
    cout<<"SECOND VALUE : ";
    cin>>ch;

    cout<<"INT : "<<sum(intfirst,intsecond)<<endl;
    cout<<"FLOAT : "<<sum(floatfirst,floatsecond)<<endl;
    cout<<"FLOAT : "<<sum(first,ch)<<endl;
}

int sum(int first,int second){
    return first+second;
}

float sum(float first,float second){
    return first+second;
}

int sum(int first,char ch){
    return first+ch;
}
