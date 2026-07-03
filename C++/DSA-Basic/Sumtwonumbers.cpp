#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int a,sum;
	int count=1;
	
	cout<<"enter A number:";
	cin>>a;
	cout<<"your value is:"<<a<<endl;
	while(count<=a){
		sum=sum+count;
		
		count++;
		
	}
	
	cout<<"sum of all numbers:"<<sum;
}
