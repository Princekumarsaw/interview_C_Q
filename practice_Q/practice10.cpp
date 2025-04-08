#include<iostream>
#include<math.h>
using namespace std;

int countdigit(int n){
	int count=0;
	while(n){
		count++;
		n/=10; 
	}
	return count;
}
void armstrong(int num,int digit){
	int n=num, ans=0, rem;
	while(n){
		rem=n%10;
		n=n/10;
		ans=ans+pow(rem,digit);
	}
	if(ans==num){
		cout<<"armstrong number";
	}else{
		cout<<"not a armstrong number";
	}
}

int main(){
	int num;
	cin>>num;
	int digit= countdigit(num);
	armstrong(num,digit);
}
