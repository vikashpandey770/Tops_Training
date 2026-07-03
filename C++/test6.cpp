#include<iostream>
#include<string.h>

using namespace std;

class A{
	public:
		void first(){
			cout<<"multiple program "<<endl;
		}
};
class B{
	public:
		void second(){
			cout<<"multiply program second"<<endl;
		}
};
class C:public A,public B{
	public:
		void third(){
			cout<<"third row"<<endl;
		}
};


class D{
	public:
		void news(){
			cout<<"hybrid work"<<endl;
		}
};

class E:public B,public D,public A{
	public:
		void last(){
			cout<<"over hybrid";
		}
};
int main(){
	
	C is;
	is.first();
	is.second();
	is.third();
	
	
	E as;
	as.first();
	as.news();
	as.second();
	as.last();
	return 0;
}
