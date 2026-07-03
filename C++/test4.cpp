#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
		void data(){
			cout<<"start alphabate:"<<endl;
		}
};
class B: public A{
	public :
		void second(){
			 cout<<"second class call:"<<endl;
		}
};
class C:public B{
	public:
		void third(){
			cout<<"last class call:";
		}
};
int main(){
	C is;
	is.data();
	is.second();
	is.third();
	
	return 0;
}
