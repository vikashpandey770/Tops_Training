#include<iostream>
#include<fstream>

using namespace std;


int main(){

ofstream data("filewrite.txt");

if(!data){
	cout<<"error provide";
	return 1;
}

data<<"create new data";
data.close();
cout<<"create successfully";
	
	return 0;
}
