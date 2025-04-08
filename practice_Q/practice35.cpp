#include<iostream>
using namespace std;
int main(){
	int arr[7]={0,1,1,0,0,0,1};
	int n=7;
	int start=0,end=n-1;
	while(start<end){
	if(arr[start]==0){
		start++;
	}
	else{
		if(arr[end]==0){
			swap(arr[start],arr[end]);
		}
		else{
			end--;
		}
	}
    }
    for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
//int main(){
//	int arr[6]={1,0,1,0,1,0};
//	int n=6;
//	int count0=0;
//	int count1=0;
//	
//	for(int i=0;i<n;i++){
//		if(arr[i]==0){
//			count0++;
//		}
//		else{
//			count1++;
//		}
//	}
//	for(int i=0;i<count0;i++){
//		arr[i]=0;
//	}
//	for(int i=count0;i<n;i++){
//		arr[i]=1;
//	}
//	cout<<count0<<endl;
//	cout<<count1<<endl;
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//}
