#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int i,j;
	int v=1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<v++;
		}
		cout<<endl;
	}
	return 0;
}
