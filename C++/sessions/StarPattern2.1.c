#include<stdio.h>
#include<conio.h>

int main(){
	
	int n=5;
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(j>=i){
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
