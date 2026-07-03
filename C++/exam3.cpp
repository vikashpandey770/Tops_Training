#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int i,j,k;
	
	for(i=1;i<8;i++){
		
		for(k=1;k<=8;k++){
			cout<<" ";
			
			for(j=1;j<=i;j++){
				cout<<"*";
			}cout<<endl;
		}
//	}
	return 0;
}
