//Find the Factorial of a number even when the user is not provided input for n=5(default value).

#include<iostream>

using namespace std;

int Factorial(int num){
    int sum=1;
    for(int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
}
int main(){
    while(1){
    cout<<"\t\t\t\t1 - USER INPUT\n\t\t\t\t2 - DEFAULT VALUE\n\t\t\t\t0 - EXIT\nENTER THE CHOICE : ";
    int choice;
    cin>>choice;
    int num;
    if(choice==1){
        cout<<"ENTER THE VALUE : ";
        cin>>num;
    }else if(choice==0){
        exit(0);
    }else{
        num=5;
    }
    cout<<"ANS : "<<Factorial(num);
    }
}


