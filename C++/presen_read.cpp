#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream obj("presentation.txt");
	
		cout<<"read the data in your creating file:"<<endl<<endl;
	
		string s;
		while(getline(obj,s)){
			cout<<s<<endl;
		}
		return 0;
}
