//To count total zeros and ones in a binary number.

#include <iostream>

using namespace std;

int main(){
    int num,temp,count1=0,count0=0;
    cout<<"ENTER THE NUMBER :";
    cin>>num;
    while(num!=0){
        if(num%2){
            count1++;
        }else{
            count0++;
        }
        num/=2;
    }
    cout<<"ZEROS : "<<count0<<" "<<"ONES : "<<count1;
}
