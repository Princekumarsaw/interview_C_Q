#include<iostream>
using namespace std;
int main(){
	int arr[6]={4,8,56,87,45,7};
	int n=6;
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
		    }
			else{
				break;
		    }
		}
	}
	for(int i=0;i<6;i++){
		cout<<arr[i]<<endl;
	}
}
