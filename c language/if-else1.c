#include<stdio.h>
#include<conio.h>

int main(){
	
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	printf("your age is:%d\n",age);
	
	if(age>=18){
		printf("ok");
	}
	else{
		printf("lower age");
	}
	return 0;
}
