#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={4,3,2,1,2,7,6};
	int n=7;
	vector<int>count(n,0);
	
//	int n=7;
	for(int i=0;i<n;i++){
		count[arr[i]-1]++;
	}
	for(int i=0;i<n;i++){
		if(count[i]==2){
		cout<<i+1;
	    }
	}
}
