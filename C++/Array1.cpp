#include<iostream>
#include<string.h>

using namespace std;


int main(){

int marks[]={45,32,54,78,96,74,20,10};

	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	cout<<marks[4]<<endl;
	cout<<marks[5]<<endl;
	cout<<marks[6]<<endl;
	cout<<marks[7]<<endl;
	
	
	cout<<"changes the value in array"<<endl;
	marks[3]=500;
	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	cout<<marks[4]<<endl;
	cout<<marks[5]<<endl;
	cout<<marks[6]<<endl;
	cout<<marks[7]<<endl;
	cout<<"-------using this loop use --------"<<endl;
for(int i=0;i<marks[i];i++;){
	cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
}
	return 0;
}
