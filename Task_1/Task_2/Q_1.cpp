/*
Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail
*/

#include <iostream>

using namespace std;

char* grade(int);
int main(){
    int marks;
    cout<<"Enter the Mark :";
    cin>>marks;
    cout<<"MARKS  GRADE\n";
    cout<<marks<<"\t"<<grade(marks)<<endl;
}

char* grade(int mark){
    if(91<=mark && 100>=mark){
        return "AA";
    }else if(81<=mark && 90>=mark){
        return "AB";
    }else if(71<=mark && 80>=mark){
        return "BB";
    }else if(61<=mark && 70>=mark){
        return "BC";
    }else if(51<=mark && 60>=mark){
        return "CD";
    }else if(41<=mark && 50>=mark){
        return "DD";
    }else if(mark<=40){
        return "Fail";
    }
}
