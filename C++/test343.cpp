#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a,i;
	long fact=1;
	cout<<"enter a number:";
	cin>>a;
	
	for(i=1;i<=a;i++){
		fact = fact*i;
	}
	cout<<"factorial:"<<fact<<endl;
	
	return 0;
}
