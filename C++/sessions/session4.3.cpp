#include<iostream>
#include<string.h>
using namespace std;
int main(){	
int userAge;
int totalOrderValue;
cout<<"enter your age:";
cin>>userAge;
cout<<"your order value:";
cin>>totalOrderValue;
if(userAge>=18 &&totalOrderValue>500){
	cout<<"TRUE";
}
else{
	cout<<"ELSE";
}
return 0;
}
