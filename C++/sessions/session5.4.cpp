#include<iostream>
#include<string.h>

using namespace std;
int main(){
	
	int age;
	
	cout<<"enter your age:";
	cin>>age;
	
	if(age>=18){
		cout<<"Eligible for driving licence";
	}
	else if(age>=21){
		cout<<"Eligible for credit card";
	}
	else if(age>=25){
		cout<<"Eligible for car rental";
	}
	else{
		cout<<"you are under age"<<age;
	}
}
