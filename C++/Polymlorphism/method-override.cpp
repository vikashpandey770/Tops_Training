#include<iostream>
#include<string.h>

using namespace std;
class Parent{
	public:
		void display(){
			cout<<"parent class display"<<endl;
		}
};
class Child:public Parent{
	public:
		string name;
		void display(){
			cout<<"enter your name:";
			getline(cin,name);
			cout<<"your name is:"<<name<<endl;
		}
};
int main(){
	Child c;
	c.display();
	c.display();// note print a parent class.
	// parent class print using scope resolutions
	c.Parent::display();
	return 0;
}
