//Program to swap two numbers/characters using a function template.

#include <iostream>

using namespace std;

template <typename T>

void Swap(T& first,T& second){
    T temp;
    temp=first;
    first=second;
    second=temp;
}

template <typename T>
void print(T first,T second){
    cout<<"first value : "<<first<<endl;
    cout<<"second value : "<<second<<endl;
}
int main(){
    int firsti=4,secondi=5;
    cout<<"numbers : "<<endl;
    Swap(firsti,secondi);
    print(firsti,secondi);
    char firstch='A',secondch='B';
    cout<<"characters : "<<endl;
    Swap(firstch,secondch);
    print(firstch,secondch);
}
