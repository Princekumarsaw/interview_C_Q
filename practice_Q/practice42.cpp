//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string arr="my name is 'prince'kumar";
	int start = 0;
	int end = arr.size()-1;
	
	while(start<end){
		swap(arr[start],arr[end]);
		start++,end--;
	}
	cout<<arr;
}
