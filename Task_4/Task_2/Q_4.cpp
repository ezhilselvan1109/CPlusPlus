/*

Program to read a string containing all type of data like integer data, special characters and alphabets and place them in the corresponding type of array.
Note: Don't count for spaces.

Example. Welcome to learn C++ 14 and 17!!!.

let symbol array be sp_ch[]={+,+,!,!,!,.}

Integer array be in[]={14,17}

character array be  ch[]={W,e,l,c,o,e,m,t,o,l,e,a,r,n,C,a,n,d}

*/
#include<iostream>

using namespace std;

class Array{
    int ch[10],in[10],sp_ch[10];
    string str;
    public:
    void input(){
        cout<<"ENTER THE STRING : ";
        getline(cin, str);
    }
    void output(){
        int Ch=0,In=0,Sp_ch=0,sum=0;
        int index;
        for(int i=0;i<str.length();i++){
            index=str[i];
            if(index>=65 && index<=90 || index>=97 && index<=122){
                ch[Ch++]=char(index);
            }else if(index>=48 && index<=57){
                sum=sum*10+index-48;
                if(str[i+1]==' ' || i==str.length() || !(str[i+1]>=48 && str[i+1]<=57) || (str[i+1]>=65 && str[i+1]<=90 || str[i+1]>=97 && str[i+1]<=122)){
                    in[In++]=sum;
                    sum=0;
                }
            }else{
                if(str[i]!=' ')
                    sp_ch[Sp_ch++]=char(index);
            }
        }
        cout<<"alphabets : "<<endl;
        cout<<"{";
        for(int i=0;i<Ch;i++){
            cout<<char(ch[i]);
            if(i!=Ch-1){
                cout<<",";
            }
        }
        cout<<"}"<<endl;
        cout<<"integer data : "<<endl;
        cout<<"{";
        for(int i=0;i<In;i++){
            cout<<in[i];
            if(i!=In-1){
                cout<<",";
            }
        }
        cout<<"}"<<endl;
        cout<<"special characters : "<<endl;
        cout<<"{";
        for(int i=0;i<Sp_ch;i++){
            cout<<char(sp_ch[i]);
            if(i!=Sp_ch-1){
                cout<<",";
            }
        }
        cout<<"}";
    }

};
int main(){
    Array obj;
    obj.input();
    obj.output();
}
