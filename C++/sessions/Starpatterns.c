#include<stdio.h>
#include<conio.h>

int main(){
	
	int n;
	int i,j;
	char a ='A';
	printf("enter a number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=1;j<i+1;j++){
			printf("%c",a++);
		}
		printf("\n");
	}
	return 0;
}
