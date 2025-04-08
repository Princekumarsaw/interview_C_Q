#include<iostream>
using namespace std;
int main(){
	
//	int arr[6]= {7,4,6,8,3,9};
//	int temp[6];
//	int i=5,j=0;
//	while(i>=0){
//		temp[j]=arr[i];
//		j++;
//		i--;
//	}
//	for(j=0;j<6;j++){
//		cout<<temp[j]<<" ";
//	}


//	 //i=start,j=end;


	int arr[6]= {7,4,6,8,3,9};
	int i=0,j=5;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	for(i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
}
