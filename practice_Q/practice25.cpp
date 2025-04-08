#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"enter your array size: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int start=0,end=n-1,mid;
	int x;
	cout<<"enter you finding number: ";
	cin>>x;
	mid=(start+end)/2;
	
	if(arr[mid]==x){
		cout<<arr[mid]<<endl;
//		cout<<mid<<endl;
	}else if(arr[mid]>x){
		end=mid-1;
	}else{
		start=mid+1;
		
	}
	return -1;
}
