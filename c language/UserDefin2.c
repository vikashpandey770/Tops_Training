#include<stdio.h>

void main(){
	int a;
	
	printf("Enter Your age:");
	scanf("%d",&a);
	if(a>18){
		printf("you are eligible for voting");
		
	}else{
		printf("sorry next time apply");
	}
	
	return 0;
}
