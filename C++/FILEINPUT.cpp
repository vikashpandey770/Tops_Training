#include<iostream>
#include<fstream>

using namespace std;


int main(){
ofstream objects("prompt.txt");

if(!objects){
	cout<<"errors";
	return 1;
}

objects<<"this is your first line."<<endl;
objects<<"this is your second line."<<endl;

objects.close();
cout<<"data add.";
	return 0;
}

