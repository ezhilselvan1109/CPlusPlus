//Implement the Queue using a class template.

#include <iostream>

using namespace std;

template <class T>

class Queue{
    T arr[10];
    int Front = -1, rear = -1,Size;
    public:
            Queue(int Size){
                this->Size=Size;
            }
            void enqueue(T value){
                if(rear<Size){
                    if(Front== -1 && rear == -1){
                    Front = 0;
                    rear = 0;
                }else{
                    rear = rear+1;
                }
                arr[rear] = value;
                cout<<"\t\t\t"<<value<<" VALUE INSERTED"<<endl;
                }else{
                    cout<<"\t\t\tQueue is Already Full"<<endl;
                    return;
                }
            }


            void dequeue(){
                if (Front == -1 || Front > rear) {
                    cout<<"\t\t\tUNDERFLOW"<<endl;
                    return;
                }else{
                    cout<<"\t\t\t"<<arr[Front]<<" IS DELETED"<<endl;
                    Front=Front + 1;
                }
            }


            void display(){
                if(rear == -1 || Front > rear)  {
                    cout<<"\t\t\tQUEUE IS EMPTY"<<endl;
                }else{
                    cout<<"\t\t\tQUEUE VALUE : ";
                    for( T i=Front;i<=rear;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
            }

            void frountFun(){
                if(0<=Front){
                    cout<<"\t\t\tFROUNT :"<<arr[Front]<<endl;
                }
            }
            void backFun(){
                if(0<=rear){
                    cout<<"\t\t\tBACK :"<<arr[rear]<<endl;
                }
            }
            void sizeFun(){
                cout<<"\t\t\tSize : "<<rear+1<<endl;
            }

            int isEmpty(){
                if(rear == -1 || Front > rear)  {
                    return 1;
                }
                return 0;
            }
            int getfun(){
            return rear;
            }

};

int main() {
           int num;
           cout<<"1 - INT"<<endl;
           cout<<"2 - CHAR"<<endl;
           cout<<"Enter the choice : ";
           cin>>num;
           int Queuesize;
           cout<<"Enter the Size : ";
           cin>>Queuesize;
           if(num==1){
                Queue <int> obj(Queuesize);
                int choice;
                while(1){
                      cout<<"1 - ENQUEUE"<<endl;
                      cout<<"2 - DEQUEUE"<<endl;
                      cout<<"3 - SIZE"<<endl;
                      cout<<"4 - FRONT"<<endl;
                      cout<<"5 - BACK"<<endl;
                      cout<<"6 - ISEMPTY"<<endl;
                      cout<<"7 - DISPLAY"<<endl;
                      cout<<"0 - EXIT"<<endl<<endl;
                      cout<<"Enter choice: ";
                      cin>>choice;
                          switch(choice) {
                             case 1:
                                    if(obj.getfun()<Queuesize-1){
                                    int value;
                                    cout<<"Enter value : ";
                                    cin>>value;
                                    obj.enqueue(value);
                                    }else{
                                        cout<<"\t\t\tQueue is Already Full"<<endl;
                                    }
                                    break;
                             case 2:
                                    obj.dequeue();
                                    break;
                             case 3:
                                     obj.sizeFun();
                                     break;
                             case 4:
                                     obj.frountFun();
                                     break;
                             case 5:
                                     obj.backFun();
                                     break;
                             case 6:
                                     if(obj.isEmpty()){
                                        cout<<"\t\t\tQueue is Empty"<<endl;
                                     }else{
                                        cout<<"\t\t\tQueue is Not Empty"<<endl;
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
                Queue <char> obj(Queuesize);
                int choice;
                while(1){
                      cout<<"1 - ENQUEUE"<<endl;
                      cout<<"2 - DEQUEUE"<<endl;
                      cout<<"3 - SIZE"<<endl;
                      cout<<"4 - FROND"<<endl;
                      cout<<"5 - BACK"<<endl;
                      cout<<"6 - ISEMPTY"<<endl;
                      cout<<"7 - DISPLAY"<<endl;
                      cout<<"0 - EXIT"<<endl<<endl;
                      cout<<"Enter choice: ";
                      cin>>choice;
                          switch(choice) {
                             case 1:
                                    char value;
                                    cout<<"Enter value : ";
                                    cin>>value;
                                    obj.enqueue(value);
                                    break;
                             case 2:
                                    obj.dequeue();
                                    break;
                             case 3:
                                     obj.sizeFun();
                                     break;
                             case 4:
                                     obj.frountFun();
                                     break;
                             case 5:
                                     obj.backFun();
                                     break;
                             case 6:
                                     if(obj.isEmpty()){
                                        cout<<"\t\t\tQueue is Empty"<<endl;
                                     }else{
                                        cout<<"\t\t\tQueue is Not Empty"<<endl;
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

