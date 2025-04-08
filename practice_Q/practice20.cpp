#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"enter your number: ";
	cin>>n;
	if(n==1 && n==0){
		cout<<n<<" is not prime number"<<endl;
	}
	if(n%2==0){
		count++;
	}
	if(n==2){
		cout<<n<<" is prime number"<<endl;
	}
	else if(count==1){
		cout<<n<<" is not prime number"<<endl;
	}
	else{
		cout<<n<<" is prime number"<<endl;
	}
}
