#include<stdio.h>
int main()
{   
	int i=0;
	int n;
	
	printf("enter the valve of n\n");
	scanf("%d", &n);
	
	do{
		printf("the value of i is %d\n",i);
		i++;	
	}while(i<n);
	return 0;
}
	
