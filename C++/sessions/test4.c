#include<stdio.h>
#include<conio.h>

int main(){
	int i,j;
	
	for(i=0;i<=5;i++){
		
		for(j=1;j<=5;j--){
			printf("*");
		}	
	}
	printf("\n");
	//2 example new code
	
	for(i=0;i<5;i++){
		
		for(j=0;j<i;j++){
			printf("A");
		}
		printf("A");
	}
	
	return 0;
}
