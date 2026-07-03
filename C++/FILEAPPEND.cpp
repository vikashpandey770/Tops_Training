#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream objects("prompt.txt",ios::app);
	
	if(!objects){
		cout<<"error";
		return 1;
	}
	objects.close();
	cout<<"update this line success"<<endl;

	return 0;
}
