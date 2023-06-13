//Implement the Stack using a class template

#include <iostream>

using namespace std;

template <class T>

class Stack{
    T arr[10];
    int top=-1,Size;
    public:
        Stack(int Size){
                this->Size=Size;
        }

        void push(int val) {
            if(top<Size-1){
              top++;
              arr[top]=val;
            }else{
                cout<<"\t\t\tStack is Full"<<endl;
            }
        }

        void pop() {
           if(top<=-1)
           cout<<"\t\t\tStack Underflow"<<endl;
           else {
              cout<<"\t\t\t"<<arr[top]<<" is popped"<<endl;
              top--;
           }
        }

        void Peek(){
            cout<<"\t\t\tPeek value : "<<arr[top]<<endl;
        }

        int isfull(){
            if(top==Size-1){
                cout<<"\t\t\tStack is full"<<endl;
            }else{
                cout<<"\t\t\tStack is Not Full"<<endl;
            }
        }

        void display() {
           if(top>=0) {
              cout<<"\t\t\tElements are : ";
              for(int i=0; i<=top; i++)
              cout<<arr[i]<<" ";
              cout<<endl;
           } else
           cout<<"\t\t\tStack is empty";
        }
        void sizeFun(){
            cout<<"\t\t\tSize : "<<top+1<<endl;
        }
        int isEmpty(){
            if(top==-1){
                return 1;
            }else{
                return 0;
            }
        }
        int getfun(){
            return top;
        }
};

int main() {
       int num;
       cout<<"1 - INT"<<endl;
       cout<<"2 - CHAR"<<endl;
       cout<<"Enter the choice : ";
       cin>>num;
       int stacksize;
       cout<<"Enter the Size : ";
       cin>>stacksize;
       if(num==1){
            Stack <int> obj(stacksize);
            int choice;
            while(1){
                  cout<<"1 - PUSH"<<endl;
                  cout<<"2 - POP"<<endl;
                  cout<<"3 - SIZE"<<endl;
                  cout<<"4 - PEEK"<<endl;
                  cout<<"5 - ISFULL"<<endl;
                  cout<<"6 - ISEMPTY"<<endl;
                  cout<<"7 - DISPLAY"<<endl;
                  cout<<"0 - EXIT"<<endl<<endl;
                  cout<<"Enter choice: ";
                  cin>>choice;
                      switch(choice) {
                         case 1:
                                if(obj.getfun()<stacksize-1){
                                int value;
                                cout<<"Enter value : ";
                                cin>>value;
                                obj.push(value);
                                }else{
                                    cout<<"\t\t\tStack is Full"<<endl;
                                }
                                break;
                         case 2:
                                obj.pop();
                                break;
                         case 3:
                                 obj.sizeFun();
                                 break;
                         case 4:
                                 obj.Peek();
                                 break;
                         case 5:
                                 obj.isfull();
                                 break;
                         case 6:
                                 if(obj.isEmpty()){
                                    cout<<"\t\t\tStack is Empty"<<endl;
                                 }else{
                                    cout<<"\t\t\tStack is Not Empty"<<endl;
                                 }
                                 break;
                        case 7:
                                 obj.display();
                                 break;
                        case 0:
                                cout<<"\t\t\tExit"<<endl;
                                exit(0);
                         default:
                                cout<<"\t\t\tInvalid Choice"<<endl;
                      }
               }

       }else if(num==2){
           Stack <char> obj(stacksize);
            int choice;
            while(1){
                  cout<<"1 - PUSH"<<endl;
                  cout<<"2 - POP"<<endl;
                  cout<<"3 - SIZE"<<endl;
                  cout<<"4 - PEEK"<<endl;
                  cout<<"5 - ISFULL"<<endl;
                  cout<<"6 - ISEMPTY"<<endl;
                  cout<<"7 - DISPLAY"<<endl;
                  cout<<"0 - EXIT"<<endl<<endl;
                  cout<<"Enter choice: ";
                  cin>>choice;
                      switch(choice) {
                         case 1:
                                if(obj.getfun()<stacksize-1){
                                char value;
                                cout<<"Enter value : ";
                                cin>>value;
                                obj.push(value);
                                }else{
                                    cout<<"\t\t\tStack is Full"<<endl;
                                }
                                break;
                         case 2:
                                obj.pop();
                                break;
                         case 3:
                                 obj.sizeFun();
                                 break;
                         case 4:
                                 obj.Peek();
                                 break;
                         case 5:
                                 obj.isfull();
                                 break;
                         case 6:
                                 if(obj.isEmpty()){
                                    cout<<"\t\t\tStack is Empty"<<endl;
                                 }else{
                                    cout<<"\t\t\tStack is Not Empty"<<endl;
                                 }
                                 break;
                        case 7:
                                 obj.display();
                                 break;
                        case 0:
                                cout<<"\t\t\tExit"<<endl;
                                exit(0);
                         default:
                                cout<<"\t\t\tInvalid Choice"<<endl;
                      }
               }
       }
}
