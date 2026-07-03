#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n,i;
	cout<<"enter a number:";
	cin>>n;
	for(i=2;i<n;i++){
	if(n%i==0){
		cout<<"not prime";
		return 0;
	}	
	}
	if(n>1){
		cout<<"prime number";
	}
	else{
		cout<<"not prime";
	}
	
}
