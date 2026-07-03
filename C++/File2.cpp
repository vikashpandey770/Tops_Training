#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream file("last.txt");
	cout<<"------------------your file data is:----------------------"<<endl;
	if(!file){
		cout<<"error";
		return 1;
	}
	
	string fl;
	while(getline(file,fl)){
		cout<<fl<<endl;
	}
	file.close();

	return 0;
	
}
