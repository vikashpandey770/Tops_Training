#include<stdio.h>
#include<conio.h>

int main(){
	
	int age;
	
	printf("Enter your Age:");
	scanf("\n%d",&age);
	
	if(age>18){
		printf("eligible for vote");	
	}
	
	if(age<18)	{
		printf("not eligible");
	}
}
