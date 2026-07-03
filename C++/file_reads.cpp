#include<iostream>
#include<fstream>

using namespace std;

int main (){
	ifstream filedata("first.txt");
	
	cout<<"your text file data is here:"<<endl;
	
	string news;
	
	while(getline(filedata,news)){
		cout<<news<<endl;
	}
	
	return 0;
}
