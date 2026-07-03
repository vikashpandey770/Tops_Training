#include<iostream>
#include<string.h>

using namespace std;


int main(){
	
	int i,j;
	for(i=1;i<10;i++){
		if(!(i>5&& i<9)){
			cout<<i<<endl;
		}
	}
	return 0;
}
