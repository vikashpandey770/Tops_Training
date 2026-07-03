#include<stdio.h>
#include<conio.h>

int main(){
	
	int n=10;
	int i,j;
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			if(i+j>=n-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
