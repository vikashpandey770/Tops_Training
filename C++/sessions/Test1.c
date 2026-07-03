#include<stdio.h>
#include<conio.h>

int main(){
	
	int a=10;
	int b=20;
	int c=5;
	
	if(a>b && a>c){
		printf("A is large");
	}
	else if(b>c){
		printf("B is large");
	}
	else{
		printf("C is large");
	}
	
	return 0;
	
}
