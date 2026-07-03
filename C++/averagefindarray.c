#include<stdio.h>
#include<conio.h>

int main(){
	
	int ages[]={20,30,56,88,98,32};
	
	float avg,sum=0;
	
	int i;
	int length=sizeof(ages)/sizeof(ages[0]);
	
	
	for(i=0;i<length;i++){
		sum+=ages[i];
	}
	
	avg=sum/length;
	
	printf("the average value of :%.2f",avg);
}
