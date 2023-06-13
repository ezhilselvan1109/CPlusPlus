/*

Write a function named "reduce" that takes two positive integer arguments, call them "num" and "denom", treats them as the numerator and denominator
of a fraction, and reduces the fraction. That is to say, each of the two arguments will be modified by dividing it by the greatest common divisor of
the two integers. The function should return the value 0 (to indicate failure to reduce) if either of the two arguments is zero or negative, and
should return the value 1 otherwise. Thus, for example, if m and n have been declared to be integer variables in a program, then m = 25; n = 15;
if (reduce(m,n)) cout << m << '/' << n << endl; else cout << "fraction error" << endl; will produce the following output: 5/3 Note that the values
of m and n were modified by the function call. Similarly, m = 63; n = 210; if (reduce(m,n)) cout << m << '/' << n << endl; else
cout << "fraction error" << endl;

*/

#include<iostream>

using namespace std;

int reduce(int,int);

int main(){
    int num,denom;
    cout<<"Enter the numerator : ";
    cin>>num;
    cout<<"Enter the denominator : ";
    cin>>denom;
    int returnnum=reduce(num,denom);
    if(returnnum==0){
        cout << "fraction error" << endl;
    }
}

int reduce(int m,int n){
    if(m<=0 || n<=0){
        return 0;
    }else{
    int minmum=(m<n)?m:n;
    int GCD;
    for(int i=minmum;i>=0;i--){
        if(m%i==0 && n%i==0){
            GCD=i;
            break;
        }
    }
    cout<< m/GCD << '/' << n/GCD << endl;
    return 1;
    }

}
