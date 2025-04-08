#include<iostream>
using namespace std;
int main(){
	int arr[6]= {7,4,6,8,3,9};
	int index;
	int X;
	cout<<"enter your number :";
	cin>>X;
	for(int i=0;i<=5;i++){
		if(arr[i]==X){
			index=i;
			break;
		}
		return 0;
	}
	cout<<index;
}
