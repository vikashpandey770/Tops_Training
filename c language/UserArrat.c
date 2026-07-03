#include<stdio.h>
#include<conio.h>

void main(){
	
	int a[5],i;
	
	for(i=0;i<=4;i++){
		
		printf("Enter your element:");
		scanf("%d",&a[i]);
	}
	
	printf("\nArray Element Show \n");
	for(i=0;i<5;i++){
		printf("a[%d]:%d\n",i, a[i]);
	}
	
	getch();
}
