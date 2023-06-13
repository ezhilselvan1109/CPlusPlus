#include <iostream>
#include <ctime>
#include<iostream>
#include<unistd.h>
#include <conio.h>
#include<string.h>

using namespace std;

void startfunction(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour=(int)ltm->tm_hour;
    cout << "Time: "<<((hour>12)?hour-12:hour) << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}
void endfunction(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "Time: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}
int main() {
    startfunction();
    sleep(10);
    endfunction();
    /*
   time_t now = time(0);
   tm *ltm = localtime(&now);
   cout << "Time: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   int hour=(int)ltm->tm_hour;
   cout << "Time: "<<((hour>12)?hour-12:hour) << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   */
}

