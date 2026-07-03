#include<stdio.h>
#include<conio.h>

int main(){
	
	int n;
	int i,j;
	printf("enter a value:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
