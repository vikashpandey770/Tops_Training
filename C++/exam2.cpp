#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int leapyear;
	
	cout<<"enter a year:";
	cin>>leapyear;
	
	if(leapyear%4==0){
		cout<<"leapyear:"<<leapyear<<endl;
		
	}
	else{
		cout<<"normal year:"<<leapyear;
	}
}
