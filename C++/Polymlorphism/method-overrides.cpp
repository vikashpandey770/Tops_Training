#include<iostream>
#include<string.h>

using namespace std;

class A{
	public:
		void men(){
			cout<<"work"<<endl;
		}
};

class B{
	public:
		void men(){
			cout<<"eat"<<endl;
		}
};
class C:public A,public B{
	public:
		void men(){
			cout<<"sleep"<<endl;
		}
};

int main(){
C is;
is.men();
is.men();
is.men();

cout<<"method overrides ------------ use scope resolutions"<<endl;
is.A::men();
is.B::men();


return 0;
}
