#include<iostream>
#include<string.h>

using namespace std;

class A{
	
	public:
		void data(){
			cout<<"your A value data"<<endl;
		}
}; 

class B: public A{
	
	public :
		void data1(){
			cout<<"your data 1 value is here";
		}
};

int main(){
	B first;
	first.data();
	first.data1();
	return 0;
}
