#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int a;
	int count=1;
	int sum=0;
	
	cout<<"enter a number:";
	cin>>a;
	
	cout<<"your value is:"<<a;

while(count<=a){
	sum=sum+count;
	count=count+1;
}
cout<<"sum of:"<<sum;
	return 0;
}
