#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your number: ";
	cin>>n;
	int first=0,second=1,therd;
	for(int i=0;i<n;i++){
		cout<<first<<endl;
		therd=second+first;
		first=second;
		second=therd;
	}
	
	cout<<"enter your number: ";
	cin>>n;
	int arr[1000];
	arr[0]=0;
	arr[1]=1;
	
	for(int i=2;i<=n-1;i++)
	arr[i]=arr[i-1]+arr[i-2];
	
	cout<<arr[n-1];
}
