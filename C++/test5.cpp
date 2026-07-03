#include<iostream>
#include<string.h>

using namespace std;

class A{
	public:
		void first(){
			cout<<"enter the top level"<<endl;
		}
};
class B:public A{
	public:
		void second(){
			cout<<"this is a second level"<<endl;
		}
};

class C:public A{
	public:
		void third(){
			cout<<"this is a second level C class";
		}
};
int main(){
	
	C aa;
	aa.first();
	aa.third();
	B ab;
	ab.first();
	ab.second();
	return 0;
}
