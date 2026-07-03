#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int h=6;
	
	for(int i=0;i<h;i++){
		cout<<"*";
	}
	for(int j=0;j<(h-1);j++){
		if(i==0 || i==h-1)
		cout<<"*";
		else
		continue;
	}
	cout<<endl;

		return 0;
}
