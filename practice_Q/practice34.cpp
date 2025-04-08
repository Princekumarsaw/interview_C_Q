#include<iostream>
using namespace std;
int main(){
	
}

//#include<bits/stdc++.h>
//using namespace std;
//void merge(int arr[], int start, int mid, int end){
//	vector<int>temp(end-start+1);
//	int left=start, right=mid+1, index=0;
//	
//	while(left<=mid && right<=end){
//		if(arr[left]<=arr[right]){
//			temp[index]=arr[left];
//			left++, index++;
//		}
//		else{
//			temp[index]=arr[right];
//			index++, right++;
//		}
//	}
//	while(left<=mid){
//		temp[index]=arr[left];
//		index++, left++;
//	}
//	while(right<=end){
//		temp[index]=arr[right];
//		index++, right++;
//	}
//	index=0;
//	while(start<=end){
//		arr[start]=temp[index];
//		start++, index++;
//	}
//}
//
//void mergesort(int arr[],int start,int end){
//	if(start==end){
//		return;
//	}
//	int mid=start+(end-start)/2;
//	
//	mergesort(arr, start, mid);
//	mergesort(arr, mid+1, end);
//	merge(arr, start, mid, end);
//}
//
//int main(){
//	int arr[]={2,5,7,8,3,4,9,6,1,11};
//	mergesort(arr, 0, 9);
//	for(int i=0;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
////	int arr[6]={3,7,4,15,2,9};
////	int ans=0;
////	for(int i=0;i<6;i++){
////		if(arr[i]>ans)
////		ans = arr[i];
////	}
////	int second = INT_MIN;
////	for(int i=0;i<6;i++){
////		if(arr[i]!=ans)
////		second=max(second,arr[i]);
////    }
////    int third=INT_MIN;
////	for(int i=0;i<5;i++){
////		if(arr[i]!=ans)
////		third=max(third,arr[i]);
////	}
////	cout<<therd;
//
//
//
//
//
//
//
////int n;
////	cout<<"Array ka size de!"<<endl;
////	cin>>n;
////    int arr[n];
////	for(int i=0; i<=n-1; i++){
////		cin>>arr[i];
////	}
////	
////	for(int k=0; k<=sizeof(arr)-1;k++){
////		int  target= arr[k];
////	int cnt=0;
////	for(int j=0; j<=sizeof(arr)-1; j++){
////		if(arr[j]==target){
////			cnt++;
////		}	
////	}
////cout<<target<<"Occurs"<<cnt<<"times"<<endl;	
////	}
////	}

