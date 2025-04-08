#include<iostream>
#include<math.h>
using namespace std;
int countdigit(int i){
	int count=0;
	while(i){
		count++;
		i=i/10;
	}
	return count;
}

void armstrong(int i,int digit){
	int ans=i,sum=0,num;
	while(ans){
		num=ans%10;
		ans/=10;
		sum=sum+pow(num,digit);
    }
    if(sum==i){
		cout<<"this number is armstrong: "<<sum<<endl;
	}else{
		cout<<"this number is not armstrong: "<<sum<<endl;
	}
}
int main(){	
	
	int a,b;
	cout<<"Enter first no:"<<endl;
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		int digit=countdigit(i);
		armstrong(i,digit);
	}
}
