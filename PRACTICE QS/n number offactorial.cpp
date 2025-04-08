#include<stdio.h>
int factorial(int x);
int main()
{
	int a = 6;
	printf("the value of factorial %d is %d",a, factorial(a));
//	int i,factorial=1,n;
//	printf("enter the number:\n");                                              
//	scanf("%d",&i);
//	printf("enter the number:\n");
//	scanf("%d",&n);
//	for (i;i<=n;i++)
//	{
//		factorial*=i;
//	}
//	printf("the value of sum (any number) is %d",factorial);
//	return 0;
}
int factorial(int x){
	if(x==1 || x==0){
		return 1;
	}
	else{
		return x* factorial(x-1);
	}
}
