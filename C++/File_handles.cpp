#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ifstream file("examples.txt");
	string s;
	getline(file,s);
	
	cout<<"read file:"<<s;
	
	return 0;
}
