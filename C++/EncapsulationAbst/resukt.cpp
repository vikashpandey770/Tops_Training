#include<iostream>
#include<string.h>

using namespace std;


int main(){
int a,b,c;
cout<<"enter a mark:";
cin>>a;
cout<<"enter b mark:";
cin>>b;
cout<<"enter c mark:";
cin>>c;


float per=(a+b+c)/3;
cout<<"per:"<<per;
if(a>33){
	if(b>33){
		if(c>33){
			
			if(per>=85&& per<=100){
				cout<<"student percentage:"<<per<<"%"<<endl;
			}
			
			
		}
	}
}	
	return 0;
}
