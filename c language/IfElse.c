#include<stdio.h>
#include<conio.h>

int main(){
	
	int time;
	printf("Enter A Time in 24 hour Formate:");
	scanf("\n%d",&time);
	if(time<12){
		printf("good morning");
	}else{
		printf("noon");
	}
	
	return 0;
}
