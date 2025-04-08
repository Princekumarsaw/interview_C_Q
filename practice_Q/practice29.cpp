#include<iostream>
using namespace std;
int main(){
	int arr[]={3,-4,5,4,-1,7,-8};
	int n=7;
	int maxSum = INT_MIN;
	int curntSum=0;
	
	for(int j=0;j<n;j++){
		curntSum+=arr[j];
		maxSum = max(curntSum, maxSum);
		
		if(curntSum<0){
			curntSum=0;
		}
	}
    cout<<maxSum;
	
	
//	int arr[]={1,2,3,4,5,6};
//	int n=6;
//	int maxSum = INT_MIN;
//	
//	for(int i=0;i<n;i++){
//		int curntSum=0;
//		for(int j=i;j<n;j++){
//			curntSum+=arr[j];
//			maxSum = max(curntSum, maxSum);
//		}
//    }
//    cout<<maxSum;
	
	
//	int arr[]={1,2,3,4,5,6};
//	int n=6;
//	for(int i=0;i<=n-1;i++){
//		for(int j=i;j<=n-1;j++){
//			for(int i=0;i<=j;i++){
//			cout<<arr[i];
//		    }
//		    cout<<" ";
//		}
//		cout<<endl;
//	}
}
