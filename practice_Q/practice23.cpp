#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"enter your array size: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++){
		
		int index = i;
		for(int j=i+1;j<n;j++)
		{
		    if(arr[j]<arr[index])
			{
				index=j;
		    }
	    }
	    swap(arr[i],arr[index]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

//int arr[6]= {6,11,7,8,3,9};
//	
//	for(int i=0;i<5;i++){
//		
//		int index = i;
//		for(int j=i+1;j<6;j++)
//		{
//		    if(arr[j]<arr[index])
//			{
//				index=j;
//		    }
//	    }
//	    swap(arr[i],arr[index]);
//	}
//	for(int i=0;i<6;i++){
//		cout<<arr[i]<<" ";
//	}
//}
