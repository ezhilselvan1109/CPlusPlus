// Create a vector that stores a set of characters and find the similar characters.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<char> Array;
	int Size,flag ;
	char ch;
	cout<<"Enter The Size :";
	cin>>Size;
	cout<<"Enter The Characters: ";
	for(int i=0;i<Size;i++){
		cin>>ch;
		Array.push_back(ch);
	}
	cout<<"Similar Character: ";
	for(int i=0;i<Size;i++){
		flag=0;
		if(Array[i]!='0'){
		    for(int j=0;j<Size;j++){
			    if(i!=j){
				    if(Array[i]==Array[j]){
					  Array[j]='0';
					  flag = 1;
				   }
			    }

		    }
		}
		if (flag == 1){
			cout<<Array[i]<<" ";
		}
    }

}
