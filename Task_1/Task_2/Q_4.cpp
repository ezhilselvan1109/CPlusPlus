/*

Write a function named "digit_name" that takes an integer argument in the range from 1 to 9, inclusive, and prints the English name for that integer
on the computer screen. No newline character should be sent to the screen following the digit name. The function should not return a value.
The cursor should remain on the same line as the name that has been printed. If the argument is not in the required range, then the function should
print "digit error" without the quotation marks but followed by the newline character. Thus, for example, the statement digit_name(7);
should print seven on the screen; the statement digit_name(0); should print digit error on the screen and place the cursor at the beginning of the next line.
*/

#include<iostream>

using namespace std;

void digit_name();

int main(){
    digit_name();
}

void digit_name(){
    int num;
    int ex;
    while(1){
    cout<<"ENTER THE NUMBER 0 - EXIT ANS 1 - CONTINUE "<<endl;
    cin>>ex;
    cout<<"Enter the number (1 -9 ): ";
    cin>>num;
    switch(num){
    case 1:
        cout<<"ONE ";
        break;
    case 2:
        cout<<"TWO ";
        break;
    case 3:
        cout<<"THREE ";
        break;
    case 4:
        cout<<"FOUR ";
        break;
    case 5:
        cout<<"FIVE ";
        break;
    case 6:
        cout<<"SIX ";
        break;
    case 7:
        cout<<"SEVAN ";
        break;
    case 8:
        cout<<"EIGHT ";
        break;
    case 9:
        cout<<"NINE ";
        break;
    default:
        cout<<"digit error\n";
    }
    cout<<endl;
    if(ex==0){
        //exit(0);
        break;
    }
    }
}
