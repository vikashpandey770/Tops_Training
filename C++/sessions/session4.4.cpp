#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int likes;
	int comments;
	int shares;
	
	cout<<"enter a total likes:";
	cin>>likes;
	cout<<"enter a total comments:";
	cin>>comments;
	cout<<"enter a total shares:";
	cin>>shares;
	
	if(likes>1000 && comments>200 && shares>50){
		cout<<"trending on instagram";
	}
	else{
		cout<<"not trending";
	}
	return 0;
}
