#include<stdio.h>
int main()
{
	//write a prigrem to find gretest of four numbers entered b the user
	int a,b,c,d;
	printf("inter the for number\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("your hieyer number %d",a);
	}
	else if(b>a && b>c && b>d){
			printf("your hieyer number %d",b);
		}
		else if(c>a && c>b && c>d){
				printf("your hieyer number %d",c);
			}
	else{
		printf("your hiyer number %d",d);
	}
	return 0;
}
