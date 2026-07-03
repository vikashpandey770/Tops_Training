#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream file("last.txt");
	if(!file){
		cout<<"error";
		return 1;
	}
	
	file<<"1.c language"<<endl;
	file<<"2.c++ language"<<endl;
	file<<"3.database"<<endl;

	file.close();
	
	cout<<"success";
	return 0;
}
