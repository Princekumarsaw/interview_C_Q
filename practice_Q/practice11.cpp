#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count= 0;
	while(n>=5){
		count+=n/5;
		cout<<count;
		n=n/5;
	}
	cout<<count;
}
//kise bhi number ka factorial nikal kar batana hai ki usme kita 'zero' ata hai.
//jaise n ka value 5 hai
//to 5 ka Factorial 120 hoga.
//or isme one 'zero' hai ho ans me 1 hoga.
