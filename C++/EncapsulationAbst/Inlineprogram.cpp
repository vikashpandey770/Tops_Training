#include<iostream>
#include<string.h>
using namespace std;

inline int square(int x){

	return x*x;
}
int main(){
	int num;
	cout<<"enter num:";
	cin>>num;
	
	cout<<"your num is:"<<num<<endl;
	cout<<"square find:"<<square(num);
	
	return 0;
}
