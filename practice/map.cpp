#include <iostream>
#include <iterator>
#include <map>
using namespace std;
  
int main()
{
    map<int, int> value1;
    value1.insert(pair<int,int>(1, 40));
    value1.insert(pair<int,int>(2, 30));
    value1.insert(pair<int,int>(3, 60));
    value1.insert(pair<int,int>(4, 20));
    value1.insert(pair<int,int>(5, 50));
    value1.insert(pair<int,int>(6, 50));
      
    value1[7]=10;     
    
    map<int, int>::iterator i;
    cout<<"From value1"<<endl;
    cout << "KEY  ELEMENT"<<endl;
    for (i = value1.begin();i!= value1.end(); ++i) {
        cout << i->first <<"    "<< i->second
             <<endl;
    }
    cout << endl;
    
    cout<<"assigning the elements from value1 to value2"<<endl;
    map<int, int> value2(value1.begin(), value1.end());
    cout<<"From value1"<<endl;
    cout<<"KEY  ELEMENT"<<endl;
    for (i = value2.begin();i!= value2.end(); ++i) {
        cout<< i->first <<"    "<< i->second <<endl;
    }
    cout << endl;

    cout<<"\nvalue2 after removal of elements less than key=3 : "<<endl;
    cout<<"KEY  ELEMENT"<<endl;
    value2.erase(value2.begin(),value2.find(3));
    for (i=value2.begin();i!=value2.end(); ++i) {
        cout<< i->first <<"    "<< i->second <<endl;
    }
    cout<<endl;
    int num;
    num=value2.erase(4);
    cout<<"value2.erase(4) : ";
    cout<<num<<" removed "<<endl;
    cout<<"KEY  ELEMENT"<<endl;
    value2.erase(value2.begin(),value2.find(3));
    for (i=value2.begin();i!=value2.end(); ++i) {
        cout<< i->first <<"    "<< i->second <<endl;
    }
    cout << endl;
}