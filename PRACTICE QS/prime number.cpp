#include<stdio.h>
int main()
{   //change a n number value
	int n,prime =0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0 && i!=2){
			prime =1;
			break;
		}
	}
	if (prime ==1 && n!=2){
		printf("this is not a prime number");
	}
	else{
		printf("this is a prime number");
	}
	return 0;
}
