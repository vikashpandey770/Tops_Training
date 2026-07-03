#include<iostream>
#include<string.h>

using namespace std;


int main(){

char another[]="flipkart";
char shopping_app[25];

strcpy(shopping_app, another);

cout<<"enter the shopping app name:"<<shopping_app;

if(strlen(shopping_app)<5){
	
	cout<<"name is:"<<shopping_app<<endl;
}
else{
	cout<<"error";
}
	
	
	return 0;
}
