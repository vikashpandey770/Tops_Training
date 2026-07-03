#include<stdio.h>
#include<conio.h>

int main(){
	
	int n=6;
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(i==0||j==0 || i==n-1|| j==n-1){
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
