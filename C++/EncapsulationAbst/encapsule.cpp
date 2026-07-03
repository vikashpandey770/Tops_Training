#include<iostream>
#include<string.h>
using namespace std;	
class Parent{
	protected :
		int a=10;		
};
class Child: public Parent{
	public:
		void show(){
			cout<<"A:"<<a;
		}
};
int main(){
	Child ca;
	ca.show();
	return 0;
}
