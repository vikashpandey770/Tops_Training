#include<stdio.h>
#include<conio.h>
int main(){
	
	int mark;
	
	printf("Enter a Marks:");
	scanf("\n%d",&mark);
	
	
	if(mark>100){
		printf("unknown number");
	}
	
else if(mark>80){
	printf("first class");
}
	else if(mark>70){
		printf("second class");
		
	}
	else if(mark>60){
		printf("third class");
	}
	else if(mark>40){
		printf("pass class");
	}
	
	else{
		printf("you are fail");
	}
	
	return 0;
}
