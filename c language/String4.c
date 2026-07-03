#include<stdio.h>
#include<conio.h>
#include<string.h>


void main(){
	int x,x1,x2;
	char name1[30];
	char name2[30];
	char name3[30];
	
	printf("enter your name1:");
	gets(name1);
	
	printf("enter your name2:");
	gets(name2);
	
	printf("enter your name3:");
	gets(name3);
	
	printf("Length of String\n");
	x= strlen(name1);
	x1=strlen(name2);
	x2=strlen(name3);
	printf("\n String length(name1):%d",x);
	printf("\n String length(name2):%d",x1);
	printf("\n String length(name3):%d",x2);


strcpy(name2,name1);
printf("\nname1 string:%s",name2);

strupr(name3);
printf("\nname 3 upper case:%s",name3);

strlwr(name1);
printf("\n name 1 Lower case:%s",name1);


}
