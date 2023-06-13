//Write an operator function to perform post increment by 2.

#include <iostream>

using namespace std;

class Operator{
    int number;
    public:
    Operator(){
    number=0;
    }
    Operator(int n){
        number=n;
    }
    void operator ++(int n){
        Operator Count;
        Count.number=n;
        number+=2;
    }
    int get(){
        return number;
    }
};
int main(){
    Operator obj(6);
    obj++;
    cout<<obj.get()<<endl;
    obj++;
    cout<<obj.get()<<endl;

}
