#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,num,sum=0;
	printf("Enter the value of natural num:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum +=i;
	}
	
	printf("your value is:%d\n",num,sum);
return 0;

}
