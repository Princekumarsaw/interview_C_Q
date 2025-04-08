#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,7,11,15,27};
	int n=5;
	int target=26;
	int start=0,end=n-1;
	while(start<end){
		if(arr[start]+arr[end]==target){
			cout<<arr[start]<<" "<<arr[end];
			break;
		}else if(arr[start]+arr[end]<target){
			start++;
		}else{
			end--;
		}
	}
	return 0;
}





//	int main(){
//	int arr[5]={2,7,11,15,27};
//	int n=5,num=0;
//	int target=26;
//	
//	for(int i=0;i<n-1;i++){
//		int num=target-arr[i];
////		cout<<num<<endl;
//	    int start=i+1;
//		int end=n-1;
//		
//		int mid=start+(end-start)/2;
//		if(arr[mid]==num){
//			cout<<arr[mid]<<endl;
//			cout<<target-arr[mid];
//			break;
//		}
//		else if(arr[mid]<num){
//			start=mid+1;
//		}
//		else{
//			end=mid-1;
//		}
//	}
//}





//int main(){
//	int arr[5]={2,7,11,15,27};
//	int n=5;
//	int target=22;
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]+arr[j]==target){
//				cout<<arr[i]<<endl;
//				cout<<arr[j]<<endl;
//				break;
//			}
//		}
//	}
//}





