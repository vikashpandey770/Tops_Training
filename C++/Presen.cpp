#include<iostream>
#include<fstream>

using namespace std;
// create a new file and write the data.
int main(){
	ofstream obj("presentation.txt");
	
	if(!obj){
		cout<<"error same program already executed";
		
		return 1;
		
	}
	
	obj<<"this is a my first time presentation."<<endl;
	obj<<"hello my dear friends i am very happy"<<endl;
	obj<<"total write you can see use in read file"<<endl;
	
	
	obj.close();
	
	cout<<"data add.";
	return 0;
}
