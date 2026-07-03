#include<stdio.h>
#include<conio.h>

int main(){
	
	int n;
	int i,j;
	printf("enter the value:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(j=0;j<i+1;j++){
			
			printf("*");			
		}
		printf("\n");
	}
	
	
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		
		for(j=0;j<i+1;j++){
			
			printf("*");			
		}
		printf("\n");
	}
	
	return 0;
	
}
