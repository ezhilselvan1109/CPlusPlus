/*

Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average
without creating any object of the Average class.

*/

#include<iostream>

using namespace std;

class Average{
    //int first,second,three;
    public :

    static float returnAverage(int first,int second,int three){
        return (first+second+three)/(float)3;
    }
};

int main(){
    int first,second,three;
    cout<<"ENTER THE FIRST VALUE : ";
    cin>>first;
    cout<<"ENTER THE SECOND VALUE : ";
    cin>>second;
    cout<<"ENTER THE THIRD VALUE : ";
    cin>>three;
    cout<<"AVERAGE : "<<Average::returnAverage(first,second,three);
}
