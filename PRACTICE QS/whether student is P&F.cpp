#include<stdio.h>
int main()
{
	float physics, chemistry, maths;
	float total;
	printf("enter physics marks\n");
	scanf("%f",& physics);
	printf("enter chemistry marks\n");
	scanf("%f",& chemistry);
	printf("enter maths marks\n");
	scanf("%f",& maths);
	total = (physics+ chemistry+ maths)/3;
	if((total<40)||physics<33||chemistry<33||maths<33)
	{
		printf("your total percentage is %f and you are failed",total);
	}
	else
	{
     	printf("your total percentage is %f and you are pass",total);	
	}
	return 0;
}
