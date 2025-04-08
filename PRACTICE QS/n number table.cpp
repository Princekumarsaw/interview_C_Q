#include<stdio.h>
int main()
{
	int a,i;
	printf("inter the table number:\n");
	scanf("%d",&a);
	for(int i=10;i;i--){
		printf("%d*%d=%d\n",i,a,i*a);
	}
	return 0; 
} 
