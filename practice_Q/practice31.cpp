#include<iostream>
using namespace std;
int main(){
	int arr[]={4,5,0,1,2,3};
	int n=6;
	int target = 4;
	int start=0,end=n-1,mid;
	
	while(start<=end){
		mid=start+(end-start)/2;
		
		if(arr[mid]==target){
			cout<<mid<<" ";
			break;
		}
		else if(arr[mid]>=arr[0]){
			if(arr[start]<=target && arr[mid]>target){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
		else{
			if(arr[mid]<target && arr[end]>=target){
				start=mid+1;
			}else{
				end=mid-1;
			}
		}
//		cout<<mid<<endl;
	}
}
