#include<iostream>
using namespace std;
int main(){
	int num,even=0, odd=0;
	cin>>num;
	
	while(num>0){
		int digit = num%10;
		if(digit%2==0){
			even++;
		}
		else{
			odd++;
		}
		num = num/10;
	}
	cout << "Even digits: " << even << endl;
    cout << "Odd digits: " << odd << endl;
}
