/*
Implement a class called String and has two data member str and length and perform the following operations?

Note: without using string handling built-in functions

Find the length of the string.

Concatenate two string objects using operator overloading.

Compare two strings. Write an operator function.

Find the reverse of the string.

Find the index of the specified character.

Separate the characters from odd and even-indexed locations and display them.

Find the substring by reading the starting index and number of characters from the user.

Remove all the duplicates.

Find the count of specified character.

Find each occurrences of each character from the string.

Insert a character at the specified location.

*/

#include<iostream>
#include<iomanip>

using namespace std;



void SpecifiedCharacter(){
    char ch;
    string str;
    cout<<"Enter The String : ";
    cin>>str;
    cout<<"Enter The Character : ";
    cin>>ch;
    int i,Count=0;
    for(i=0;str[i]!='\0';i++){
        if(ch==str[i]){
            Count++;
        }
    }
    cout<<"Count : "<<Count<<endl;
    cout<<endl<<endl;
}
void IndexedLocations(){
    string str;
    cout<<"Enter The String : ";
    cin>>str;
    int i;
    cout<<"Odd : "<<endl;
    cout<<"Position  Character"<<endl;
    for(i=0;str[i]!='\0';i++){
        if(i%2!=0)
            cout<<left<<setw(10)<<i<<str[i]<<endl;
    }
    cout<<"Even : "<<endl;
    cout<<"Position  Character"<<endl;
    for(i=0;str[i]!='\0';i++){
        if(i%2==0)
            cout<<left<<setw(10)<<i<<str[i]<<endl;
    }
    cout<<endl<<endl;
}
void SpecifiedLocations(){
    char ch;
    string str;
    cout<<"Enter The String : ";
    cin>>str;
    cout<<"Enter The Character : ";
    cin>>ch;
    int i;
    for(i=0;str[i]!='\0';i++){
        if(ch==str[i]){
            cout<<"Position : "<<i<<endl;
        }
    }
    cout<<endl<<endl;
}
void Reverse(){
    string str,temp;
    cout<<"Enter the String : ";
    cin>>str;
    int i,j,Count=0;
    for(i=0;str[i]!='\0';i++){
        Count++;
    }
    for(i=0,j=Count-1;j>=0;j--,i++){
        temp[i]=str[j];
    }
    for(i=0;i<Count;i++){
        str[i]=temp[i];
    }
    cout<<"Ans : ";
    cout<<str<<endl;
    cout<<endl<<endl;
}
void Compare(){
    string str1,str2;
    cout<<"Enter the String 1 : ";
    cin>>str1;
    cout<<"Enter the String 2 : ";
    cin>>str2;
    if(str1==str2)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<endl<<endl;
}
string operator +(string str){
    cout<<"output";
    return "output";
}
void Concatenate(){
    string str1,str2,str3;
    cout<<"Enter the String 1 : ";
    cin>>str1;
    cout<<"Enter the String 2 : ";
    cin>>str2;
    str3=str1+str2;
    cout<<str3;
    cout<<endl<<endl;
}

void lengthFun(){
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    int i,Count=0;
    for(i=0;str[i]!='\0';i++){
        Count++;
    }
    cout<<Count;
    cout<<endl<<endl;
}
void duplicates(){
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    int i,j,Count=0;
    for(i=0;str[i]!='\0';i++){
        Count++;
    }
    int arr[Count];
    for(i=0;i<Count;i++){
        arr[i]=0;
    }
    for(i=0;i<Count;i++){
        for(j=i+1;j<Count;j++){
            if(str[i]==str[j]){
                arr[i]=1;
            }
        }
    }
    cout<<"Ans : ";
    for(i=0;i<Count;i++){
        if(arr[i]!=1)
            cout<<str[i];
    }
    cout<<endl<<endl;
}


void occurrencesCharacter(){
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    int i,j,Count=0;
    for(i=0;str[i]!='\0';i++){
        Count++;
    }
    int fr[Count];
    int visited = -1;
    for(int i=0;i<Count;i++){
        int c=1;
        for(int j=i+1;j<Count;j++){
            if(str[i]==str[j]){
                c++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited)
            fr[i]=c;
    }
    for(int i=0;i<Count;i++){
            if(fr[i]!=visited)
                cout<<str[i]<<" -> " <<fr[i]<<endl;
        }
        cout<<endl<<endl;
}

void specifiedlocation(){
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    int i,j,Count=0;
    for(i=0;str[i]!='\0';i++){
        Count++;
    }
    cout<<"Enter The location: ";
    int len;
    cin>>len;
    char ch;
    if(len<Count){
        cout<<"Enter The character: ";
        cin>>ch;
        str[len]=ch;
        cout<<"After String :"<<str<<endl;
    }else{
        cout<<"Can't Inserted"<<endl;
    }
    cout<<endl<<endl;
}
void substring(){
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    int Count=0;
    for(int i=0;str[i]!='\0';i++){
        Count++;
    }
    cout<<"Enter The starting index: ";
    int startindex;
    cin>>startindex;
    cout<<"number of characters: ";
    int no_of_ch;
    cin>>no_of_ch;
    int endindex=startindex+no_of_ch;
    if(endindex<Count){
    cout<<"Substring: ";
    for(int i=startindex;i<endindex;i++){
        cout<<str[i];
    }
    }else{
        cout<<"No Substring"<<endl;
    }
    cout<<endl<<endl;
}

int main(){
    while(1){
        cout<<"1 - Find the length of the string."<<endl;

        cout<<"2 - Concatenate two string objects using operator overloading."<<endl;

        cout<<"3 - Compare two strings. Write an operator function."<<endl;

        cout<<"4 - Find the reverse of the string."<<endl;

        cout<<"5 - Find the index of the specified character."<<endl;

        cout<<"6 - Separate the characters from odd and even-indexed locations and display them."<<endl;

        cout<<"7 - Find the substring by reading the starting index and number of characters from the user."<<endl;

        cout<<"8 - Remove all the duplicates."<<endl;

        cout<<"9 - Find the count of specified character."<<endl;

        cout<<"10 - Find each occurrences of each character from the string."<<endl;

        cout<<"11 - Insert a character at the specified location."<<endl;
        int choice;
        cout<<"Enter The Choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                system("cls");
                lengthFun();
                break;
            case 2:
                system("cls");
                Concatenate();
                break;
            case 3:
                system("cls");
                Compare();
                break;
            case 4:
                system("cls");
                Reverse();
                break;
            case 5:
                system("cls");
                SpecifiedLocations();
                break;
            case 6:
                system("cls");
                IndexedLocations();
                break;
            case 7:
                system("cls");
                substring();
                break;
            case 8:
                system("cls");
                duplicates();
                break;
            case 9:
                system("cls");
                SpecifiedCharacter();
                break;
            case 10:
                system("cls");
                occurrencesCharacter();
                break;
            case 11:
                system("cls");
                specifiedlocation();
                break;
        }
    }
}


