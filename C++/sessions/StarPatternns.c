#include<stdio.h>
#include<conio.h>

int main(){
	int n=6;
	int i,j;
	char a ='A';
	
	for(i=0;i<n;i++){
		for(j=1;j<i+1;j++){
			printf("%c",a++);
	//	printf("*");
		}
		printf("\n");
	}
	return 0;
}
