#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,3,2,5,4,8};
	int n=6;
	int last=arr[n-1];
	
	for(int i=n-2;i>=0;i--){
		arr[i+1] = arr[i];
	}
	arr[0]=last;
	
	for(int i=0;i<6;i++)
    cout<<arr[i];
}
