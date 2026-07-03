#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int n=10;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<n-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
