#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream data("filewrite.txt");
	if(!data){
		cout<<"error provides";
		return 1;
	}
	
	data<<"add a data in more codes";
	
	data.close();
	
	cout<<"successfully";
	return 0;
}
