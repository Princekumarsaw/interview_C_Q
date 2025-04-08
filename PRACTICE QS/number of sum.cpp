#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter the number:\n");                                              
	scanf("%d",&i);
	printf("enter the number:\n");
	scanf("%d",&n);
	for (i;i<=n;i++)
	{
		sum+=i;
	}
	printf("the value of sum (any number) is %d",sum);
	return 0;
}
//    other type of loop.....
//while (i<=n)
//	{
//		sum+=i;
//		i++;
//	}
//	printf("the value of sum (any number) is %d",sum);
//	return 0;

//do{
//printf("the value of sum (any number) is %d\n",sum);
//i++;
//sum+=i;
//}while(i<=n);

//return 0;

