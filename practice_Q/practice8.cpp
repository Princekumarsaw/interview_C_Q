#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your number: ";
	cin>>n;
	int num=n;
	
	int ans=0, rem;
	while(num){
		rem=num%10;
		num/=10;
		ans= ans*10+rem;
	}
	
	if(ans==n){
		cout<<"this number is Palindrome: "<<ans;
	}else{
		cout<<"this number is not Palindrome: "<<ans;
	}
}
