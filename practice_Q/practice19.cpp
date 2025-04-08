#include<iostream>
using namespace std;
int main(){
	int sum1,sum2,sum3;
	cout<<"enter your three number: ";
	cin>>sum1>>sum2>>sum3;
	if(sum1<sum2 && sum3<sum2){
		cout<<sum2<<" is greater"<<endl;
	}
	else if(sum3>sum2 && sum1<sum3){
		cout<<sum3<<" is greater"<<endl;
	}
	else{
		cout<<sum1<<" is greater"<<endl;
	}
}
