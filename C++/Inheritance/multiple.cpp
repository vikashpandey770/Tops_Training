#include<iostream>
#include<string.h>

using namespace std;
class A{
	public:
		void grandfather(){
			cout<<"grand parent class";
		}
};
class B{
	public:
		void father(){
			cout<<"this is father class";
		}	
};
class C:public A ,public B{
	public:
	void child(){
		cout<<"this is a child class";
	}
};
int main(){
C add;
add.father();
add.grandfather();
add.child();

	return 0;
}
