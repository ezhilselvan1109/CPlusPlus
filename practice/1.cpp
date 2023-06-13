#include<iostream>

using namespace std;

int main(){
    int row,col,i,j;
    cout<<"ENTER THE NUMBER OF ROW : ";
    cin>>row;
    cout<<"ENTER THE NUMBER OF COL : ";
    cin>>col;
    int arr[row][col];
    cout<<"ENTER THE ARRAY ELEMENTS : ";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ARRAY ELEMENTS : "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"ANS: "<<endl;
    int r=0,c=col-1,tempc=0,tempr=0;

    for(int j=col-1;j>=0;j--){
        for(i=0;i<row;i++){
            cout<<arr[r][c]<<" ";

            if(r==0 && tempc-c==1){
                tempr=c;
                c--;
            }else if(c==col-1 && i%2==0){
                r++;
                tempc=c;
            }else if(r==0 && tempr-c==1){
                    r++;
                    c--;
            }else{
                r--;
                c--;
            }



        }
    }

}

