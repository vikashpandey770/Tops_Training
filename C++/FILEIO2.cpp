#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream file("first.txt");

	file<<"add a write file"<<endl;
	file<<"add a second line data";

	file.close();
	cout<<"success";
	
}
