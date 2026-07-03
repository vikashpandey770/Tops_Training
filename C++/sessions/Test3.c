#include<stdio.h>
#include<conio.h>


int main(){
	int a;
	printf("enter your number here:");
	scanf("\n%d",&a);
	
	if(a%2==0){
		printf("prime number");
	}
	else{
		printf("other number");
	}
	
	return 0;
}
