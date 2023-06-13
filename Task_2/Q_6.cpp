//To perform addition of two matrix.



#include <iostream>

using namespace std;



void diplay(int **arr1,int row1,int col1);

int main(){
    cout<<"THE FIRST ARRY :\n";
    int row1,col1,row2,col2;
    cout<<"ENTER THE ROW : ";
    cin>>row1;
    cout<<"ENTER THE COLUMN : ";
    cin>>col1;
    int arr1[row1][col1];
    cout<<"ENTER THE ELEMENTS : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"THE SECOND ARRY :\n";
    cout<<"ENTER THE ROW : ";
    cin>>row2;
    cout<<"ENTER THE COLUMN : ";
    cin>>col2;
    int arr2[row2][col2];
    cout<<"ENTER THE ELEMENTS : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"ANS : "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<arr2[i][j]+arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}




































/*
#include <iostream>

using namespace std;

void display(int arr[][],int row,int col);
void addition(int arr1[][],int arr2[][],int row,int col);

void display(int arr[][],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void addition(int arr1[][],int arr2[][],int row,int col){
    int arr3[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr1[i][j];
        }
    }
    display(arr3,row,col);
}




int main(){
    cout<<"THE FIRST ARRY :\n";
    int row1,col1;
    cout<<"ENTER THE ROW : ";
    cin>>row1;
    cout<<"ENTER THE COLUMN : ";
    cin>>col1;
    int arr1[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
    display(arr1,row1,col1);
    cout<<"THE SECOND ARRY :\n";
    int row2,col2;
    cout<<"ENTER THE ROW : ";
    cin>>row2;
    cout<<"ENTER THE COLUMN : ";
    cin>>col2;
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>arr2[i][j];
        }
    }
    display(arr2,row2,col2);
    if(row1==row2 && col1 ==col2){
        //addition(arr1,arr2,row1,col1);
    }else{
        cout<<"ROW AND COL ARE NOT SAME !";
    }
}

*/

