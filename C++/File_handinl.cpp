#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream file("examples.txt");
	file<<"this is your file project";
	
	file.close();
}
