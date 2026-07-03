#include<stdio.h>
#include<conio.h>

int main(){
	
	int x;
	printf("X:");
	scanf("\n%d",&x);
	int y;
	printf("Y:");
	scanf("\n%d",&y);
	
	if(x>20){
		printf("you are younger man");
	}
	else{
		printf("\nyour value is under 20");
	}
	if(y<0){
		printf("\nyou are write a minus number:%d",y);
	}
}
