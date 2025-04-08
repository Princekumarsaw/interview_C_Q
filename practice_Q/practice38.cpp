#include<iostream>
using namespace std;
int main(){
	int arr[6]={2,3,5,10,50,80};
	int n=6;
	int target=45;
	int start=0,end=1;
	while(end<n){
		if(arr[end]-arr[start]==target){
		    cout<<arr[start]<<" "<<arr[end];
			break;
		}else if(arr[end]-arr[start]<target){
			end++;
		}else{
			start++;
		}
		if(start==end){
			end++;
		}
	}
	return 0;
}
