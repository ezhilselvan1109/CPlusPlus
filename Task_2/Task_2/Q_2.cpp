//Create a class "Time" and read Time in terms of Hours, Minutes and Seconds and convert them into seconds.

#include <iostream >

using namespace std;

class Time{
    int Hours, Minutes , Seconds;
    public :
    void input(){
        cout<<"ENTER THE TIME(Hours:Minutes:Seconds) : ";
        char ch;
        cin>>Hours>>ch>>Minutes>>ch>>Seconds;
    }
    int ConvertSecond(){
        return (Hours*3600)+(Minutes*60)+(Seconds*1);
    }
};
int main(){
    Time obj;
    obj.input();
    cout<<"ANS : "<<obj.ConvertSecond() <<" "<<"Seconds";
}
