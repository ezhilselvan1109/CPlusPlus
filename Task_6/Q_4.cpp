//Program to handle the exception when the power value of X^n is a negative value. i.e n is negative.

#include<iostream>

using namespace std;

class Exception{
    int X,n;
    public:
    void input(){
        cout<<"Enter the base value X : ";
        cin>>X;
        pow();
    }
    pow(){
        try{
            cout<<"Enter the power value n : ";
            cin>>n;
            if(n>0){
               power();
            }else{
                throw n;
            }
        }catch(int n){
            cout<<"Power value n is a negative value  "<<endl;
            pow();
        }
    }
    void power(){
        int sum=1,i=0;
        while(i<n){
            sum*=X;
            i++;
        }
        cout<<"POWER : "<<sum;
    }
};
int main(){
        Exception obj;
        obj.input();
}
