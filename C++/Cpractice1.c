#include<stdio.h>
#include<conio.h>

int main(){
	
	int num,i;
	printf("MULTIPLICATION TABLE\n");
	printf("Enter the value:");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",num,i,num*i);
		
	}
return 0;	
}
