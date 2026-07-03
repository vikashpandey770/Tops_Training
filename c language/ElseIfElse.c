#include<stdio.h>
#include<conio.h>

int main(){
	
	int time;
	printf("Enter a Time:");
	scanf("\n%d",&time);
	
	if(time<12){
		printf("good morning");
	}
	else if(time<17){
		printf("good afternoon");
	}
	else if(time<20){
		printf("good evening");
	}
	else{
		printf("good night");
	}
	return 0;
}
