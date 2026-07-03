#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"Enter a value of A:";
	cin>>a;
	
	cout<<"Enter a value of B:";
	cin>>b;
	
	
	cout<<"\nsum of:"<<a+b;
	cout<<"\nsub of:"<<a-b;
	cout<<"\nmulti of:"<<a*b;
	
	cout<<"\n -------increment operators-------";
	cout<<"\n incriment operator:"<<a++; //10+1=11...
	cout<<"\n incriment operator:"<<++a; // 1+11=12...
	cout<<"\n incriment operator:"<<a++;// 12+1=13
	cout<<"\n incriment operator:"<<++a;// 1+13=14....
	cout<<"\n incriment operator:"<<a++;// 14+1=15
	cout<<"\n incriment operator:"<<++a;// 1+15=16...
	
	
		cout<<"\n incriment operator:"<<++a;
		cout<<"\n incriment operator:"<<++a;
		cout<<"\n incriment operator:"<<++a;
		cout<<"\n incriment operator:"<<++a;
		cout<<"\n incriment operator:"<<++a;
						
	
	
	return 0;
}
