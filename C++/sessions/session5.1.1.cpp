#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string team;

	cout<<"enter your team name:";
	//cin>>team;
	getline(cin,team);
	 if(team=="mumbai indians"||team=="mi"){
		cout<<"Go mumbai indians"<<endl;
	}
	else if(team =="chennai super kings"|| team =="csk"){
		cout<<"Chennai super kings for the win !";
	}
	else if(team == "gujarat titens"||team=="gt"){
		cout<<"win of the gujarat titens";
	}
	else{
		cout<<"error name";
	}
	return 0;
}
