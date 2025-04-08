//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,4,6,8,10,45};
	int n=5;
	int target = 13,ans=0;
	for(int i=0;i<n-2;i++){
		ans=target-arr[i];
		int start=i+1,end=n-1;
		while(start<end){
			if(arr[start]+arr[end]==ans){
				cout<<arr[start]<<" "<<arr[end]<<" "<<arr[i];
				break;
			}else if(ans<target){
				end--;
			}else{
				start++;
			}
		}
	}
	return 0;
}




//int main(){
//	int arr[6]={1,4,6,8,10,45};
//	int n=5;
//	int target = 24,sum=0;
//	
//	for(int i=0;i<n-2;i++){
//		for(int j=i+1;j<n-1;j++){
//		    sum=target-(arr[i]+arr[j]);
//			int start=j+1,end=n-1;
//			
//			int mid=start+(end-start)/2;
//			if(arr[mid]==sum){
//				cout<<arr[i]<<" "<<arr[j]<<" "<<sum;
//			}
//			else if(arr[mid]<target){
//				start=mid+1;
//			}
//			else{
//				end=mid-1;
//			}
//		}
//	}
//}




	
//	for(int i=0;i<n-2;i++){
//		for(int j=i+1;j<n-1;j++){
//			for(int k=j+1;k<n;k++){
//				if(arr[i]+arr[j]+arr[k]==target){
//					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
//				}
//			}
//		}
//	}
