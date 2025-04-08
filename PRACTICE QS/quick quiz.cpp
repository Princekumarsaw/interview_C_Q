#include<stdio.h>
void gm();
void ga();
void gn();

int main(){
	gm();
	ga();
	
	return 0;
}
void gm(){
	printf("good morning\n");
}
void ga(){
	printf("good afternoon\n");
	gn();
}
void gn(){
	printf("good night\n");
}
