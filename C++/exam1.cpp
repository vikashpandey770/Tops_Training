#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n,i;
	long fact=1;
	
	cout<<"enter a number:";
	cin>>n;
	
	for(i=1;i<=n;i++){
	
		fact=fact*i;
	
		cout<<fact<<endl;
	}
	return 0;
}
