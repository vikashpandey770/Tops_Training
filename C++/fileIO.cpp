#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream addfile("newfiletoday.txt");
	
	if(!addfile){
		cout<<"error create"<<endl;
		return 1;
	}
	
	addfile<<"this is a example"<<endl;
	addfile<<"complete the create file"<<endl;
	addfile<<"and write the file"<<endl;
	
	addfile.close();
	cout<<"create successfully";
	
	return 0;
}
