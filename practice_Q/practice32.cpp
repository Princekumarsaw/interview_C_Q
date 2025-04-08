#include<iostream>
using namespace std;
int main(){		
	int a,b;
	cout<<"Enter first no:"<<endl;
	cin>>a;
	cout<<"Enter sec no:"<<endl;
	cin>>b;
	for(int i=a;i<b;i++){
	int num=i,ans=0, rem;
	while(num){
		rem=num%10;
		num/=10;
		ans= ans*10+rem;
	}
	
	if(ans==i){
		cout<<"this number is Palindrome: "<<ans<<endl;
	}else{
		cout<<"this number is not Palindrome: "<<ans<<endl;
	}
    }
}
