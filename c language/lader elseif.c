#include<stdio.h>
#include<conio.h>
int main(){
	
	int marks;
	printf("enter your marks:");
		
	scanf("%d",&marks);
	printf("your marks is:%d",marks);
	
	if(marks>100 ||marks<0){
		printf("undefined value");
	}
	else if(marks>=85 && marks<=100){
		printf("\nA+");
	}
	
	else if(marks>=70&& marks<85){
		printf("\nA");
	}
	
	else if(marks>=55&& marks<70){
		printf("\nB+");
	}
	
	else if(marks>=40&& marks<50){
		printf("\nC");
	}
	
	else if(marks>=33 && marks<40){
		printf("\nD");
	}
	
	else{
		printf("\nFail");
	}
	return 0;	
}
