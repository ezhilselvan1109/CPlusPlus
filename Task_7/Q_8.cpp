//Write a template function to implement bubble sort.


#include<iostream>

using namespace std;

template <typename T>

void bubbleSort(T *arr,int Size){
    T temp;
    for(int i=0;i<Size-1;i++){
        for(int j=0;j<Size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
template <typename T>
void print(T *arr,int Size){
    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int choice;
    cout<<"1 - INT \n2 - CHAR\n3 - STRING\nEnter the choice : ";
    cin>>choice;
    cout<<"Enter the Array size : ";
    int Size;
    cin>>Size;
        if(choice==1){
            cout<<"Enter the Array Element : ";
            int arr[Size];
            for(int i=0;i<Size;i++){
                cin>>arr[i];
            }
            bubbleSort(arr,Size);
            cout<<"Sorted Array : "<<endl;
            print(arr,Size);
        }
        if(choice==2){
            cout<<"Enter the Array Element : ";
            char arr[Size];
            for(int i=0;i<Size;i++){
                cin>>arr[i];
            }
            bubbleSort(arr,Size);
            cout<<"Sorted Array : "<<endl;
            print(arr,Size);
        }
        if(choice==3){
            cout<<"Enter the Array Element : ";
            string arr[Size];
            for(int i=0;i<Size;i++){
                cin>>arr[i];
            }
            bubbleSort(arr,Size);
            cout<<"Sorted Array : "<<endl;
            print(arr,Size);
        }
}
