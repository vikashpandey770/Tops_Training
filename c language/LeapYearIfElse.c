#include<stdio.h>
#include<conio.h>

int main(){
	
	int year;
	printf("Enter A Year:");
	scanf("\n%d",&year);
	
	printf("Year:%d",year);
	
	if(year%4 == 0 && year % 100 != 0){
		printf("\nleap year:%d",year);
	}
	else{
		printf("\nnot a leap year:%d",year);
		
	}
}

// error code'
