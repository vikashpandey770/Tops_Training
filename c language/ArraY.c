#include<stdio.h>
#include<conio.h>

int main(){
	
	int myNumber[]={10,45,77,25,65,44};
	
	myNumber[0]=25;
	printf("%d",myNumber[4]);
	
	printf("\n%d",myNumber[0]);

// second logics

int number[3];

number[0]=23;
number[1]=45;
number[2]=34;
printf("\n%d",number[0]);

// get array sizes

int python[]={12,45,44,55};
printf("\nPrint of array sizes:%zu",sizeof(python));

 
	return 0;
	
}
