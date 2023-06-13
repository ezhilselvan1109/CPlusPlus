#include<iostream>

using namespace std;

int main(){
    int i=0;
    while(i++<10){
        cout<< 1000 + (rand() % 9000) << endl;
    }
}
