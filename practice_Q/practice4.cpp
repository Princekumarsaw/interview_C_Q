#include<iostream>
using namespace std;
int main(){
	int n,ans;
	cout<<"enter your number: ";
	cin>>n;
	while(n>9){
	int sum=0,num;
	    while(n!=0){
			num=n%10;
		    n/=10;
		    sum+=num;
	    }
	    ans=sum;
	}
	cout<<ans;
}







//#include<iostream>
//using namespace std;
//int main(){
//	int num;
//	cout<<"enter your number";
//	cin>>num;
//	while(num>9){
//	int ans=0, rem;
//	while(num!=0){
//		rem=num%10;
//		num/=10;
//		ans= ans+rem;
//	}
//	    num=ans;
//    }
//	cout<<num;
//}
