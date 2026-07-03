#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char se;
	
	cout<<"enter a word:";
	cin>>se;
	cout<<"your word is:"<<se<<endl;
	
if(se>='a'&&se<='z'){
	cout<<"lowercase";
}	
else{
	cout<<"uppercase";
}
	
	return 0;
}
