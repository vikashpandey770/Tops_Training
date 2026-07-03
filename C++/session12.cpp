#include<iostream>
#include<string.h>

using namespace std;


int main(){

string title;
string artist;
int duration;

cout<<"enter a song title:";
getline(cin,title);
cout<<"enter a song artist:";
getline(cin,artist);
cout<<"enter a time duration:";
cin>>duration;	

cout<<"song title:"<<title<<endl;
cout<<"song artist name:"<<artist<<endl;
cout<<"song time duration:"<<duration<<"second";
	
}
