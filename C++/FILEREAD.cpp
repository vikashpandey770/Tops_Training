#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream objects("prompt.txt");
	if(!objects){
		cout<<"error";
		return 1;
	}
	cout<<"read the file data."<<endl;
	string s;
	while(getline(objects,s)){
		cout<<s<<endl;
	}
	return 0;
}
