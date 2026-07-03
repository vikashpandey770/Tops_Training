#include<iostream>
#include<fstream>

using namespace std;
// :: skop resolution.
int main(){
	ofstream file("last.txt",ios::app);
	if(!file){
		cout<<"error";
	}
//	file<<"4.java language"<<endl;
	file<<"5.frameworks"<<endl;
	file<<"6.complete"<<endl;
	file.close();
	cout<<"ok done";
	return 0;
}
