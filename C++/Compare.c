#include<stdio.h>
#include<conio.h>

void main(){
	int a=2;
	int b=2;
	int comp=a==b;
	printf("\ncomp:%d",comp);
	
	
	// ternery operators
	
	int aa;
	int bb;
	printf("\nenter aa:");
	scanf("%d",&aa);
	printf("\nenter bb:");
	scanf("%d",&bb);

	int max;
	
	max=(aa>bb) ? aa:bb;
	printf("max:%d",max);
	// incriment decriment
	
	int incri=10;
	pritnf("value of:%d",incri);
		getch();

}
