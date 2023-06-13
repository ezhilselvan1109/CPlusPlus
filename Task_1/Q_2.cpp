//Write a program to read random numbers and find the summation of it, if the numbers are prime
#include<iostream>
#include <cmath>

using namespace std;
int prime(int n);

int main(){
    int n,number;
    cout<<"ENTER THE NUMBER : ";
    cin>>number;
    int sum=0,i=1;
    while(i<=number){
        n=rand()%20;
        cout<<n<<" ";
        if(prime(n)){
            sum+=n;
        }
        i++;
    }
    cout<<"\nANS : "<<sum;

}
int prime(int n){
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
