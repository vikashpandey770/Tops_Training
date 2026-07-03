#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int a,b;
	cout<<"enter A number:";
	cin>>a;
	cout<<"enter B number:";
	cin>>b;
	
	if(a>b){
		cout<<b<<" Small";
	}
	else if(a<b){
		cout<<a<<" small";
	}
	
	return 0;
}
