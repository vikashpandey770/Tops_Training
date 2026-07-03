#include<iostream>
#include<string.h>

using namespace std;

inline int square (int x){
	return x*x;
}
int main(){
	int num;
	cout<<"enter your num:";
	cin>>num;
	
	cout<<"your number is:"<<num<<endl;
	cout<<"square find:"<<square(num);
	return 0;
}
