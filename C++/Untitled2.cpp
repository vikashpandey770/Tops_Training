#include<iostream>
#include<string.h>

using namespace std;

class A{
	public:
		void ajit(){
			cout<<"bank job"<<endl;
		}
};

class B{
	public:
		void ajit(){
			cout<<"marketing"<<endl;
		}
};
class C:public A{
	public :
		void ajit(){
			cout<<"final banker"<<endl;
		}
};
int main(){
	
	C is;
	is.ajit();
	is.ajit();
	
	is.A::ajit();
	
	return 0;
}
