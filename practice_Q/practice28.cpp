//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int arr[8]={5,3,2,4,7,9,8,6};
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<8;i++){
		while(arr[i]<min){
			min=arr[i];
		}
		while(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"Minimum number is: "<<min<<" "<<endl;
	cout<<"Maximum number is: "<<max<<" "<<endl;
}
