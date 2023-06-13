#include <iostream>
#include <stack>
using namespace std;

/*
class Stack{
    int arr[5];
    int top=-1,Size=5;
    public:
        void push(int val) {
            if(top<Size-1){
              top++;
              arr[top]=val;
            }
        }
};
int main() {
    Stack obj;
    obj.push(12);
    obj.push(12);
    obj.push(12);
    obj.push(12);
    obj.push(12);
}
*/


int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

         stack.pop();
    stack.pop();

    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}
