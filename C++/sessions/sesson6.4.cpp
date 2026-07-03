#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int i;
	int j;
	int n=5;
	
	for(i=1;i<=n;i++){
		for(j=1;j<i+1;j++){
			
			cout<<"*";
		}
		cout<<""<<endl;
	}
	
	return 0;
}
