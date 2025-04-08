#include<iostream>
using namespace std;
int main(){
//	int arr[6]={3,7,4,15,2,9};
//	int ans=0;
//	for(int i=0;i<6;i++){
//		if(arr[i]>ans)
//		ans = arr[i];
//	}
//	int second = INT_MIN;
//	for(int i=0;i<6;i++){
//		if(arr[i]!=ans)
//		second=max(second,arr[i]);
//    }
//    cout<<second;
    
     
    int arr[6]={3,7,5,15,2,9};
	int ans=0;
	for(int i=0;i<6;i++){
		if(arr[i]>ans)
		ans = arr[i];
	}
	int second = INT_MIN;
	for(int i=0;i<6;i++){
		if(arr[i]!=ans)
		second=max(second,arr[i]);
    }
    int therd=INT_MIN;
	for(int i=0;i<5;i++){
		if(arr[i]!=ans)
		therd=max(therd,arr[i]);
	}
	cout<<therd;
}
