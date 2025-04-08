#include<bits/stdc++.h>
using namespace std;
void marge(int arr[],int start,int mid,int end){
	vector<int>temp(end-start+1);
	int left=start,right=mid+1,index=0;
	
	while(left<=mid && right<=end){
		if(arr[left]<=arr[right]){
			temp[index]=arr[left];
			index++,left++;
		}
		else{
			temp[index]=arr[right];
			index++,right++;
		}
	}
	while(left<=mid){
		temp[index]=arr[left];
		left++,index++;
	}
	while(right<=end){
		temp[index]=arr[right];
		index++,right++;
	}
	index=0;
	while(start<=end){
		arr[start]=temp[index];
		start++,index++;
	}
}
void margesort(int arr[], int start, int end){
	if(start==end){
		return;
	}
	
	int mid=start+(end-start)/2;
	margesort(arr,start,mid);
	margesort(arr,mid+1,end);
	marge(arr,start,mid,end);
}
int main(){
	int arr[]= {2,5,7,8,3,4,9,6,1,11};
	margesort(arr,0,9);
	for(int i=0;i<10;i++){
	cout<<arr[i]<<" ";
    }
}

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
