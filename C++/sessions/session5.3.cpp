#include<iostream>
#include<string.h>
using namespace std;
int main(){
int totalCartAmount,ofer,ok;
	cout<<"enter your total cart amount:";
	cin>>totalCartAmount;
	if(totalCartAmount>2000){
		ofer=(totalCartAmount*20)/100;
		cout<<"final rate is with 20% offer applied:"<<ofer<<endl;
		ok=(totalCartAmount-ofer);
		cout<<"you are pay only:"<<ok;
	}
	else if(totalCartAmount>1000){
		ofer=(totalCartAmount*10)/100;
		cout<<"final rate is with 10% offer applied:"<<ofer<<endl;
		ok=(totalCartAmount-ofer);
		cout<<"you are pay only:"<<ok;
	}
	else{
		cout<<"no any offer you can pay total amount:"<<totalCartAmount;
	}
	return 0;
}
