#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		long contact;
		float salary;
		
		public:
			Employee(){
				cout<<"enter your name:";
				getline(cin,name);
				cout<<"enter your contact number:";
				cin>>(contact);
				cout<<"enter your salary:";
				cin>>(salary);
			}
			
};

int main(){
	return 0;
}
