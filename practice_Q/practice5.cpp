#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your year :";
	cin>>n;
	if(n%400==0){
		cout<<n<<" is leap year";
	}
	else if( n%4==0 && n%100!=0){
		cout<<n<<" is leap year";
	}
	else{
		cout<<n<<" is not a leap year";
	}
}
