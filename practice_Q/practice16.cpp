#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,3,6,5,4};
	int ans=0,n=6;
	for(int i=0;i<6;i++){
		ans=arr[i]+ans;
	}
	
	int sum=n*(n+1)/2;
	
    cout<<sum-ans;
}
