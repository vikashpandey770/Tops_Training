#include<iostream>
#include<fstream>

using namespace std;


int main(){

ifstream file("demo.txt");

if(!file){
	cout<<"error program";
	return 1;
}
cout<<"read the data in file:"<<endl;

string line;

while(getline(file,line)){
	cout<<line<<endl;
}
file.close();
	
	return 0;
}
