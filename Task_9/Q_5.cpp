//Create a vector that stores a set of characters and print them in reverse order by using rbegin() and rend() and also remove the duplicates.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size,num;
    vector<int> arr;
    cout<<"Enter the Size : ";
    cin>>size;
    cout<<"Enter the Element :";
    for(int i=0;i<size;i++){
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    int itr =0;
	for(int i=1;i<size;i++){
		if(arr[itr]!=arr[i]){
			arr[++itr] = arr[i];
		}
	}
	for(int i=0;i<=itr;i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}

