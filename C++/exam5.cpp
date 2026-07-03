#include<iostream>
#include<string.h>

using namespace std;


class A{
	public:
		void song(){
			cout<<"A for apple"<<endl;
		}
};

class B{
	public:
		void dance(){
			cout<<"B for dance"<<endl;
			
		}
};

class C:public A,public B{
	public:
		void run(){
			cout<<"C is fast running"<<endl;
		}
};
int main(){

C is;
is.song();
is.run();
is.dance();
	
	
}
