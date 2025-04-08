#include<stdio.h>
int sum(int a,int  b);
int main(){
	int c;
	c = sum(2,25);
	printf("the value of  c is %d\n",c);
//	int firstnumber,secondnumber;
//	printf("enter an integer:");
//	scanf("%d%d",&firstnumber,&secondnumber);
//	printf("add to number:%d",firstnumber+secondnumber);
//	return 0;
}
int sum(int a,int  b){
	int c;
	c =a+b;
	return c;
}


