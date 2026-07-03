#include<stdio.h>
int main(){
	int a;
	for(a=1; a++;){
		printf("a: %d\n",a);
		if(a==10){
			break;
		}
	}
	return 0;
}
