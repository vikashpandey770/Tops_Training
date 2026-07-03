#include<stdio.h>
#include<conio.h>
int main()
{
	
	int num;
	printf("enter your number:");
	scanf("\n%d",&num);
	printf("your number is:%d",num);
	
	if(num%2==0){
		printf("\n even number:%d",num);
	}
	else{
		printf("\n odd number:%d",num);
	}
	
}
